 #include<iostream>
 #include<math.h>
    using namespace std;
    int main()
    {


     int n,t,k,i,sum,x,j,chr;
    cin>>n;
    cin>>t;
    int arr[n+1][n+1];
    for(i=1;i<=n;++i)
   {
       cin>>chr;
        arr[i][0]=arr[0][i]=chr-48;
        cout<<i<<endl;
        cout<<arr[i][0]<<endl;
   }

      for(i=1;i<=n;++i)
      for(j=1;j<=n;++j)
      arr[i][j]=arr[i][0]-arr[0][j];

    while(t--)
    {
      cin>>x;
     sum=0;
      for(i=1;i<x;++i)
     {
       k= arr[x][i];
       if(k<0)
       sum=sum-k;
       else
       sum=sum+k;
    }
           cout<<sum<<endl;
    }

      return 0;
    }
