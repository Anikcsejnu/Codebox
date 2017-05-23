#include<bits/stdc++.h>
using namespace std;
const int maxn=1000010;
int a[maxn],n;
inline void work(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n-i+1;i++) {
		if (i%2==1)
			swap(a[i],a[n-i+1]);
	}
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
}

int main()
{
	work();
	return 0;
}
