#include<bits/stdc++.h>
#include<conio.h>
using namespace std;


int is_sharp(vector<int> arr) 
{ 
    int i,j,n=arr.size();
    for (i = 1; i<n; i++) { 
        if (arr[i]>arr[i-1]) 
            continue; 
        if (arr[i]<=arr[i-1]) 
            break; 
    } 
    if (i==n) 
        return 1;
    for (j=i; j<n; j++) { 
        if (arr[j] < arr[j-1]) 
            continue; 
        if (arr[j] >= arr[j - 1]) 
            break; 
    } 
    i=j;
    if (i!=n) 
        return 0;
    return 1; 
     
}



int main(){
    int inp,t,n;
    vector<int> v;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> inp;
            v.push_back(inp);
        }
            int flag=0;
            flag=is_sharp(v);
                if(flag==1){
                    cout << "Yes" <<endl;
                    continue;
                }
            
            for(int i = 0; i<n; i++){
                if(v[i]>i){
                    v[i]=i;
                }
            }
            // for(int i = 0; i<n; i++){
            //     cout << v[i] << " ";
            // }
            // cout << endl;
            flag = is_sharp(v);
            if(flag)
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
            
        }
        
    }
    
