//selection sort which is used in gambling putting smallest among them  from left side for every loop
#include<bits/stdc++.h>
using namespace std;
void swap(int *arr,int a , int b)
{
	int temp = arr[a] ;
	arr[a] = arr[b];
	arr[b]= temp;
}
void selection_sort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min = i ;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[min]){
				min = j ;
			}
		}
		swap(arr,min,i);
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
	selection_sort(arr,num);
	cout<<"SOrted order"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
}
