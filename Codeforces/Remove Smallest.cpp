#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

 
int main(){
    fastio
    int t,n,inp;
    cin >> t;
    vector<int> v;
    while(t--){
        int flag=0;
        v.clear();
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> inp;
            v.push_back(inp);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(!(abs(v[i+1]-v[i])<=1)){
                flag=1;
                break;
            }
        }
        if(!flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}

 
 


