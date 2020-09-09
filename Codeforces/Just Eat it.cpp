#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll max_sum(vector<long long> v, ll n){
    ll sum=0,mx1=0,mx2=0;
    for(int i=0; i<n-1; i++){
        sum=max(v[i],sum+v[i]);
        mx1=max(sum,mx1);
    }
    sum=0;
    for(int i=1; i<n; i++){
        sum=max(v[i],sum+v[i]);
        mx2=max(sum,mx2);
    }
    if(mx1>mx2)
        return mx1;
    return mx2;
}

int main(){
    int t;
    cin >> t;
    ll n,inp,sum;
    while(t--){
        sum=0;
        cin >> n;
         vector<long long> v;
        for(int i=0;i<n; i++){
        cin >> inp;
        v.push_back(inp);
        }
        ll max = max_sum(v,n);
        for(int i =0; i<n; i++){
            sum+=v[i];
        }
        if(sum>max)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
        }
}
    