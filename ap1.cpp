 #include<iostream>
 #include<math.h>
    using namespace std;
    int main()
    {

      int t,n,x,y,i,j;

    cin>>t;
    while(t--)
    {
        cin>>x;
        cin>>y;

        n=x+y;
       if(n%2)
       i=n+2;
       else
       i=n+1;

  while(1)
      {

    // cout<<" hii"<< endl;
  	     for(j=2;j<=(int)sqrt(i);j++)
  	              {
  	                  //cout<<"hello"<< i<<" "<<j <<endl;
			             if(i%j==0)
			             break;
                 }
        if(j>(int)sqrt(i))
       break;
       i=i+2;

    }
              cout<<i-n<<endl;


    }

      return 0;
    }
