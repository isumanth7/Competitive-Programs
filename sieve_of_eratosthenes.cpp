#include<bits/stdc++.h>
using namespace std;
void check(int num)
{
	bool arr[num+1];
	memset(arr,true,sizeof(arr));
	
	for(int i=2;i*i<num;i++)
		if(arr[i] == true)
			for(int j=i*i;j<=num;j+=i)
				arr[j] = false;
				
	for(int i=2;i<num;i++)
    	if(arr[i] == true)cout<<i<<" ";
}
int main()
{
	int num ;
	cin>>num;
	check(num);
}
