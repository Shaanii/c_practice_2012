    #include<iostream>
    #include<stdio.h>
    #include<vector>
    using namespace std;

    int MOD=1000000009;
    int fact(int n);
    int power(int a,int b);
    int C(int n,int k);
    int newC(int n,int r,int ncr);

    long long invmod(int number)
    {
    long long x=1, v=1, y=0, u=0, r, x_tmp, y_tmp, q;
    long long a=MOD, b=number;

    do
    {
    q = a/b;
    r = a % b;
    a = b; b = r; // this is the standard Euclid
    x_tmp = x; y_tmp =y;
    x = u; y = v;
    u = x_tmp-q*u; v = y_tmp - q*v;
    }
    while (b>0);

    if(y < 0)
    {
    while(y < 0)
    {
    y += MOD;
    }
    }//make it positive
    return y;
    }

    int main()
    {
    int k,n=1,i,j,temp1,temp2=1,r;
    unsigned long long f=1,ans;
    cin>>k;

    n=power(2,k);
    temp1=1;
    for(i=1;i<=n/2;i++)
    {
    f=f*i;
    if(f>MOD)
    f=f%MOD;
    temp1=f;
    }

    for(i=1;i<=n;i++)
    {
    if(i<n/2)
    cout<<"0"<<endl;
    else
    {
    ans=1;
    ans*=temp1;
    ans*=temp1;
    if(ans>MOD)
    ans=ans%MOD;
    ans=ans*2;

    if(ans>MOD)
    ans=ans%MOD;

    r=n/2-1;
    if(temp2==1)
    temp2=C(i-1,r);
    else
    temp2=newC(i-2,r,temp2);
      cout<<temp2<<"-->";
    ans*=temp2;

    if(ans>MOD)
    ans=ans%MOD;
    cout<<ans<<endl;
    }
    }
    return 0;
    }
    int C(int n, int r) {
    if(r > n / 2) r = n - r; //because C(n,r)==C(n,n-r)
    unsigned long long ans = 1;
    int res=1;
    int i;

    for(i = 1; i <= r; i++) {
    ans *= (n - r + i);
    ans=ans%MOD;
    ans*=invmod(i);
    //ans /= i;
    ans=ans%MOD;
    }
    res=ans;
    return res;
    }
    int newC(int n,int r,int ncr)
    {
    unsigned long long c=ncr;
    int val;
    c*=(n+1);
    c=c%MOD;
    c*=invmod(n-r+1);
    c=c%MOD;
    val=c;
    return val;
    }

    int fact(int n)
    {
    int i;
    unsigned long long ans0 = 1,ans1 = 1;
    if(n==0)
    return 1;
    for(i=1;i<=n/2;i++)
    {
    ans0 = (ans0 * (2*i + 0)) % MOD;
    ans1 = (ans1 * (2*i + 1)) % MOD;
    }
    ans0*=ans1;
    ans0/=(n+1);
    return (ans0%MOD);
    }
    int power(int a,int b)
    {
    int num=1;
    if(b==0)
    return 1;
    if(b==1)
    return a;
    num=power(a,b/2);
    num=(num*num);
    if(b%2==0)
    return num;
    else
    return(num*a);
    }
