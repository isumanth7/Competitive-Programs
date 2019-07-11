#include<bits/stdc++.h>
using namespace std;
int calls = 0 ;
void func(int num , vector<int>&v,int sumSoFar,int sum)
{
	calls++;
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
			if(sumSoFar + i + 1*(num-1) <= sum && sum<=sumSoFar + i + 6*(num-1))
			{
							 v.push_back(i);
			                 func(num-1, v,sumSoFar+i,sum);
		                     v.pop_back();
			}
	    }
}

}
void func1(int n,int sum)
{
	vector<int>v;
	int sumSoFar = 0 ;
	func(n,v,sumSoFar,sum);
}
int main()
{
	int num;
	cin>>num;
	int sum ;
	cin>>sum;
	func1(num,sum);
	cout<<calls;
}
