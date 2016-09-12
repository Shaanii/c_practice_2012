 #include<iostream>
 #include<math.h>
    using namespace std;
    int main()
    {

     int i,j,a,b,count;
  int n;
    cin>>n;
    while(n--)
    {
        cin>>i;
        cin>>j;
        count=0;
        if(i==j)
        {  cout<< "0" <<endl;
           continue;
        }

        if(i==1 )
        {
               a=log(j)/log(2);
               cout<< a<<endl;
             continue;

        }

         if(j==1 )
        {
                   a=log(i)/log(2);
               cout<<a<<endl;
             continue;

        }

    if(i== j>>1 ||  j== i>>1)
        {
             cout<<"1"<<endl;
             continue;
        }

       a= log(i)/log(2);
        b= log(j)/log(2);


//cout<< a <<" "<<b<<endl;
//cout<<i <<" "<<j<<endl;
if(a>b)
{
 count=a-b;
 i=i>>count;
}
if(b>a)
{
    count=b-a;
    j=j>>count;
}
//cout<<i<<" " <<j<<" "<< count<<" "<<endl;
 while(1)
 {
    if(i==j)
    {
    //cout<< i <<" "<< j;
    break;
    }

     i=i>>1;
     j=j>>1;
     ++count;
     ++count;
//cout<<count << " "<< i <<" "<< j<<endl;
 }

          cout<<count<<endl;
    }

      return 0;
    }
