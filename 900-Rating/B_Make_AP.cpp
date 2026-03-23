#include <bits/stdc++.h>
using namespace std;

int main()
{

    // For anyone going through my code, the comments arent fucking AI, It's so that I can keep track. Not everyone has a supercomputer in their head.
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, k, r, sum = 0, count = 0;
        tc = 1;
    cin >> tc;

    for (long long i = 0; i < tc; i++)
    {
        count = 0;
        sum = 0;

        long long n;

        a = 3;
        b = 2;
        c = 7;
        cin >> a >> b >> c;

        bool possible = false;

        if (a == b && b == c)
        {
            // cout << "YES" << endl;
            possible = true;
        }  
        else
        {
            // lets consider a is to be changed

            // if a is largest

            long long diff = b - c;
            long long dest = b + diff;

            if (dest % a == 0 && b >= c && dest > 0)
            {
                possible = true;
            }

            // if a is smallest
            diff = c - b;
            dest = b - diff;
            if (dest % a == 0 && c >= b && dest > 0)
            {
                possible = true;
            }

            
            // lets consider c is to be changed

            // if c is largest
            diff = b - a;
            dest = b + diff;

            if (dest % c == 0 && b >= a && dest > 0)
            {
                possible = true;
            }

            // if c is smallest

            diff = a - b;
            dest = b - diff;
            if (dest % c == 0 && a >= b && dest > 0)
            {
                possible = true;
            }

            // lets consider b is to be changed

            // if a>c

            diff = a - c;
            if (diff % 2 == 0 && diff >= 0 && a >= c)
            {
                dest = a - diff / 2;
                if (dest % b == 0 && dest > 0)
                {
                    possible = true;
                }
            }

            // if a<c
            diff = c - a;
            if (diff % 2 == 0 && diff > 0 && c >= a)
            {
                dest = a + diff / 2;
                if (dest % b == 0 && dest > 0)
                {
                    possible = true;
                }
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}