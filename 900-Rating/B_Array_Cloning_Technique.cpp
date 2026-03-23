#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a;
    cin >> tc;

    for (long long i = 0; i < tc; i++)
    {

        long long n;
        cin >> n;

        map<long long, long long> freq;
        long long maxFreq = 0;

        for (long long j = 0; j < n; j++)
        {

            cin >> a;

            freq[a]++;

            if (freq[a] > maxFreq)
            {
                maxFreq = freq[a];
                
            }
        }

        // long long count = n-maxFreq;

        // while(maxFreq < n)
        // {
        //     maxFreq *= 2;
        //     count++;
        // }

        // cout << count << endl;

        // double abyb = (double)n / (double)maxFreq;
        // double logValue = log2((double)n / (double)maxFreq);
        // cout << (n - maxFreq) <<" "<< logValue<<" "<<ceil(logValue) << endl;

        cout << (n - maxFreq) + ceil(log2((double)n / (double)maxFreq)) << endl;
    }

    return 0;
}