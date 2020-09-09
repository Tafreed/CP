#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j,x,y,z,sum;
    cin >> n >> m;
    int arr[n];

    for(i=0;i<n;i++){
        cin >> x;
        arr[i]=x;
    }

    vector<pair<int,int>> v;
    vector<int> ans;

    for(i=0;i<m;i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    if(n<3 || m<3){
        cout <<"-1";
        exit(0);
    }
    sort(v.begin(),v.end());
    for(i=0; i<v.size(); i++){
        sum=0;
        x=v[i].first;
        y=v[i].second;
        for(j=i; j<v.size(); j++){
            if(v[j].first==x){
                z=v[j].second;
                auto p1=make_pair(z,y);
                auto p2=make_pair(y,z);
                if(binary_search(v.begin(), v.end(), p1)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                   
                }
                if(binary_search(v.begin(), v.end(), p2)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                   
                }
            }
            if(v[j].second==x){
                z=v[j].first;
                auto p1=make_pair(z,y);
                auto p2=make_pair(y,z);
                if(binary_search(v.begin(), v.end(), p1)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                   
                }
                if(binary_search(v.begin(), v.end(), p2)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                 
                }
            }
            if(v[j].first==y){
                z=v[j].second;
                auto p1=make_pair(z,x);
                auto p2=make_pair(x,z);
                if(binary_search(v.begin(), v.end(), p1)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                   
                }
                if(binary_search(v.begin(), v.end(), p2)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                  
                }
                
            }
            if(v[j].second==y){
                z=v[j].first;
                auto p1=make_pair(z,x);
                auto p2=make_pair(x,z);
                if(binary_search(v.begin(), v.end(), p1)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                 
                }
                if(binary_search(v.begin(), v.end(), p2)){
                    sum=arr[x-1] + arr[y-1] + arr[z-1];
                    ans.push_back(sum);
                   
                }
            }
        }
    }

     if(ans.empty())
         cout <<"-1";
     else
         cout << *min_element(ans.begin(),ans.end());

    return 0;

}