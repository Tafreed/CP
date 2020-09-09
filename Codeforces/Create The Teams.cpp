#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
#define mod 1000000007
#define iP pair<int,int>
#define iVec vector<int>
#define pb push_back
#define REP(i,a,b)  for(int i=a;i<b;i++)
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
    long long t,n,x,inp,team;
    cin >> t;
    vector<ll> vec;
    while(t--){
        team=1;
        vec.clear();
        ll index=1,count;
        cin >> n >> x;
        for(ll i=0; i<n; i++){
            cin >> inp;
            vec.push_back(inp);
        }
        sort(vec.begin(), vec.end(), greater<int>());
        count=0;
        for(int i=0; i<n; i++){
            if(vec[i]*index>=x){
                count++;
                index=1;
            }
            else index++;
        }
        cout << count << endl;
    }

    return 0;
}