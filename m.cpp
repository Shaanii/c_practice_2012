    #include<iostream>
    using namespace std;

    int main()
    {
        int k,val,limit,i;

cin >>k;
if(k==1)
{
    cout<<2<<endl<<2;
    return 0;
}
limit= 1<<k;
k=k<<1;
k=k-1;
val=1<<k;
for(i=1;i<=limit;++i)
cout<<(i-1)*val<<endl;
    return 0;
    }
