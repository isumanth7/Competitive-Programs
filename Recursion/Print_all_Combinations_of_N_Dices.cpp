#include<bits/stdc++.h>
using namespace std;
void func(int num , vector<int>&v)
{
	if(num==0)
	{
		cout<<"[";
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<"]"<<endl;
	}
	else
	{
		for(int i=1;i<=6;i++)
		{
			v.push_back(i);
			func(num-1, v);
			v.pop_back();
		}
	}
}
void func1(int n)
{
	vector<int>v;
	func(n,v);
}
int main()
{
	int num;
	cin>>num;
	func1(num);
}
