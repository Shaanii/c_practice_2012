#include<stdio.h>
#include <stdlib.h>
int main()
{
  int n,*arr,**sol,count=0,q,i,j,val;
  scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);


    for(i=0;i<n;++i)
    scanf("%d",&arr[i]);

       sol=(int **)malloc(sizeof(int* )*n);
    for(i=0;i<n;++i)
    sol[i]=(int *)malloc(sizeof(int)*n);





    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&val);
          for(i=0;i<n;++i)
         sol[i][i]=arr[i];
        for(i=0;i<n;++i)
        for(j=i;j<n;++j)
        {
            if(i==j)
           {
               if(val==sol[i][j])
           {

           ++count;
            //printf("\n sol val%d", sol[i][j]);
            //printf("\n strt %d  end %d", i,j);
           }
           else continue;
            }
            else if(arr[j]>=sol[i][j-1] && sol[i][j-1]==val || (arr[j]<=sol[i][j-1]&& arr[j]==val) )
            {
            sol[i][j]=val;
            ++count;
             //printf("\n strt %d  end %d", i,j);
            }
            else
            {
                if(sol[i][j-1]<arr[j])
                sol[i][j]=sol[i][j-1];
                else
                sol[i][j]=arr[j];
            }
           }

       printf("%d\n",count);

       count=0;

    }


return 0;
}

