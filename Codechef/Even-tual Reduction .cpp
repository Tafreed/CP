#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

 
int main(){
    fastio;
    int t;
    int n,flag=0;
    map<char,int> mp;
    string s;
    cin >> t;
    while(t--){
        flag=0;
        s.clear();
        mp.clear();

    cin >> n >> s;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto i: mp){
        if(i.second%2==0)
            flag++;
    }
    if(flag==mp.size())
        cout  << "YES" << endl;
    else{
        cout << "NO" << endl;
    }
    }
    return 0;
}

 
 


