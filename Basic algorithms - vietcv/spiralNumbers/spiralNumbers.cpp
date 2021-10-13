#include<bits/stdc++.h>

using namespace std;

int maxn = 105;

int xPlus[4]={0,1,0,-1};
int yPlus[4]={1,0,-1,0};

vector<vector<int>> spiralNumbers(int n)
{
    vector<vector<int>> ans;
    vector<int> b;
    for (int i=0; i<n; i++) b.push_back(0);
    for (int i=0; i<n; i++) ans.push_back(b);
    int xPre=0, yPre=0;
    int huong=0;
    ans[0][0]=1;
    for(int i=2; i<= n*n; i++)
    {
        int xCur=xPre + xPlus[huong];
        int yCur=yPre + yPlus[huong];
        if(xCur>=n || yCur>=n || xCur<0 || yCur<0 || ans[xCur][yCur] !=0 )
        {
            huong= (huong+1) % 4;
        }
        xCur=xPre + xPlus[huong];
        yCur=yPre + yPlus[huong];
        ans[xCur][yCur]=i;
        xPre=xCur;
        yPre=yCur;
    }
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return ans;
}

int n;

main()
{
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin>>n;
    spiralNumbers(n);
    return 0;
}