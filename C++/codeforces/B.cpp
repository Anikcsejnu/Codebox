#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[501];
    int l;

    cin>>ch;
    l = strlen(ch);
    int k = 0;
    for(int i = 0;i<l-1;i++)
    {
        for(int j = i+1;j<l;j++)
        {
            if(ch[i]==ch[j])
            {
                cout<<ch[j]<<endl;
            }
        }
        //ch[i] = 'a' + k;
       // k++;
    }
    //cout<<ch<<endl;
}
