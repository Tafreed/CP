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
    int t,n,x;
    cin >> t;
    map<int,int> S1;
    vector<int> v;
    while(t--){
        S1.clear();
        v.clear();
        cin >> n;
        for(int i=0;i<2*n; i++){
            cin >> x;
            S1[x]++;
            if(S1[x]==1)
                v.push_back(x);
        }
        for(auto i: v){
            cout << i << " ";
        }
                cout << endl;
       
    }
    return 0;
}