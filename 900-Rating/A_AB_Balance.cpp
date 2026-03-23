#include <bits/stdc++.h>
using namespace std;

int main()
{
        // For anyone going through my code, the comments arent fucking AI. It's so that I can keep track. Not everyone has a supercomputer in their head.

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, k, r, sum = 0, counta = 0, countb = 0;
    string s, t;
    cin >> tc;

    for (long long i = 0; i < tc; i++)
    {
        counta = 0;
        countb = 0;
        sum = 0;
        long long countab = 0, countba = 0, countaaa = 0, countbbb = 0, countaba=0, countbab = 0;

        long long n;
        cin >> s;

        if(s[0]==s[s.size()-1])
        {
           cout<<s<<endl;
        }
        else
        {
            if(s[0]=='a')
            {
                s[0]='b';
                cout<<s<<endl;
            }
            else
            {
                s[0]='a';
                cout<<s<<endl;
            }
        }

        // if (s[0] == 'a')
        // {
        //     counta++;
        // }
        // else
        // {
        //     countb++;
        // }
        // for (long long j = 1; j < s.size(); j++)
        // {
        //     if (s[j] == 'a')
        //     {
        //         counta++;
        //         if (s[j - 1] == 'b')
        //         {
        //             countba++;
        //         }
        //     }
        //     else
        //     {
        //         countb++;
        //         if (s[j - 1] == 'a')
        //         {
        //             countab++;
        //         }
        //     }

        //     if(j< s.size()-1)
        //     {
        //         if (s[j] == 'a' && s[j - 1] == 'a' && s[j + 1] == 'a')
        //         {
        //             countaaa++;
        //         }
        //         else if (s[j] == 'b' && s[j - 1] == 'b' && s[j + 1] == 'b')
        //         {
        //             countbbb++;
        //         }
        //         else if (s[j] == 'a' && s[j - 1] == 'b' && s[j + 1] == 'a')
        //         {
        //             countaba++;
        //         }
        //         else if (s[j] == 'b' && s[j - 1] == 'a' && s[j + 1] == 'b')
        //         {
        //             countbab++;
        //         }
        //     }
        // }

        // if(countab==countba){
        //     cout<<s<<endl;
        // }else if(countab>countba){
            
        //     //lets assume we will decrease ab and increase ba

        //     if(countab-countbab-countaaa>countba){

        //         for (long long j = 0; j < s.size(); j++)
        //         {
        //             if (s[j] == 'a' && s[j + 1] == 'b')
        //             {
        //                 s[j] = 'b';
        //                 break;
        //             }
        //         }
        //         cout << s << endl;

            

            

        // }
    }

    return 0;
}