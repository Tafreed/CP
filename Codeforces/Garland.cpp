#include<bits/stdc++.h>
using namespace std;

int main(){

    string n,m;
    cin >> n >> m;
    int area=0,count=0;
    map<char,int> mp1,mp2;
    set<char> s1(n.begin(),n.end());
    set<char> s2(m.begin(),m.end());
    for(auto i: s2){
        if(s1.count(i))
            count++;
    }
    if(count != s2.size()){
        cout << "-1";
        exit(0);
    }

    else{
        
        for(auto i: n){
            mp1[i]++;
        }
        for(auto i: m){
            mp2[i]++;
        }
        for(int i=0; i< mp1.size(); i++){
            count++;
            if(mp1[i] >= mp2[i]){
                area += mp2[i];
            }
            else{
                area += mp1[i];
            }
        }
        cout << area;
    }

    
}