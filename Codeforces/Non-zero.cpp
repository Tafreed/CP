#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a; i<b; i++)
 
int main(){
    int n,t,x,count;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        count=0;
        cin >> n;
        REP(i,0,n){
            cin >> x;
            v.push_back(x);
        }
        REP(i,0,n){
            if(v[i]==0)
                {v[i]++;
                count++;}
        }
        if(accumulate(v.begin(),v.end(),0)==0)
            count++;
        cout << count <<endl;
    }
}