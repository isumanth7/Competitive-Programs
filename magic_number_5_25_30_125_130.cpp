/*
Find nth Magic Number
A magic number is defined as a number 
which can be expressed as a power of 5 or sum of unique powers of 5. 
First few magic numbers are 5, 25, 30(5 + 25), 125, 130(125 + 5), ….


Write a function to find the nth Magic number.
*/
#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
	int s = 0 ;
	int pow = 1 ;
	while(n)
	{
		pow = pow*5;
		if(n&1)
		{
			s =  s + pow;
		}
		n = n>>1;
	}
	return s;
}
int main()
{
	int n ;
	cin>>n;
	cout<<fun(n);
}
