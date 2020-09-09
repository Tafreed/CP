#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long int n,g,b,half1,half2,res;
    cin >> t;  
    while(t--){
        res=0;
        cin >> n >> g >> b;
        half1=(n+1)/2;
        res = (half1/g)*(g+b);
        if(half1%g==0)
            res = res-b;
        else  
            res =res + half1%g;
        cout << max(n,res) << endl;
    }
}