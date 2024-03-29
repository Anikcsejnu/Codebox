#include<iostream>
using namespace std;



void kadane(int input[], int n, int &x1, int &x2, int &max)
{
    int cur, i;
    max = 0;
    cur = 0;
    x1 = x2 = 0;
    int lx1, lx2;
    lx1 = 0;
    for(int i = 0; i<n; i++)
    {
        cur = cur+input[i];
        if(cur > max)
        {
            max = cur;
            x2 = i;
            x1 = lx1;
        }
        if (cur < 0)
        {
            cur = 0;
            lx1 = i + 1;
        }
    }
}

main()
{
    int tmp[100], n, x1, x2;
    int cur, max_sum, fx1, fx2, fy1, fy2;
    int i,j,k;
    int nu;
    cin>>nu;
    int input[nu][nu];
    for(int i = 0;i<nu;i++)
    {
        for(int j = 0;j<nu;j++)
        {
            cin>>input[i][j];
        }
    }
    fx1 = fx2 = fy1 = fy2 = max_sum = cur = -1;

    for (i=0; i< nu; i++)
    {
        for(k=0; k<nu; k++)
            tmp[k] = 0;

        for (j=i; j<nu; j++)
        {
            for(k=0; k<nu; k++)
                tmp[k] += input[j][k];
            kadane(tmp, nu, x1, x2, cur);

            if (cur > max_sum)
            {
                fy1 = x1;
                fy2 = x2;
                fx1 = i;
                fx2 = j;
                max_sum = cur;
            }
        }
    }
    cout << max_sum << endl;

    return 0;
}
