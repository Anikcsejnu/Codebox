#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>st;
    queue<char>q;
    string s;
    int flag=0;
    cout<<"Enter a string to see is it palindrome or not: "<<endl;
    cin>>s;
    for(int i=0; i<s.length() ; i++)
    {
        q.push(s[i]);
        st.push(s[i]);
    }
    while((!q.empty())&&(!st.empty()))
    {
        if(q.front()!=st.top())
            ++flag;

        q.pop();
        st.pop();
    }
    if(flag==0)
        cout<<"The string is a palindrome ."<<endl;
    else
        cout<<"The string is not a palindrome ."<<endl;

        return 0;
}
