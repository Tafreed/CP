#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,a,b,n=0,temp;
    cin >> t;
    while(t--){
        n=0;
        cin >> a >> b;
        if(b<9){
            cout << "0" << endl;
            continue;
        }
        temp=b;
        while(b){
            b=b/10;
            n++;
        }
        if(temp==(ceil(pow(10,n)))-1)
            n++;
        cout << a*(n-1) << endl;
    }
}