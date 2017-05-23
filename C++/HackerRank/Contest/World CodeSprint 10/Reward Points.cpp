#include <bits/stdc++.h>

using namespace std;

int getPoints(int month1, int month2, int month3){

    int reward1 , reward2, reward3 = 0;
    if(month1 > 10)
    {
        reward1 = 10*10;
    }
    else
    {
        reward1 = month1*10;
    }
    if(month2 > 10)
    {
        reward2 = 10*10;
    }
    else
    {
        reward2 = month2*10;
    }
    if(month3 > 10)
    {
        reward3 = 10*10;
    }
    else
    {
        reward3 = month3*10;
    }

    return (reward1 + reward2 + reward3);
}

int main() {
    int month1;
    int month2;
    int month3;
    cin >> month1 >> month2 >> month3;
    int pointsEarned = getPoints(month1, month2, month3);
    cout << pointsEarned << endl;
    return 0;
}
