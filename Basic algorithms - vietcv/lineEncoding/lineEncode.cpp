#include<bits/stdc++.h>

using namespace std;

string s;

string lineEncoding(string s)
{
    s+=' ';
    string res;
    int dem=1;
    for(int i=1; i<s.length(); ++i)
    {
        if(s[i]==s[i-1])
            ++dem;
        else
        {
            if(dem!=1)
                res += (char) (dem+'0');
            res += s[i-1];
            dem=1;
        }
    }
    return res;
}

main()
{
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    getline(cin,s);
    cout<<lineEncoding(s);
    return 0;
}