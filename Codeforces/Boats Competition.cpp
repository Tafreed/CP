#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
int maximum(int a, int b){
    return (a>=b ? a : b);
}
 
int main(){
    fastio
    int t,n,inp;
    cin >> t;
    vector<int> a,b,x;
    while(t--){
        a.clear();
        b.clear();
        x.clear();
        int key,count=0,maxpair=0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> inp;
            a.push_back(inp);
        }
        for(int i=0;i<n;i++){b.push_back(-1);}
            

        sort(a.begin(),a.end());
        int max = min(2*a[n-1],50);
        for(int sum=2; sum<=100; sum++){
            x=b;
            for(int i=0; i<n-1; i++){
                key = sum-a[i];
                if(x[i]==-1){
                    for(int j=i+1; j<n; j++){
                    if(a[j]==key && x[j]==-1){
                        count++;
                        // cout << a[i] << " and " << a[j] << " where sum " << sum << endl;
                        x[i]=x[j]=1;
                        break;
                    }
                    }
                }
                x[i]=1;
            }
            maxpair = maximum(count,maxpair);
            count=0;
        }
        cout << maxpair << endl;

    }
    return 0;
}

 
 


