//Print all N Length binary numbers
#include<bits/stdc++.h>
using namespace std;
void func1(int n , string s)
{
	if(n==0)
	{
		cout<<s<<endl;
		return ;
	}
	else
	{
		func1(n-1,s+"0");
		func1(n-1,s+"1");
	}
}
void func(int num)
{
	string s = "";
	func1(num,s);
}
int main()
{
	int num;
	cin>>num;
	func(num);
}
