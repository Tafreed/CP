#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a==0 && b==0 ){
            cout << "YES" << endl;
            continue;
        }
        if(a==0 || b==0 ){
            cout << "NO" << endl;
            continue;
        }
        if(max(a,b)>2*min(a,b)){
            cout << "NO" << endl;
            continue;
        }
        if((a+b)%3==0){
            cout << "YES" << endl;
            continue;
        }
        else{
            cout << "NO" << endl;
            continue;
        }

    }
}