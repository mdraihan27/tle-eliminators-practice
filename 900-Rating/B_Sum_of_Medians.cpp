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

        long long n = 0;
        cin >> n >> k;

        ll gap = n / 2;
        vector<long long> v(n * k);
        for (long long j = 0; j < n * k; j++)
        {
            cin >> v[j];
        }

        ll round = 0;
        for (ll j = n * k - 1 - gap; j >= 0; j -= (gap+1))
        {
            if (round == k)
                break;

            sum += v[j];
            round++;
        }

        cout << sum << "\n";
    }

    return 0;
}