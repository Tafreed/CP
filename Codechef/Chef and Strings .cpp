#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t,n,x,y,count;
    string a,b;
    cin >> t;
    while(t--){
        cin >> n;
        count=0;
        cin >> x;
        for(int i=1; i<n; i++){
            cin >> y;
                count += abs(x-y) -1;
            x=y;
        }
        cout << count << endl;
    }
}