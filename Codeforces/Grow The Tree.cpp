#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,sum1=0,sum2=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<(n/2); i++){
        sum1+=arr[i];
    }
    for(int i=(n/2); i<n; i++){
        sum2+=arr[i];
    }
    cout << sum1*sum1 + sum2*sum2 << endl;
}