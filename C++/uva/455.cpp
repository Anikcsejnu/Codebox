#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;


    scanf("%d", &t);

    while(t--)
    {
        int flag = 0;
        char ch[100];
        int a[100];
        int c[100];
        memset(a, 0, sizeof(a));
        memset(c, 0, sizeof(c));
        scanf("%s", ch);
        int l =  strlen(ch);
        for(int i = 0;i<l;i++)
        {
            a[ch[i] - 65]++;
        }
        int k = 0;
        for(int i = 0;i<100;i++)
        {
            //cout<<a[i]<<endl;
            if(a[i]!=0)
            {
                c[k] = a[i];
                k++;
            }
        }
        //int p = c[0];
        for(int i = 0;i<k;i++)
        {
//            if(p != c[i])
//            {
//                flag = 1;
//                break;
//            }
                cout<<c[i]<<endl;
        }
//        if(flag==1)
//        {
//            printf("%d\n", l);
//        }
//        else
//        {
//            printf("%d\n", k);
//        }
    }
    return 0;
}
