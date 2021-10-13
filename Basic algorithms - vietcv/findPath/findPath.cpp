#include<bits/stdc++.h>

using namespace std;

int n,m;
int matrix[105][105];

//bool findPath(vector<vector<int>> matrix)
bool findPath()
{
    int xPlus[4]={1,0,-1,0};
    int yPlus[4]={0,1,0,-1};
    int xCur, yCur;
    //int m=matrix.size()-1;//hangdoc
    //int n=matrix[0].size()-1;//hangngang
    int cur=1;
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(matrix[i][j]==1)
            {
                xCur=i;
                yCur=j;
            }
        }
    }
    while(cur!=(n+1)*(m+1))
    {
        int check=0;
        for(int i=0; i<4; i++)
        {
            if(matrix[xCur+xPlus[i]][yCur+yPlus[i]] != cur+1)
                continue;
            cur++;
            check=1;
            xCur+= xPlus[i];
            yCur+= yPlus[i];
            cout<<cur<<" "<<xCur<<" "<<yCur<<endl;
            break;
        }
        if(check==0)
        {
            return false;
        }
    }
    return true;
}

main()
{
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin>>m>>n;
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    // for(int i=0; i<=m; i++)
    // {
    //     for(int j=0; j<=n; j++)
    //     {
    //         cout<<matrix[i][j]<<" "<<i<<" "<<j<<endl;
    //     }
    // }
    cout<<findPath();
    return 0;
}