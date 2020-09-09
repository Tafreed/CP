#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
#define mod 1000000007
#define iP pair<int,int>
#define iVec vector<ll>
#define pb push_back
#define REP(i,a,b)  for(ll i=a;i<b;i++)
int power(int x,int y){
    int res=1;
    x=x%mod;
    while(y>0){
        if(y&1)res=(res*x)%mod;
        x=(x*x)%mod;
        y/=2;
    }
    return res;
}

int main(){
    ll t,n,flag,inp,q,a,b,wall;
    cin >> t;
    iVec v;
    while(t--){
        v.clear();
        cin >> n;
        REP(i,0,n){
            cin >> inp;
            v.pb(inp);
        }
        sort(v.begin(),v.end());
        cin >> q;
        REP(i,0,q){
            cin >> a >> b;
            if(binary_search(v.begin(), v.end(),a+b)){
                cout << "-1" << endl;
                continue;
            }
            else{
                wall = lower_bound(v.begin(), v.end(), a+b) - v.begin();
                cout << wall << endl;
                continue;
            }
        }

    }

    return 0;
}
 