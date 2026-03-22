#include <bits/stdc++.h>
using namespace std;


int odd(int n){
    while(n % 2 == 0){
        n /= 2;
    }
    return n;
}
int main()
{
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++)
    {
        int n;
        cin >> n;
        vector<int> heaps(n+1);

        for(int k = 1; k <= n; k++)
        {
            cin >> heaps[k];
        }
        
        string yon = "YES";
        for(int k = 1; k <= n; k++)
        {
            if(odd(k) !=  odd(heaps[k])){
                yon = "NO";
                break;
            }

        }
        cout << yon << endl;
        
    }
    return 0;
}