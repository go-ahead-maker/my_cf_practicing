#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll d(ll num, ll len)
{
    string _num = to_string(num);
    ll _d = 0;
    for(size_t i = 0; i < _num.size(); i++)
    {
        _d += _num[i] - '0';
    }
    return _d;
}

int main()
{
    int tc;
    cin >> tc;
    // int cnt = 0;
    for(int i = 0; i < tc; i++)
    {
        ll a;
        int cnt = 0;
        cin >> a;
        if(a / 10 == 0){
            cout << cnt << endl;
            continue;
        }
        ll _a = a;
        int len = 0;
        while(_a > 0){
            _a /= 10;
            len++;
        }
        ll left = a, right = (ll)pow(10, len);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(mid - d(mid, len) == a){
                cnt = 10;
                break;
            }
            else if (mid - d(mid, len) < a){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}