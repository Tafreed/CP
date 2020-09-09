#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x,y;
    unordered_map<long int,long int> mp1,mp2;
    cin >> t;
    while(t--){
        mp1.clear();
        mp2.clear();
        cin >> n;
        for(int i=0; i<(4*n-1); i++){
            cin >> x >> y;
            if(mp1[x])  mp1[x]--;
            else mp1[x]++;

            if(mp2[y])  mp2[y]--;
            else mp2[y]++;
        }
        for(auto i: mp1){
            if(i.second!=0)
                cout << i.first << " ";
        }
        for(auto i: mp2){
            if(i.second!=0)
                cout << i.first << endl;
        }

    }
}