#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
long long maximum(long long a, long long b){
    return (a>=b ? a : b);
}
 
int main(){
    fastio
    long long q,n,inp;
    cin >> n;
    char ch;
    bool sq=false,rec=false,flag=false,res=false;
    unordered_map<long long,long long> mp,mp1;
    for(long long i=0; i<n; i++){
        cin >> inp;
        mp[inp]++;
    }
    cin >> q;
    while(q--){
        sq=false,rec=false,flag=false;
        cin >> ch;
        if(ch=='+'){
            cin >> inp;
            mp[inp]++;
        }
        else{
            cin >> inp;
            mp[inp]--;
        }


        







        // for(auto i: mp){
        //     cout << i.first << " " << i.second << endl;
        // } 
        // mp1=mp;
        // for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) { 
        //     if(itr->second>=4){
        //         itr->second=itr->second-4;
        //         sq=true;
        //         break;
        //     }
        // }
        // if(!sq){
        //     cout << "NO" << endl;
        //     continue;
        // }
        // for(auto i: mp1){
        //     cout << "Map2" << endl;
        //     cout << i.first << " " << i.second << endl;
        // } 
        // for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        //     if(itr->second>=4){
        //        rec = true;
        //        break;
        //    }
        //    if(!flag && itr->second>=2){
        //        flag=true;
        //        continue;
        //    }
        //    if(flag && itr->second>=2){
        //        rec = true;
        //         break;
        //    }
        // }
        // if(sq && rec){
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        

    }

    return 0;
}

 
 


