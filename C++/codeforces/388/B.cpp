#include<bits/stdc++.h>
using namespace std;
int  sx[3], sy[3];
int main()
{
    int px[3], py[3], qx[3], qy[3], rx[3], ry[3];
    cin>>px[0]>>py[0];
    cin>>qx[0]>>qy[0];
    cin>>rx[0]>>ry[0];
    cout<<3<<endl;
    sx[0] = rx[0] - qx[0] + px[0];
    sy[0] = ry[0] - qy[0] + py[0];

    cout<<sx[0]<<" "<<sy[0]<<endl;

    sx[1] = qx[0] - rx[0] + px[0];
    sy[1] = qy[0] - ry[0] + py[0];

    cout<<sx[1]<<" "<<sy[1]<<endl;

    sx[2] = rx[0] - px[0] + qx[0];
    sy[2] = ry[0] - py[0] + qy[0];
    cout<<sx[2]<<" "<<sy[2]<<endl;


}
