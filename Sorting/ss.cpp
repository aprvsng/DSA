#include<bits/stdc++.h>
using namespace std;
void ss(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
	int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
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
    ss(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//time complexity = O(n^2)
