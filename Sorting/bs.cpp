#include<bits/stdc++.h>
using namespace std;
void bs(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
	int didswap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
		{
            	int temp=arr[j+1];
            	arr[j+1]=arr[j];
            	arr[j]=temp;
		didswap=1;
		}
		if(didswap==0)
		break;
	}
    }
}
int main()
{
    int n,arr[n];
    cout<<"enter the no. of elements:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bs(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//time complexity =O(n^2)      for best case O(n)
