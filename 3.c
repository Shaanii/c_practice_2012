#include<stdio.h>
#include<stdlib.h>
#include<limits.h>



int main()
{
int *arr,i,n,sum,final=INT_MAX,max;
int near1[1000001]={0};

scanf("%d %d",&n,&sum);
arr=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;++i)
scanf("%d",&arr[i]);



for(i=(n/2)-1;i>=0;--i)
if(near1[arr[i]]!=0)
 {

 if((i+1)<= near1[arr[i]])
      near1[arr[i]]=i+1;
 }
else
near1[arr[i]]=i+1;


for(i=n/2;i<n;++i)
if(near1[arr[i]]!=0)
{
       if((n-i)<= near1[arr[i]])
       near1[arr[i]]=n-i;
}
else
near1[arr[i]]=n-i;



//printf("\n");
//for(i=0;i<n;++i)
//printf("   to reach %d   need %d\n ",arr[i],near1[arr[i]]);


for(i=0;i<n;++i)
{

if(arr[i]>=sum)
continue;
else if(sum-arr[i] == arr[i] )
continue;
else if( near1[sum-arr[i]] ==0 )
continue;
else
max=near1[arr[i]]>near1[sum-arr[i]] ? near1[arr[i]]:near1[sum-arr[i]];



if(max<final)
final=max ;


}
if(final==INT_MAX)
final= -1;
printf("%d\n",final);

return 0;
}

