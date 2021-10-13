#include<bits/stdc++.h>

using namespace std;

int countTriangles(vector<int> x, vector<int> y)
{
    int dem=0;
    int canh[4];
    for(int stt1=0; stt1 < x.size(); stt1++)
    {
        for(int stt2=stt1+1; stt2 < x.size(); stt2++)
        {
            for(int stt3= stt2+1; stt3 < x.size(); stt3++)
            {
                canh[1]=(x[stt1]-x[stt2]) * (x[stt1] - x[stt2])
                        + (y[stt1] - y[stt2]) * (y[stt1] - y[stt2]);
                canh[2]= (x[stt2] - x[stt3]) * (x[stt2] - x[stt3])
                        + (y[stt2] - y[stt3]) * (y[stt2] - y[stt3]);
                canh[3]= (x[stt1] - x[stt3]) * (x[stt1] - x[stt3])
                        + (y[stt1] - y[stt3]) * (y[stt1] - y[stt3]);
                cout<<canh[1]<<" "<<canh[2]<<" "<<canh[3]<<endl;
                if(canh[1]+canh[2] > canh[3] && canh[3] > abs(canh[1]-canh[2])
                    && canh[2]+ canh[3] > canh[1] && canh[1] > abs(canh[2]- canh[3])
                    && canh[1]+ canh[3] > canh[2] && canh[2] > abs(canh[1]- canh[3]))
                        dem++;
            }
        }
    }
    return dem;
}

main()
{
    vector<int> x={0,0,1,1};
    vector<int> y={0,1,1,0};
    cout<<countTriangles(x,y);
}