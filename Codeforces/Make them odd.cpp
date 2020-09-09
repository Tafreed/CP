#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,count,n,x,tmp;
    set<int,greater<int>> s;
    
    cin >> t;
    while(t--){
        count =0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >>x;
            s.insert(x);
        }
        while(!s.empty()){
            int x = *s.begin();
            s.erase(x);
            if(x%2==0){
                s.insert(x/2);
                count++;
            }
        }
        cout << count << endl;
        
    }
    
}