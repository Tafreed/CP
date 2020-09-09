#include<bits/stdc++.h>
using namespace std;

void crossstreet(int sav[],int n){
    int energy=1,sum=1;
    for(int i=0;i<n;i++){
        sum+=sav[i];
        if(sum<=0){
            energy += abs(sum)+1;
            sum=1;
        }
    }
    cout << energy;
}


int main(){
    int sav[]={-1, -5, -9};
    int n = sizeof(sav)/sizeof(sav[0]);

    crossstreet(sav,n);
    return 0;

}
