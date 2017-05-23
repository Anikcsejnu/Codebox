#include <bits/stdc++.h>

using namespace std;

bool leap (int x)
{
	return (x % 400 == 0) || ((x % 4 == 0) && (x % 100 != 0));
}

int main ()
{
	int y;
	cin >> y;
	int mod = 0;
	bool flag = leap(y);
	while (1)
    {
		y++;
		if (leap(y)) mod += 2;
		else mod++;
		mod %= 7;
		if (mod == 0 and leap(y) == flag) {
			cout << y << endl;
			break;
		}
	}
	return 0;
}
