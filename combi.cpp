   #include<iostream>
    using namespace std;
    int MOD=1000000009;

int main()
{

 int i,j,counter,n,r,flag;
         unsigned long long f=1,prev;
                 cin>>n;
    cin>>r;
     cout<<"hiiii"<<endl;
        cout<<"n"<<n<<endl;
   cout<<"r"<<r<<endl;

   counter=1;
prev=0;
       for(i=n;i>=n-r+1;--i)
                {          if(prev==f)
                             {
                                f=f%MOD;

                                cout<<"deadlock f ="<<f<<endl;  }
                              f=f*i;
                             cout<<"f * "<<i<<"="<<f<<endl;

                              if(f>=MOD)
                              {    prev=f;
                                cout<< "hii in divide by parts"<<endl;
                                  for(j=counter;j<=r;++j)
                                {
                                      if(f%j==0)
                                     {
                                         f=f/j;
                                      cout<<"f / "<<j<<"="<<f<<endl;
                                      cout<<" m divisided"<<endl;

                                      counter=j+1;

                                        if(f<1)
                                               {   f=f*j;       cout<<" set counter due to less than 0 "<< counter<<endl;
                                                counter=j;
                                                break; }

                                     }
                                     else
                                     {
                                     cout<<" set counter due to fraction  "<< counter<<endl;
                                      counter=j;
                                     break; }

                                }
                              }

                    }
                    f=f%MOD;
    cout<< "counter value  "<< counter<<endl;

       cout<<"f  after loop "<<f<<endl;
       cout<<"j  after loop "<<j<<endl;
       cout<<"counter  after loop "<<counter<<endl;
         cout<<"r after loop "<<r<<endl;

    if(j<r)
     for(i=counter;i<=r;++i)
           f=f/i;

   cout<<"f   "<<f<<endl;




     cout<<"ans  "<<f<<endl;
     return 0;

    }
