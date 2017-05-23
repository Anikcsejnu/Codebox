#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int a[111][4];
int main()
{
    int n , m;

    scanf("%d%d", &n, &m);

    for(int i = 0;i<n;i++)
    {
        a[i][0] = 2*i;
        a[i][1] = 2 * (n + i);
        a[i][2] = 2 * (n+i) + 1;
        a[i][3] = 2*i + 1;
    }
    vector<int> ans;
	for(int i = 0;i<n; i++)
    {
		ans.pb(a[i][1]);
		ans.pb(a[i][0]);
		ans.pb(a[i][2]);
		ans.pb(a[i][3]);
	}
    int l = ans.size();
	for(int i=l-1;i>=0;i--)
		if (ans[i] >= m)
			ans.erase(ans.begin() + i);

	for(int i = 0; i<m; i++) {
		if (i) printf(" ");
		printf("%d", ans[i] + 1);
	}
	printf("\n");

	return 0;
}





