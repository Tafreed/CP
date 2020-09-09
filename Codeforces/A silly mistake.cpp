#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> office,visited;
    map<int,int>:: iterator it;
    int n,p=0,count=1,x;
    int ind=0;
    cin >> n;
    int arr[n];
    int pt[n];
    pt[0]=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
  
    for(int i=0;i<n;i++){
        if(arr[i]>0)
            x=arr[i];
        else x = -arr[i];
        if(visited[x]==0 && office[x]==0){
            office[x]=1;
            pt[ind]++;
        }
        if(office[x]==1 && visited[x]==0){
            office[x]=0;
            visited[x]=1;
            pt[ind++];
        }
        if(visited[x]==1){
            for(it=office.begin(); it!=office.end();it++){
                if(it->second==1)
                    cout << "-1";
                    exit(0);
            }
            count++;
            ind++;
            pt[ind]=1;
            office.clear();
            visited.clear();
        }



            
    }
}