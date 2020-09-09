#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,r,p,s,x,flag,count;
    float n;
    int size = (int)n;
    map<char,int> mp;
    cin >> t;
    while(t--){
        cin >> n >> r >> p >> s;
        char ans[size],sign[size];
        for(int i=0; i<size; i++){
            cin >> sign[i];
            mp[sign[i]]++;
        }

    }
}
//Question

// 7
// 4 3 0
// PPRRRSR

//Actual Answer
// YES
//RRPPPRR

