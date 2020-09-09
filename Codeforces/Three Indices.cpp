#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x,flag=0;
    vector<int> v;
    vector<pair<int,int>> p,q;
    int pos[3];
    cin >> t;
    while(t--){
        flag=0;
        p.clear();
        q.clear();
        v.clear();
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x;
            v.push_back(x);
        }
        for(int i=1; i<n; i++){
            if(v[i]>v[i-1])
                p.push_back(make_pair(i-1,i));
        }
        for(int i=0; i<n-1; i++){
            if(v[i+1]<v[i])
                q.push_back(make_pair(i,i+1));
        }
        for(int i=0; i<p.size(); i++){
            for(int j=0; j<q.size(); j++)
                if(p[i].second==q[j].first){
                    cout <<"YES" << endl;
                    cout << p[i].first+1 << " " << p[i].second+1 << " " <<q[j].second+1 << endl;
                    flag=1;
                    break;
                }
                if(flag==1)
                    break;
        }
        if(!flag) cout << "NO" << endl;
        // for(int i=0; i< p.size(); i++)
        //     cout << p[i].first << " " << p[i].second << endl;
        // for(int i=0; i< q.size(); i++)
        //     cout << q[i].first << " " << q[i].second << endl;

    }
        
}