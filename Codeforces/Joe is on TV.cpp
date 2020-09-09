#include<bits/stdc++.h>
using namespace std;

int main(){
    int div;
    float ans=0,x;
    cin >> x;
    while(x){
       ans+=1/x;
       x--;
    }
    cout << ans;

}