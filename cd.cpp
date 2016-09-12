#include<iostream>
using namespace std;
int main()
{
    int a,b, count=0,k;
    cin>>a>>b;
    if(a==b)
    cout<<"infinity"<<endl;
    else if (a==0)
    cout<<"0"<<endl;
    else
    {


    k=a-b;
    for(int i=b+1;i<=a;++i)
      if(! (k%i))
      ++count;

      cout<<count<<endl;
    }
      return 0;



}

