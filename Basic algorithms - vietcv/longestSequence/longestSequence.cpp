#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;

int longestSequence(vector<int> a)
{
    int ans=0;
//    int n=a.size();
    int f[25][505];
    for(int i=0; i<501; i++)
    {
        f[0][i]=1;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int diff = a[j] - a[i] + 250;
            f[j][diff] = max(f[i][diff] +1,2);
            ans= max(ans, f[j][diff]);
        }
    }

    return ans;
}

main()
{
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin>>n;
    a.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<longestSequence(a)<<"\n";
    return 0;
}