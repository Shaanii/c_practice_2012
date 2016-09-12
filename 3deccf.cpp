#include<iostream>
using namespace std;

int main()
{
    bool print[91],away[100],home[100];
    int min[91];
    char hteam[21],ateam[21];
    for(int i=0;i<91;++i)
    print[i]=0;

    cin>>hteam;
    cin>>ateam;
    int n;
    cin>>n;
    int index,no;
    char card;
    char team;
    for(int i=0;i<n;++i)
    {
      cin>>index;
      cin>>team;
      cin>>no;
      cin>>card;

      if(team=='h')
      min[index]=-no;
       else
     min[index]=no;

    //cout<<min[index]<<endl;

         if((card=='r') || ( (card=='y')&&(home[no]==0&&team=='h' ) )  ||   ( (card=='y')&&(away[no]==0&&team=='a') ) )
         {
             print[index]=1;
             if(min[index]<0)
         home[no]=1;
         else
         away[no]=1;
         }







    }



for(int i=1;i<=90;++i)
if(print[i]==1)
{
    if(min[i]<0)
   cout<<hteam<< " "<<-min[i]<<" "<<i<<endl;
    else
    cout<<ateam<< " "<<min[i]<<" "<<i<<endl;


}

return 0;
}
