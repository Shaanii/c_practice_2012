#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
int n,m;
long long *arr;
cin>>n;

    arr=(long long *)malloc((n+1)*sizeof(long long));
    for(int i=1;i<=n;++i)
    cin>>arr[i];

    cin>>m;
    int code,l,r;
    long long p;
    while(m--)
    {

        cin>>code>>l>>r;
        if(code==1)
        {
          cin>>p;
          for(int i=l;i<=r;++i)
             if(arr[i]%p==0)
                  arr[i]=arr[i]/p;
        }
        else
          arr[l]=r;

    }
    for(int i=1;i<=n;++i)
     cout<<arr[i]<<" ";
     cout<<endl;

return 0;

}


