// Convert Decimal Number into Binary  Number
#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
	if(n==0) return ;
	else {
		func(n/2);
		if(n%2) cout<<"1";
		else cout<<"0";
	}
}
int main()
{
	int num ;
	cin>>num;
	func(num);
}
