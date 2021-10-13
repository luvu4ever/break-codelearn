#include<bits/stdc++.h>

using namespace std;

bool compareString(int fi1, int fi2, int cd, string s)
{
    int la1= fi1 + cd-1;
    int la2= fi2 + cd-1;
    for(int i=0; i<cd; i++)
    {
        if(s[fi1+i]!=s[fi2+i])
            return 0;
    }
    return 1;
}

int differentSubstringsTrie(string inputString)
{
    int dem=0;
    for(int cd=1; cd<= inputString.length(); cd++)
    {
        for(int bd=0;bd< inputString.length()-cd+1; bd++)
        {
            int check=1;
            for(int bd2=0; bd2 < bd; bd2++)
            {
                if(compareString(bd2, bd, cd, inputString)  == 1)
                    check=0;
            }
            if(check==1)
            {
                for(int i=bd; i<= bd+cd-1; i++)
                {
                    cout<<inputString[i];
                }
                //cout<<" "<<bd<<" "<<bd+cd-1<<endl;
            }
            dem+=check;
        }
    }
    return dem;
}

string s;

main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    getline(cin,s);
    //cout<<compareString(0,2,2,s);
    cout<<differentSubstringsTrie(s);
    return 0;
}