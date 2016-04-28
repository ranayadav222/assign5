#include <bits/stdc++.h>
using namespace std;
double atoi(string str)
{
	string f,s;
	int i;
	for(i=0;str[i]!='.';i++)
		f+=str[i];
	i++;
	for(;i<str.size();i++)
		s+=str[i];
	int j=0;
	double res=0;
	for(int i=f.size()-1;i>=0;i--)
	{
		double t=(double)(f[i]-48);
		res+=(t*pow(10,j));
		j++;
	}
	cout<<res<<".";
	j=0;
	double res2=0;
	for(int i=s.size()-1;i>=0;i--)
	{
		double t=(double)(s[i]-48);
		res2+=(t*pow(10,j));
		j++;
	}
	cout<<res2<<endl;
}
main()
{
	string str;
	getline(cin,str);
	double i=atoi(str);
}