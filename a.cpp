#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nvertices;
    cout<<"please enter the number of vertices :\n";
    cin>>nvertices;

    int a[nvertices][nvertices],transitive[nvertices][nvertices]={0};
    for(int i=0;i<nvertices;i++)
    {
        for(int j=0;j<nvertices;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int k=0;k<nvertices;k++)
    {
        for(int i=0;i<nvertices;i++)
        {
            for(int j=0;j<nvertices;j++)
            {
                if(a[i][j] == 1)
                    transitive[i][j] = 1;
                if(a[i][j]==0 && (a[i][k] !=0 && a[k][j] !=0 ))
                    transitive[i][j] = 1;
            }
        }
    }

    cout<<"\n printing the transitive closure matrix :\n";
    for(int i=0;i<nvertices;i++)
    {
        for(int j=0;j<nvertices;j++)
        {
            printf("%3d ",transitive[i][j]);
        }
        printf("\n");
    }
}
