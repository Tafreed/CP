#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        for(int i=0; i<2*n; i++){
            cin >>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << abs(v[n]-v[n-1]) << endl;
    }
}