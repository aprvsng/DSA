#include<bits/stdc++.h>
using namespace std;
void is(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
	int j=i;
	while(j>0 && arr[j-1]>arr[j])
	{
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
	    j--;
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
    is(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


//time complexity = O(n^2)   best case = O(n)
