#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

 
int main(){
    fastio;
    long long t,n,m,x,y,sumrow,sum,sumrow1,sumrow2,minn;
    cin >> t;
    while(t--){
        cin >> n >> m >> x >> y;
        if(m%2==0){
            if(2*x<y){
                sum = x*n*m;
            }
            else if(n==1 && m==1){
                sum = x;
            }
            else{
                sumrow=y*(m/2);
                sum = n*sumrow;    
            }
        }
        else{
            if(2*x<y){
                sum = x*n*m;
            }
            else if(n==1 && m==1){
                sum = x;
            }
            else
            {
            sumrow1=y*(m/2) + min(x,y);
            minn = x>y ? 0 : y-x;
            sumrow2=y*(m/2) + minn;
            //cout << n << " " << sumrow1 << " " << sumrow2 << endl;
            if(n%2==0){
                sum = sumrow1*(n/2) + sumrow2*(n/2);
            }
            else if(n%2!=0){
                sum = sumrow1*(n/2) + sumrow2*(n/2) + sumrow1;
                //cout << "Here";
            }
            }
            
        }
        
        cout << sum << endl;
        
    }
}

 
 


