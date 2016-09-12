#include<iostream>
    using namespace std;

void rvrse(int * arr ,int strt, int end)
{
    int temp;
    while(strt<end)
    {
        temp=arr[strt];
        arr[strt]=arr[end];
        arr[end]=temp;
        --end;
        ++strt;
    }
    // for(j=0;j<6;++j)
            //cout<<arr[j];
}
int main()
{
   int n,i,k,min=5001;
    int arr[10000],count=-1,index;



        cin>>n;
        int mark[n][2];
        for(i=0;i<n;++i)
        cin>>arr[i];

        for(i=0;i<n;++i)
        {
              min=5001;
           for(k=i;k<n;++k)
            {
                if(min>arr[k])
                {min=arr[k];
                index=k;}
           }
        if(min==arr[i])
        continue;
        else
        {
            rvrse(arr,i,index);
            ++count;
            mark[count][0]=i;
            mark[count][1]=index;


        }

}

cout<<count+1;
for(i=0;i<=count;++i)
cout<<endl<<mark[i][0]+1<<" "<< mark[i][1]+1;
return 0;
}
