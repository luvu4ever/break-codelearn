#include<bits/stdc++.h>

using namespace std;

string truncateString(string s)
{
    //cout<<s;
    int dau=0;
    int cuoi=s.length()-1;
    //cout<<dau<<" "<<cuoi<<endl;
    while(cuoi>=dau)
    {
        int fichar=(int)s[dau]-'0';
        int lachar=(int)s[cuoi]-'0';
        //cout<<fichar<<" "<<lachar<<" "<<dau<<" "<<cuoi<<endl;
        if(fichar%3==0)
            {
                dau++;
                //cout<<dau<<" "<<cuoi<<" ";
            }
        else
            if(lachar%3==0)
                {
                    cuoi--;
                    //cout<<dau<<" "<<cuoi<<" ";
                }
            else
                if((lachar+fichar)%3==0)
                {
                    dau++;
                    cuoi--;
                    //cout<<dau<<" "<<cuoi<<" ";
                }
                else
                    break;
    }
    string out;
    for(int i=dau; i<=cuoi; i++)
    {
        out=out+s[i];
    }
    return out;
}

string input;
int n;

main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    getline(cin, input);
    //cout<<input.length()-1;
    // int fichar=(int)input[0]-'0';
    // int lachar=(int)input[input.length()-1]-'0';
    // cout<<fichar<<" "<<lachar<<" ";
    // cout<<input;
    cout<<truncateString(input);
    return 0;
}