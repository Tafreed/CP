#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,wina,winb,suma,sumb,i;
    string a,b;
    cin >> t;
    while(t--){
        wina=0;
        winb=0;
        cin >> n;
        while(n--){
            cin >> a >> b;
            suma=0;
            sumb=0;
            for( auto i: a){
                suma+=int(i)-48;
            }
            for(auto i: b){
                sumb +=int(i)-48;
            }
            if(suma>sumb)   wina++;
            else if(sumb>suma)  winb++;
            else{
                wina++;
                winb++;
            }
        }
        if(wina>winb)   cout << "0 " << wina;
        else if(wina<winb)  cout << "1 " << winb;
        else cout << "2 " << winb;
        cout << endl;

    }
}