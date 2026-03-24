#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, k, r, sum = 0, count = 0;
    string s, t;
    cin >> tc;

    for (long long i = 0; i < tc; i++) {
        count = 0;
        sum = 0;

        long long n;
        cin >> a>>b;

        long long gcd = max(a, b)-min(a, b);

        if(gcd==0){
            cout << "0 0" << endl;
            continue;
        }

        ll res = a%gcd;
        ll res2 = gcd-res;

        cout<<gcd<<" "<<min(res, res2)<<endl;

      

        
    }

    return 0;
}