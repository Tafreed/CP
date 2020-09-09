#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,k,n,offsetx=0,offsety=0;
    char chess[8][8];
    // memset(chess,'X',sizeof(chess));
    // chess[0][0];
    cin >> t;
    while(t--){
        cin >> k;
        // n=k/8;
        // while(n){
        //     offsety++;
        //     n--;
        // }
        for(int i=0; i<8; i++){
            for(int j=0;j<8;j++){
                if(i==0 && j==0) {cout << "O";k--;}
                else if(k<=0) cout << "X";
                else {cout << ".";k--;}
            }
            cout << endl;

        } 

    }
}