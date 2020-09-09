#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,boom,count,ans,x;
    vector<int> pos;
    cin >> t;
    while(t--){
        ans=0;
        count =1;
        pos.clear();
        cin >> n >> boom;
        for(int i=0; i<n; i++){
            cin >> x;
            pos.push_back(x);
        }
        set<int> s(pos.begin(),pos.end());
        pos.assign(s.begin(),s.end());
        s.clear();
        n=pos.size()-1;
        if(n==0){cout << "1" <<endl;continue;}
            
        while(n){
            pos[n-1]-=count*boom;
            count++;
            if(pos[n-1]<=0)
                break;
            else if(n==1){
                count++;
                break;
            }
            else n--;
        }
        cout << count-1 << endl;
    }
}