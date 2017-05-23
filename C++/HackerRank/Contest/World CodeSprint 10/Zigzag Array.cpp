#include <bits/stdc++.h>

using namespace std;

int minimumDeletions(vector < int > a, int n){
    int c = 0;
    for(int i = 1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i] > a[i+1]) continue;
        else if(a[i]<a[i-1] && a[i] < a[i+1]) continue;
        else c++;
    }

    return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Return the minimum number of elements to delete to make the array zigzag
    int result = minimumDeletions(a, n);
    cout << result << endl;
    return 0;
}
