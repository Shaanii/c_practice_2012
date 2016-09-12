 #include<iostream>
 #include<math.h>
    using namespace std;
    int main()
    {


     int n,t,k,i,sum=0;
    cin>>n;
    cin>>t;
    arr=new int[n];
    for(i=0;i<n;++i)
    cin>>arr[i];
    while(t--)
    {
      cin>>x;

      for(i=0;i<=x;++i)
     {
       k= arr[x]-arr[i];
       if(k<0)
       sum=sum-k;
       else
       sum=sum+k;



     }

     cout<<sum<<endl;
    }

      return 0;
    }
