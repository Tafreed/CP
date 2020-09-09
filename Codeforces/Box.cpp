#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,last;
    cin >> n;
    int lock[n],ans[n];
    stack<int> s;
    for(int i=0; i<n; i++){
        cin >> lock[i];
    }
    last =0;
    for(int i=0; i<n; i++){
        if(lock[i]==last+1){
            ans[i]=lock[i];
            last=ans[i];
            continue;
        }
        if(lock[i]==last){
            if(s.empty()){
                cout << "-1" << endl;
                return;
            }
            else{
                ans[i]=s.top();
                s.pop();
            }
        }
        if(lock[i]<last){
            cout << "-1" << endl;
            return;
        }
        if(lock[i]>last+1){
            while(lock[i]>last+1)
            s.push(++last);
            ans[i]=lock[i];
            last=lock[i];

        }
    }
    for(int i=0; i<n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}
