#include<bits/stdc++.h>
using namespace std;

int main(){
    char tmp;
    string a,b,c;
    int t,index,end;
    cin >> t;
    while(t--){
        index=0;
        cin >> a >> b >> c;
        for(index=0; index<a.size(); index++){
            if(a[index]==b[index]){
                if(a[index]!=c[index]){
                    cout << "NO" << endl;
                    break;
                }
                else{
                    continue;
                }
                
            }
            else{
                if(a[index]==c[index]){
                    b[index]=c[index];
                }
                else if(b[index]==c[index])
                    a[index]=c[index];
                else{
                    cout << "NO" << endl;
                    break;
                }    
            }
        }
        end=a.size();
        if(index==end)
            cout << "YES" << endl;
    }
    return 0;
}