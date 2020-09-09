#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,x,temp;
    cin >> n >> m;
    vector<int> arr,brr,crr;
    for(int i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
        
    for(int i=0;i<n;i++){
        cin >> x;
        brr.push_back(x);
    }
        
    sort(brr.begin(),brr.end());
    int ans=1e9;
    for(int i=0;i<n;i++){
        crr.clear();
        if(arr[i]>brr[0])
            x=brr[0]+m-arr[i];
        else 
            x=brr[0]-arr[i];
        for(int j=0;j<n;j++){
            temp=(arr[j]+x)%m;
            crr.push_back(temp);
        }
        sort(crr.begin(),crr.end());
            if(crr==brr)
            ans=min(ans,x);
    }
    cout << ans;
}