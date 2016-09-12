    #include<iostream>
    using namespace std;
    int main()
    {
    int i,j,t,n,x;
    int startV,currV;
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>n;
    startV=n;
    currV=n;
    for(j=0;j<n;j++)
    {
    cin>>x;
    if(x>currV)
    {
    startV=x+j;
    currV=x;
    }
    currV--;
    }
    cout<<startV<<endl;
    }
    return 0;
    }
