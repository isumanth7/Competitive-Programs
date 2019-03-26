#include<bits/stdc++.h>
using namespace std;
int prod(int x , int y)
{
	if(x<y) return prod(y,x);
	else if(y!=0) return (x+ prod(x,y-1) );
	else return 0 ;
}
int main()
{
	int x , y ;
	cin>>x>>y;
	cout<<prod(x,y);
}
