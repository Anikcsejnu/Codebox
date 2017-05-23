#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, posvalue, i;
    vector<int>pos;
    string instruction;

    cin >> t;
    while(t--)
    {
        cin>>n;
        posvalue = 0;
        while(n--){
            cin>>instruction;

            if(instruction=="LEFT")
            {
                posvalue += -1;
                pos.push_back(-1);
            }
            else if(instruction=="RIGHT")
            {
                posvalue += 1;
                pos.push_back(1);
            }
            else
            {
                cin>>instruction>>i;
                posvalue += pos[i-1];
                pos.push_back(pos[i-1]);
            }

        }
        cout<<posvalue<<endl;
        pos.clear();
        instruction.clear();

    }
    return 0;
}
