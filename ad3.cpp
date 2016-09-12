#include <iostream>
#include<math.h>
using namespace std;

int n;
void updateDistances(int target,int **cost,int *d,int *whoTo) {
    int i;
    for (i = 0; i < n; ++i)
        if ((cost[target][i] != 0) && (d[i] > cost[target][i])) {
            d[i] = cost[target][i];
            whoTo[i] = target;
        }
}


int main()
{
    int i,j,a,b;
cin >> n;
int cost[n][n],x[n],y[n];
for(i=0;i<n;++i)
{
    cin>>x[i];
    cin>>y[i];
}
for(i=0;i<n;++i)
for(j=0;j<n;++j)
{
    if(i==j)
    cost[i][i]=0;
    a=x[i]>x[j]?x[i]-x[j]:x[j]-x[i];
    b=y[i]>y[j]?y[i]-y[j]:y[j]-y[i];
    cost[i][j]=a>b?b:a;
}

int d[n],inTree[n];
    for (i = 0; i < n; ++i)
        d[i] = 100000;


    for (i = 0; i < n; ++i)
        inTree[i] = 0;

    /* Add the first node to the tree */
int whoTo[n];
    inTree[0] = 1;
    updateDistances(0,cost,d,whoTo);

    int total = 0;
    int treeSize;
    for (treeSize = 1; treeSize < n; ++treeSize)
    {
        /* Find the node with the smallest distance to the tree */
        int min = -1;
        for (i = 0; i < n; ++i)
            if (!inTree[i])
                if ((min == -1) || (d[min] > d[i]))
                    min = i;

        /* And add it */

        inTree[min] = 1;
        total += d[min];

        updateDistances(min,cost,d,whoTo);
    }

    cout<<total<<endl;

    return 0;




}


