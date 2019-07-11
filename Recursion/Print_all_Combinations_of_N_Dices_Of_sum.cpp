#include<bits/stdc++.h>
using namespace std;
void func(int num , vector<int>&v,int sum)
{
	if(num==0)
	{
	if(accumulate(v.begin(),v.end(),0)==sum)
	{
				cout<<"[";
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<"]"<<endl;
	}
	}
	else
	{
		for(int i=1;i<=6;i++)
		{
			v.push_back(i);
			func(num-1, v,sum);
			v.pop_back();
		}
	}
}
void func1(int n,int sum)
{
	vector<int>v;
	func(n,v,sum);
}
int main()
{
	int num;
	cin>>num;
	int sum ;
	cin>>sum;
	func1(num,sum);
}
