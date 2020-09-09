#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,ind1,ind2,del;
    string s;
    cin >> t;

    while(t--){
        del=0;
        ind1=-1;
        ind2=-1;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                ind1=i; //index of first 1
                break;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')
                ind2=i; //index of last 1
        }
        if(ind1==ind2){
            cout << "0" << "\n";
            continue;
        }
        for(int i=ind1; i<=ind2; i++){
            if(s[i]=='0'){
                del++;
            }
        }
        cout << del << "\n";
    }

    return 0;
}