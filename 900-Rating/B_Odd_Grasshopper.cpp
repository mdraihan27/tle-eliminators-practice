#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, x, k, r, sum = 0, count = 0;
    cin >> tc;

    for (long long i = 0; i < tc; i++)
    {
        count = 0;
        sum = 0;

        long long n;
        cin >> x >> n;

        if (x == 0)
        {
            if (n % 4 == 0)
            {
                sum = 0;
            }
            else if (n % 4 == 1)
            {
                sum = -n;
            }
            else if (n % 4 == 2)
            {
                sum = 1;
            }
            else
            {
                sum = n + 1;
            }
        }
        else if (x > 0)
        {
            if (x % 2 == 0)
            {
                if (n % 4 == 0)
                {
                    sum = x;
                }
                else if (n % 4 == 1)
                {
                    sum = x - n;
                }
                else if (n % 4 == 2)
                {
                    sum = x + 1;
                }
                else
                {
                    sum = x + n + 1;
                }
            }
            else
            {
                if (n % 4 == 0)
                {
                    sum = x;
                }
                else if (n % 4 == 1)
                {
                    sum = x + n;
                }
                else if (n % 4 == 2)
                {
                    sum = x - 1;
                }
                else
                {
                    sum = x - n - 1;
                }
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                if (n % 4 == 0)
                {
                    sum = x;
                }
                else if (n % 4 == 1)
                {
                    sum = x - n;
                }
                else if (n % 4 == 2)
                {
                    sum = x + 1;
                }
                else
                {
                    sum = x + n + 1;
                }
            }
            else
            {
                if (n % 4 == 0)
                {
                    sum = x;
                }
                else if (n % 4 == 1)
                {
                    sum = x + n;
                }
                else if (n % 4 == 2)
                {
                    sum = x - 1;
                }
                else
                {
                    sum = x - n - 1;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}