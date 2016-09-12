 #include<iostream>
    using namespace std;
int main()
{
    int t,n,a,i,num,count;
    long long ans=0;

   cin>>t;
    while(t--)
    {
        cin>>n;
        num=0;
        ans=0;

           for(i=0;i<n;++i)
          {
            scanf("%d",&a);
            if(a==2)
                 {ans=ans+num;
                 ++count2;}
             if(a>2)
             {
                 ans=ans+  num +count2;
                  ++num;
             }


       }

      printf("%lld\n",ans);
    }
}

