 #include<iostream>
    using namespace std;
int main()
{
    int t;
   long long n,cur,start,i,a;
    cin>>t;;
    while(t--)
    {
        cin>>n;
        cur=n;
      start=n;
           for(i=0;i<n;++i)
          {
            cin>>a;

            if(a>cur)
            {
             cur=a;
             start=a+i;
            }
            cur--;
       }

      cout<<start<<endl;
    }
}

