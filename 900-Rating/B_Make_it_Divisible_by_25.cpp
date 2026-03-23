#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc, a, b, c, l, fp, zp, k, r, sum = 0, count = 0;
    string s, t;
    tc=1;
    cin >> tc;

    for (long long i = 0; i < tc; i++) {
        count = 0;
        sum = 0;

        string n;
        n="32467550452";
        cin >> n;

        bool ff=false,zf=false;

        for(int j=n.size()-1;j>=0;j--){

        char a=n[j];

            if(ff && (n[j]=='2' || n[j]=='7')){
                
                count=n.size()-1-j-1;
                cout<<count<<endl;
                break;
               
                
            }else if(zf && (n[j]=='5' || n[j]=='0')){
                 
                count=n.size()-1-j-1;
                cout<<count<<endl;
                break;
                
                
            }

            if(n[j]=='0' && !zf){
                zf=true;
                zp=j;
            }
            else if(n[j]=='5' && !ff){
                ff=true;
                fp=j;
            }

            
            
        }

        
    }

    return 0;
}