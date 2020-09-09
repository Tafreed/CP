#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

 
int main(){
    fastio;
    int t;
    long long int ans,inp;
    int n,flag=0;
    map<char,int> mp;
    vector<long long int> v;
    set<long long int> s;
    cin >> t;
    while(t--){
        ans=0;
        v.clear();
        s.clear();
        cin >> n;
        if(n>=64){
            cout << "NO" << endl;
            continue;
        }
        for(int i=0;i<n;i++){
            cin >> inp;
            v.push_back(inp);
        }
        for(int i=0; i<n; i++){
            ans=0;
            for(int j=i;j<n;j++){
                ans=ans|v[j];
                s.insert(ans);
            }
        }
        if(s.size()==n*(n+1)/2)
            cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}

 
 
