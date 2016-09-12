#include<iostream>
    using namespace std;
    unsigned int gcd(unsigned int u, unsigned int v)
{
    // simple cases (termination)
    if (u == v)
        return u;

    if (u == 0)
        return v;

    if (v == 0)
        return u;

    // look for factors of 2
    if (~u & 1) // u is even
    {
        if (v & 1) // v is odd
            return gcd(u >> 1, v);
        else // both u and v are even
            return gcd(u >> 1, v >> 1) << 1;
    }

    if (~v & 1) // u is odd, v is even
        return gcd(u, v >> 1);

    // reduce larger argument
    if (u > v)
        return gcd((u - v) >> 1, v);

    return gcd((v - u) >> 1, u);
}

int main()
{

unsigned int n,m,i,x,y,num,j,flag,max=0;
    cin>>n>>m;
    unsigned int arr[n+1];
    for(i=1;i<=n;++i)
    cin>>arr[i];
    for(i=0;i<m;++i)
    {
      max=0;
        flag=0;
        cin>>num>>x>>y;

        //cout<<num<<x<<y<<endl;
        for(j=x;j<=y;++j)
        {
                //cout<<"hii"<<endl;

            if(gcd(num,arr[j])>1)
          {
             flag=1;
             if(arr[j]>max);
               max=arr[j];
          }

        }
      if(flag==0)
      cout<<-1<<" "<<-1<<endl;
      else
      {
          flag=0;
        for(j=x;j<=y;++j)
        if(arr[j]==max)
        ++flag;

        cout<<max<<" "<<flag<<endl;
      }



    }


return 0;
}
