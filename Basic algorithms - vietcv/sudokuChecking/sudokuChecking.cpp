#include<bits/stdc++.h>

using namespace std;

int dd[15];
char grid[105][105];

void ResetDanhDau(int dd[])
{
    for(int i=0; i<=9; i++)
        dd[i]=0;
}

int gridCheck()
//int gridCheck(vector<vector<char>> grid)
{
    for(int x=0; x<9 ; x+=3)
    {
        for(int y=0; y<9; y+=3)
        {
            ResetDanhDau(dd);
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    int xCur=x+i;
                    int yCur=y+j;
                    if(grid[xCur][yCur]>='1' && grid[xCur][yCur] <= '9')
                    {
                        int num = (int) grid[xCur][yCur] -'0';
                        if(dd[num]==1) 
                        {
                            //cout<<xCur<<" "<<yCur<<num<<endl;
                            return 1;
                        }
                        else
                            dd[num]=1;
                    }
                }
            }
        }
    }
    return 0;
}

int rowandcolumnCheck()
//int rowandcolumnCheck(vector<vector<char>> grid)
{
    for(int i=0; i<9; i++)
    {
        ResetDanhDau(dd);
        for(int j=0; j<9; j++)
        {
            int xCur=i;
            int yCur=j;
            if(grid[xCur][yCur]>='1' && grid[xCur][yCur] <= '9')
            {
                int num = (int) grid[xCur][yCur] -'0';
                if(dd[num]==1) 
                    return 1;
                else
                    dd[num]=1;
            }
        }
    }
    for(int j=0; j<9; j++)
    {
        ResetDanhDau(dd);
        for(int i=0; i<9; i++)
        {
            int xCur=i;
            int yCur=j;
            if(grid[xCur][yCur]>='1' && grid[xCur][yCur] <= '9')
            {
                int num = (int) grid[xCur][yCur] -'0';
                if(dd[num]==1) 
                    return 1;
                else
                    dd[num]=1;
            }
        }
    }
    return 0;
}

int diagonalCheck()
{
    ResetDanhDau(dd);
    for(int i=0; i< 9; i++)
    {
            int xCur=i;
            int yCur=i;
            if(grid[xCur][yCur] >='1' && grid[xCur][yCur] <= '9')
            {
                int num = (int) grid[xCur][yCur] -'0';
                if(dd[num]==1) 
                    return 1;
                else
                    dd[num]=1;
            }
    }
    ResetDanhDau(dd);
    for(int i=0; i<9; i++)
    {
            int xCur=i;
            int yCur=8-i;
            if(grid[xCur][yCur]>='1' && grid[xCur][yCur] <= '9')
            {
                int num = (int) grid[xCur][yCur] -'0';
                if(dd[num]==1) 
                    cout<<num<<" ";
                else
                    dd[num]=1;
            }
    }
    return 0;
}

//bool sudokuChecking(vector<vector<char>> grid)
int sudokuChecking()
{
    //cout<<gridCheck()<<endl<<rowandcolumnCheck()<<endl<<diagonalCheck<<endl;
    return (gridCheck()+rowandcolumnCheck()+diagonalCheck());
}

main()
{
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cin>>grid[i][j];
        }
    }
    //cout<<sudokuChecking();
    cout<<diagonalCheck()<< "1";
}