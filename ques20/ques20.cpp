#include <bits/stdc++.h>
using namespace std;
main()
{
	string str;
	getline(cin,str);
	int i=0;
	while(str[i]==' ' || str[i]=='\t')
		str.erase(str.begin()+i);
	i=str.size()-1;
	while(str[i]==' '|| str[i]=='\t')
	{
		str.erase(str.begin()+i);
		i--;
	}
	cout<<"*"<<str<<"*";

}