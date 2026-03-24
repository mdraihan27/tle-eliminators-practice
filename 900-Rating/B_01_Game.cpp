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

        long long n, ones=0, zeros=0;
        cin >> s;
        a=s.size()/2;

        for(long long j=0; j<s.size(); j++){
            if(s[j]=='1') ones++;
            else zeros++;
        }

        a=min(ones, zeros);

        if(a%2==0){
            cout << "NET\n";
        }
        else{
            cout << "DA\n";
        }
        
    }

    return 0;
}