#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
#define mod 1000000007
#define iP pair<int,int>
#define iVec vector<int>
#define pb push_back
#define REP(i,a,b)  for(int i=a;i<b;i++)
int power(int x,int y){
    int res=1;
    x=x%mod;
    while(y>0){
        if(y&1)res=(res*x)%mod;
        x=(x*x)%mod;
        y/=2;
    }
    return res;
}

int main(){
    int t,a,b,c,m,max1;
    cin >> t;
    set<int> s;
    set <int, greater <int> > :: iterator ss; 
    map<int,int> mp;
    while(t--){
        s.clear();
        mp.clear();
        cin >> a >> b >> c;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        m=max(a,b);
        max1=max(m,c);
        if(a==b && b==c){
            cout << "YES" << endl;
            cout << a << " " << a << " " << a << " " ;
            cout << endl;
        }
        else if((a==b && b==c)){
            cout << "NO" << endl;
        }
        else if(mp[max1]!=2){
            cout << "NO" << endl;
        }
        else{
            s.insert(a);
            s.insert(b);
            s.insert(c);
            ss=s.begin();
            cout << "YES" << endl;
            cout << *ss << " ";
            for(auto it: s){
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}