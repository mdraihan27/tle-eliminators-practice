#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;

    for (long long i = 0; i < tc; i++)
    {
        string s, t;
        cin >> s >> t;

        string filtered = "";
        for (long long j = 0; j < s.size(); j++)
        {
            if (t.find(s[j]) != string::npos)
            {
                filtered += s[j];
            }
        }
        s = filtered;

        int temppos = 0;
        // cout << s << endl;

        long long pos2 = s.substr(0, s.size()).find(t);

        long long count = 0;

        // long long pos = s.find(t);

        // if (pos == string::npos)
        // {
        //     cout << "NO\n";
        //     continue;
        // }
        for (long long j = 0; j < t.size(); j++)
        {
            long long numt = 0, nums = 0;
            for (long long k = 0; k < t.size(); k++)
            {
                if (t[k] == t[j])
                {
                    numt++;
                }
            }

            for (long long k = 0; k < s.size(); k++)
            {
                if (s[k] == t[j])
                {
                    nums++;
                }
            }

            long long num = nums - numt;

            for (long long k = 0; k < s.size(); )
            {

                if (num <= 0)
                {
                    break;
                }
                if (s[k] == t[j])
                {
                    num--;
                    s.erase(s.begin() + k);
                    // cout <<k<<" "<< t[j] << " "<<s << endl;
                }else{
                    k++;
                }

               
            }
        }

        if(s==t)
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        // int temp = t.size() - 1;
        // for (long long j = s.size() - 1; j >= s.size() - t.size(); j--)
        // {
        //     if (t[temp] != s[j])
        //     {
        //         cout << "NO\n";
        //         break;
        //     }

        //     if(j == s.size() - t.size())
        //     {
        //         cout<< "YES\n";
        //     }
        // }
    }

    return 0;
}