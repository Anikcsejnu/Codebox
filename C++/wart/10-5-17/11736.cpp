#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;

struct variable {
    string name;
    int byte;
    LL val;
} a [200 + 10];

int varLen;
map <string, int> isExist;

LL power (int b, int p)
{
    LL ret = 1;

    for ( int i = 1; i <= p; i++ )
        ret *= b;

    return ret;

}

LL cal_value (string s)
{
    LL ret = 0;
    int len = s.length () - 1;

    for ( int i = len; i >= 0; i-- )
        ret += (power (2, i) * (s [len - i] - '0'));

    return ret;
}

int main ()
{
    int b, v;

    while ( scanf ("%d %d", &b, &v) != EOF ) {
        isExist.clear ();
        varLen = 1;
        string input;
        int nums;
        int totalLine = 0;

        for ( int i = 0; i < v; i++ ) {
            cin >> input >> nums;
            isExist [input] = varLen;
            a [varLen].name = input;
            a [varLen].byte = nums;
            varLen++;
            totalLine += nums;
        }

        string totalBits = "";
        int index = 1;
        for ( int i = 0, j = 1; i < totalLine; i++, j++ ) {
            cin >> input;
            totalBits += input;

            if ( j == a [index].byte ) {
                j = 0;
                a [index++].val = cal_value (totalBits);
                totalBits = "";
            }
        }

        int q;
        scanf ("%d", &q);

        for ( int i = 0; i < q; i++ ) {
            cin >> input;
            if ( isExist [input] )
                cout << input << "=" << a [isExist [input]].val << endl;
            else
                cout << input << "=" << endl;
        }
    }

  return 0;

}
