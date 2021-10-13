#include<bits/stdc++.h>

using namespace std;

vector<string> bishopDiagonal(string bishop1, string bishop2)
{
    if(bishop1>bishop2)
        swap(bishop1,bishop2);
    if(abs(bishop1[0]-bishop2[0]) != abs(bishop1[1]-bishop2[1]))
    {
        return {bishop1,bishop2};
    }
    string new1, new2;
    int Char1 = (int) bishop1[0] - 'a';
    int Char2 = (int) 'h' - bishop2[0];
    if(bishop1[1]> bishop2[1])
    {
        int Num1 = (int) '8' - bishop1[1];
        //cout<<Num1<<" "<<Char1<<endl;
        new1 = (char) (bishop1[0] - min(Num1, Char1));
        new1 = new1 + (char) (bishop1[1] + min(Num1, Char1));
        //cout<<new1<<endl;
        int Num2 = (int) bishop2[1] - '1';
        //cout<<Num2<<" "<<Char2<<endl;
        new2 = (char) (bishop2[0] + min(Num2, Char2));
        new2 = new2 + (char) (bishop2[1] - min(Num2, Char2));
        //cout<<new2<<endl;
        return {new1,new2};
    }
    int Num1 = (int) bishop1[1] - '1';
    int Num2 = (int) '8' - bishop2[1];
    new1 = (char) (bishop1[0] - min(Num1, Char1));
    new1 = new1 + (char) (bishop1[1] - min(Num1, Char1));
    new2 = (char) (bishop2[0] + min(Num2, Char2));
    new2 = new2 + (char) (bishop2[1] + min(Num2, Char2));
    //cout<<new1<<" "<<new2<<endl;
    return {new1,new2};
}

string s1,s2;

main()
{
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin>>s1>>s2;
    bishopDiagonal(s1,s2);
    return 0;
}