#include<bits/stdc++.h>
using namespace std;


bool isPresent(int arr[],int low,int high,int a)
{
    if(high>=low)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==a)
            return true;
        else if(arr[mid]>a)
            isPresent(arr,low,mid-1,a);
        else if(arr[mid]<a)
            isPresent(arr,mid+1,high,a);

            return true;

    }

    else
        cout<<"The element is not present  in the list "<<endl;
    return false;

}
int main()
{
    int n;
    int x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    isPresent(a,1,n,x);
    if(isPresent(a,1,n,x)==true)
     cout<<"The element is present in the list "<<endl;



    return 0;
}
