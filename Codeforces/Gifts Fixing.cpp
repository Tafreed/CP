#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

 
int main(){
    fastio
    int t,n,inp;
    cin >> t;
    vector<int> a,b;
    while(t--){
        int flag=0,amin,bmin;
        long long count=0;
        a.clear();
        b.clear();
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> inp;
            a.push_back(inp);
        }
        for(int i=0; i<n; i++){
            cin >> inp;
            b.push_back(inp);
        }
        amin = *min_element(a.begin(), a.end()); 
        bmin = *min_element(b.begin(), b.end());
        for(int i=0;i<n; i++){
            if(a[i]>amin && b[i]>bmin){
                count += max(a[i]-amin,b[i]-bmin);
            }
            else if(a[i]>amin){
                count += a[i]-amin;
            }
            else if(b[i]>bmin){
                count += b[i]-bmin;
            }
        }
        cout << count << endl;
       

    }
    return 0;
}

 
 


