#include<bits/stdc++.h>
using namespace std;

long digit(long n) 
{ 
    long count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 

int main(){
    int x;
    long count=0,sum=0,d,ind=0,t;
    string s;
    cin >>s;
    vector<long> inp;
    vector<long> out;
    for(long i=0; i<s.size(); i++){
        x=s[i]-'0';
        inp.push_back(x);
    }
    t=inp.size();
    
    while(t>1){
        ind=0;
        sum=0;
        for(long i=0; i<inp.size(); i++)
            sum+=inp[i];
        count++;
        //cout << sum;
        while(sum){
            x=sum%10;
            out.push_back(x);
            sum=sum/10;
            ind++;
        }
        inp.clear();
        //cout << out[0];
        vector<long>::reverse_iterator it;
        for(it=out.rbegin(); it!=out.rend(); it++){
            inp.push_back(*it);
        }
        out.clear();
        t=inp.size();
    }

    cout << count;

   return 0;
}