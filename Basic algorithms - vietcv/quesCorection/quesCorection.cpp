#include<bits/stdc++.h>

using namespace std;


string s;

string questionCorrection(string s)
{
    string res;
    int dau, cuoi;
    for(int i=0; i< s.length(); i++)
    {
        if((s[i]>='a' && s[i]<='z') or (s[i]>='A' && s[i]<='Z'))
        {
            dau=i;
            break; 
        }
    }
    for(int i=s.length()-1; i>=0; i--)
    {
        if((s[i]>='a' && s[i]<='z') or (s[i]>='A' && s[i]<='Z'))
        {
            cuoi=i;
            break; 
        }
    }
    int i=dau,comma=0,spaces=0;
    if((s[i]>='a' && s[i]<='z'))
    {
        res=s[i]+'A'-'a';
    }
    else
        res=s[i];
    i++;
    while(i<=cuoi)
    {
        if((s[i]>='a' && s[i]<='z') or (s[i]>='A' && s[i]<='Z') or(s[i]>='0' && s[i]<='9'))
        {
            if(comma==1)
            {
                res= res+ ", ";
                comma=0;
                spaces=0;
            }
            if(spaces==1)
            {
                res= res+ " ";
                spaces=0;
            }
            if((s[i]>='A'&& s[i]<='Z'))
            {
                res= res + (char) (s[i]-'A'+'a');
            }
            else res = res+ s[i];
        }
        else
        {
            if(s[i]==',')
                comma=1;
            else    
                spaces=1;
        }
        i++;
    }
    res = res +'?';
    return res;
}

main()
{
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    getline(cin, s);
    cout<<questionCorrection(s);
    return 0;
}