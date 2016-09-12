#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int t,i,j,x,y,count,k,fact;
   cin>>t;
   while(t--)
   {
       cin>>x;
       cin>>y;
       count=0;
       k=y-x;
       int arr[k+1];
       int max=sqrt(y);
       for(i=0;i<=k;++i)
        arr[i]=0;

       for(i=2;i<=max;++i)
       {
           fact=i*i;
           for(j=0;j<=k;++j)
           {
               if(arr[j])
               continue;
               if(!((x+j)%fact))
               arr[j]=1;

           }

       }

               for(i=0;i<=k;++i)
               if(!arr[i])
               count++;

               cout<<count<<endl;

   }
    return 0;
}

