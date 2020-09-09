#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1)  return false; 
  
    // Check from 2 to sqrt(n)
    for (int i=2; i<=sqrt(n); i++) 
        if (n%i == 0) 
            return false; 
  
    return true; 
}
int smallestDivisor(int n) 
{ 
    // iterate from 3 to sqrt(n) 
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
  
    return n; 
} 
 



int main(){
    int t,n,a,b;
    cin >> t;
    while(t--){
        cin >> n;
        
        if(n%2==0)
            cout << n/2 << " " << n/2 << endl;
        else if(isPrime(n))
            cout << 1 << " " << (n-1) << endl;
        else{
            int small = smallestDivisor(n);
            int x=n/small;
            cout << x << " " << n-x << endl;
            }
        }
        
    }

 