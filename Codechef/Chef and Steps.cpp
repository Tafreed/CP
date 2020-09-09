#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

 
int main(){
    fastio;
    long long t,n,x,k;
    cin >> t;
    char ch;
    vector<int> a;
    while(t--){
        a.clear();
        cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x%k==0) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }
}

 