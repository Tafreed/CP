#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define double long double
#define mod 1000000007
#define iP pair<int,int>
#define iVec vector<ll>
#define pb push_back
#define REP(i,a,b)  for(ll i=a;i<b;i++)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,q,inp,low,flag,index;
    cin >> t;
    iVec v;
    string chut,guli;
    while(t--){
        v.clear();
        chut.clear();
        cin >> chut;
        cin >> q;
        REP(i,0,q){
            cin >> inp;
            v.pb(inp);
        }
        REP(i,0,q){
            flag=0;
            guli.clear();
            index=0;
            low=v[i]-1;
            while(low<chut.length()){
                if(chut[low]==')'){
                    if(guli[index-1]=='('){
                        guli.pop_back();
                        index--;
                        if(guli.empty())
                            {
                                flag=1;
                            }
                    }
                }
                else if(chut[low]=='('){
                    guli.push_back('(');
                    index++;
                }
                
                low++;
                if(flag) break;
            }
            if(!guli.empty()){
                cout << "-1" << endl;
            }
            else if(guli.empty()){
                cout << low << endl;
            }
        }
    }

    return 0;
}
 