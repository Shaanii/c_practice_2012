    #include<iostream>
    #include<stdio.h>
    using namespace std;
    int main()
    {
    int n,x,i,j,xi,xj,counter;
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
    scanf("%d%d",&i,&j);
    xi=i;
    xj=j;
    counter=0;
    while(xi!=xj)
    {
    counter++;
    if(xi>xj)
    xi=xi/2;
    else
    xj=xj/2;
    }
    printf("%d\n",counter);
    }
    return 0;
    }
