#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long int a,b,ans,p,x;
    cin >> t;
    while(t--){
        ans=0;
        cin >> a >> b;
        if(b<=a){
            cout << b << endl;
            continue;
        }
        else if(b%a==0){
            x=b/a;
            cout << a*x*x << endl;
        } 
        else{
            p=a-(b%a);
            for(int i=0;i<p;i++)
                ans+=(b/a)*(b/a);
            for(int i=0; i<a-p; i++)
                ans+=((b/a)+1)*((b/a)+1);
            cout << ans << endl;
        }
    }
}

