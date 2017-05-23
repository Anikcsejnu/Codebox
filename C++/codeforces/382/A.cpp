#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, k, eat = 0 , indG, indT ;

    cin>>n>>k;

    char ch[n];

    cin>>ch;

    for(int i = 0;i<n;i++)
    {
        if(ch[i]=='G')
        {
            indG = i;
        }
        if(ch[i]=='T')
        {
            indT = i;
        }
    }
    if(indG>indT)
    {
        swap(indT, indG);
    }

   //cout<<indG<<indT<<endl;

   for(int i = indG + k;i<=indT;i=i+k)
   {
       if(ch[i]=='#')
       {
           //cout<<ch[i]<<endl;
           eat = 0;
           break;
       }
       else if(ch[i]=='G' || ch[i]=='T')
       {
           eat = 1;
           break;
       }
      // cout<<i<<endl;
   }

   if(eat==1)
   {
       printf("YES\n");
   }
   else
   {
       printf("NO\n");
   }

   return 0;
}
