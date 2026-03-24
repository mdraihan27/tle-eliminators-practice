#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, k, r, sum = 0, count = 0;
    string s, t;
    cin >> tc;

    for (long long i = 0; i < tc; i++)
    {
        count = 0;
        sum = 0;

        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        

        for (ll j = 1; j < n - 1; j++)
        {
            bool lf=false, hf=false;
            for(ll k =j-1 ; k>=0; k--){
                if(v[k]<v[j]){
                    a = k;
                    lf=true;
                    break;
                    
                }
            }

            for(ll k =j+1 ; k<n; k++){
                if(v[k]<v[j]){
                    b = k;
                    hf=true;
                    break;
                    
                }
            }

            if (lf && hf)
            {
                cout << "YES\n";
                cout << a + 1 << " " << j + 1 << " " << b + 1 << "\n";
                break;
            }

            // cout << v[j] << " " << *it << " " << *it2 << "\n";

            if(j==n-2){
                cout << "NO\n";
            }
        }
    }

    return 0;
}