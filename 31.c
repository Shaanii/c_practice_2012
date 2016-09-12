 #include<iostream>
    using namespace std;
int main()
{
    int t;
   long long n,count,max,i,a;
    cin>>t;;
    while(t--)
    {    max=0;
      count=0;
        cin>>n;
           for(i=0;i<n;++i)
          {
            cin>>a;

            if(a>=max)
            {
             max=a;
             count=i;
            }

       }

      cout<<max+count<<endl;
    }
}
