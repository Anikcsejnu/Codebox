#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    int h1 = time[0] - '0';
    int h2 = time[1] - '0';
    //cout<<h1<<h2<<endl;
    int mh = (10*h1) + h2;
    //cout<<mh<<endl;
    if(mh == 12 && (time[8]=='A' && time[9]=='M'))
    {
        h1 = 0;
        h2 = 0;
    }
    else if(mh<12 && (time[8]=='P' && time[9]=='M'))
    {
        mh = mh + 12;
        h2 = mh%10;
        h1 = mh/10;
    }
    cout<<h1<<h2;
    for(int i=2;i<8;i++)
    {
        cout<<time[i];
    }
    cout<<endl;
    return 0;
}
