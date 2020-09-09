#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,y,a,b,count;
    cin >> t;
    while(t--){
        cin >> x >> y >> a >>b;
        if((y-x)%(a+b)==0)
            cout << (y-x)/(a+b) << "\n";
        else 
            cout << "-1" << " \n";
    }
    return 0;

}