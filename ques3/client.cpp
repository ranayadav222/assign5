#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>	
#include <netdb.h>
using namespace std;
#define portno 5000


main()
{
	struct sockaddr_in serv_addr;
	struct hostent *serv;

	int sfd = socket(AF_INET,SOCK_STREAM,0);
	
	if(sfd<0)
	{
		cout<<"socket error!!"<<endl;
		exit(0);
	}	
    serv = gethostbyname("localhost");
    if(serv==NULL){
    	cout<<"gethostbyname error!!"<<endl;
    	exit(0);
    }

    bcopy((char *)serv->h_addr,(char*)&serv_addr.sin_addr.s_addr,serv->h_length);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port= htons(portno);
    if(connect(sfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr))<0){
    	cout<<"connect error!!"<<endl;
    	exit(0);
    }
	char wbuf[256],temp[256];

	cout<<"Connection done"<<endl;
	fgets(wbuf,255,stdin);
	if(send(sfd,wbuf,strlen(wbuf),0)<0){
		printf("write error!!\n");
		exit(0);
	}
	bzero(temp,256);
	if(recv(sfd,temp,255,0)<0){
		cout<<"Recieve error!!"<<endl;
		exit(0);
	}
	cout<<temp<<endl;

}