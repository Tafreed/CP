#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,flag;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a>3) {cout << "YES" << endl;continue;}
        else if(a==1) {if(b==1)cout << "YES" <<endl;else cout << "NO" << endl;continue;}
        else {if(b<=3)cout << "YES" <<endl;else cout << "NO"<< endl;continue;}
    }
}