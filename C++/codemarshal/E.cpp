#include<stdio.h>
long long a[100001];
long long min(long long a,long long b){
    if(a<b) return a;
    return b;
}
long long absLL(long long x){
    if(x<0) return -x;
    return x;
}
int main(){
    int TC,i;
    scanf("%d",&TC);
    while(TC--){
        int n;
        scanf("%d",&n);
        long long s=0,answer=(long long)1e14;
        for(i=1;i<=n;i++){
            scanf("%lld",a+i);
            s=s^a[i];
        }
        for(i=1;i<=n;i++){
            answer=min(answer,absLL((s^a[i])-a[i]));
        }
        printf("%lld\n",answer);
    }
    return 0;
}
