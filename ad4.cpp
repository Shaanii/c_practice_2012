#include <iostream>
#include<math.h>
using namespace std;

int main()
{

  int row,col,i,j,x,n,flag;

  cin>>row>>col;
  int arr[row][col];
  for(i=0;i<row;++i)
  {
  for(j=0;j<col;++j)
  {
    cin>>arr[i][j];
  }

  }

  cin>>n;
  while(n--)
 {
     flag=1;
   cin>>x;
   i=0;
   j = col-1;
   while ( i < row && j >= 0 )
   {
      if ( arr[i][j] == x )
      {
         cout<<i<<" "<<j<<endl;
       flag=0;
       break;
      }
      if ( arr[i][j] > x )
        j--;
      else
        i++;
   }
  if(flag)
 cout<<"-1"<<" "<<"-1"<<endl;

 }
  return 0;

}
