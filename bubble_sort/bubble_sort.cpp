//bubble sort highest element to right extrem for every outer loop
#include<bits/stdc++.h>
using namespace std;
void swap(int *arr,int a , int b)
{
	int temp = arr[a] ;
	arr[a] = arr[b];
	arr[b]= temp;
}
void bubble_sort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr,i,j);
			}
		}
	}

}
int main()
{
	cout<<"enter how many elements into array"<<endl;
	int num;
	cin>>num;
	cout<<"enter the "<<num<<" elements"<<endl;
	int arr[num];
	for(int i=0;i<num;i++)cin>>arr[i];
	bubble_sort(arr,num);
	cout<<"SOrted order"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
}
