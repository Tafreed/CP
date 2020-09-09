#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long count=0;
    cin >> n;
    long long arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    count=arr[0];
    for(int i=1;i<n;i++){
        count=count+(arr[i] + i*(arr[i]-1));
    }
    cout << count;
    return 0;
}