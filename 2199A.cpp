#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++)
    {
        int k, a1,a2,b1,b2;
        cin >>k;
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        
        int win_prior = (int)(a1>b1) + (int)(a2>b2);
        if(a1+a2 > b1+b2 + k){
            cout << "NO" << endl;
        }
        else if(a1+a2 == b1+b2+k && win_prior == 2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;
}