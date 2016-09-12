#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,l,i;
    long long arr[1000],max;
     double res;
    cin>>n>>l;
    for(i=0;i<n;++i)
    cin>>arr[i];
    sort(arr,arr+n);
    max=0;
    for(i=0;i<n-1;++i)
    if(arr[i+1]-arr[i]>max)
    max=arr[i+1]-arr[i];





        res=max/2.0;

         if(arr[0]!=0)
            if(res<arr[0])
            res=arr[0]*1.0;

          if(arr[n-1]!=l)
            if(res<l-arr[n-1])
            res=l-arr[n-1]*1.0;







cout << std::fixed<<res<<endl;

    return 0;
}
