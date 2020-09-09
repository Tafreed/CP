#include<bits/stdc++.h>
using namespace std;

int main(){
   int count=0;
   bool A,B;
   string a,b,c;
   cin >> a >> b;
   if(a==b){
       std::cout << a << std::endl;
   }
    else{
        for(int i=0; i<a.length(); i++){
            if(a[i]!=b[i]){
                count++;
                if(A==false){
                     c.push_back(a[i]);
                     A=true;
                }
                else{
                    A=false;
                    c.push_back(b[i]);
                }
                   
            }
            else{
                c.push_back('0');
            }
        }
        if(count%2==0)
            cout << c;
        else
            cout << "impossible";
    }
}
