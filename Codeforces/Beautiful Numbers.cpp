// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,n,x,l,r,last,i;
//     cin >> t;
//     vector<int> per;
//     set<int> checker;
//     while(t--){
//         per.clear();
//         cin >> n;
//         int ans[n];
//         for(int i=0; i<n; i++){
//             cin >> x;
//             per.push_back(x);
//         } 
//         for(i=0; i<n; i++){
//             x=per[i];
//             ans[x-1]=0;
//             l=i;
//             r=i;
//             if(l-x>=0){
//                 l=i-x+1;
//                 r=i;
//             }
//             else{
//                 l=0;
//                 r=x-1;
//             }
//             while(l<=i && r<n){
//                 checker.clear();
//                 for(int j=l; j<=r; j++)
//                     checker.insert(per[j]);
//                 last=checker.size();
//                 auto it=--checker.end();
//                 if(*it == last)
//                     ans[x-1]=1;
//                 l++;
//                 r++;
//             }
            
//         }
//         for(int i=0;i<n;i++){
//             cout << ans[i];
//         }
            
//         cout << endl;
        
//     }
// }

#include <bits/stdc++.h>

using namespace std;

const int M = 2e5 + 239;

int n, p[M], x;

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        p[x - 1] = i;
    }
    int l = n;
    int r = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        l = min(l, p[i]);
        r = max(r, p[i]);
        if (r - l == i)
            ans += '1';
        else
            ans += '0';
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}