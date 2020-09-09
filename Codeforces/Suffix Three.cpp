#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int l=s.size()-1;
        if(s[l]=='o')
        cout << "FILIPINO";
        if(s[l]=='u')
        cout << "JAPANESE";
        if(s[l]=='a')
        cout << "KOREAN";
        cout << endl;
        
    }
}