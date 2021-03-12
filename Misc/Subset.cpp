#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "ABCDEF";
    int t,n;
        cin >> n;
        int len = 1<<n;            //len = pow(2,n)
        for(int x=0;x<len;x++){
            for(int i=0; i<n;i++){
                int f = 1<<i;
                if((x & f)!=0)
                cout << s[i] << " ";
            }
            cout << endl;
        }
}