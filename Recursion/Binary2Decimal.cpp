#include<bits/stdc++.h>
using namespace std;
int func1(string s , int index  ,int last)
{
	if(index==last) return 0 ;
	else 
	{
		if(s[index]=='1') return pow(2,last-index-1) + func1(s,index+1,last);
		else return func1(s,index+1,last);
		
	}
}
int func(string s)
{
	return func1(s,0,s.length());
}

int main()
{
	string s;
	cin>>s;
	cout<<func(s);
}
