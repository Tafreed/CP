#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,m,n;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(n%m==0){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;   
        
    }
    return 0;
}