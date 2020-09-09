#include<bits/stdc++.h>
using namespace std;

void knapsack(int val[], int wt[],int W,int n){
    int dp[n+1][W+1];
    for(int i=0;i<n+1;i++)
        dp[i][0]=0;
    for(int i=0;i<W+1;i++)
        dp[0][i]=0;

    for(int i=1; i<n+1; i++){
        for(int j=1; j<W+1; j++){
            if(wt[i-1]>W){
                dp[i][j]=dp[i-1][j];
            }
            else if(wt[i-1]<W){
                dp[i][j]=max(val[i-1] + dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
        }
    }
    cout << dp[n][W] << endl;

    int res = dp[n][W];
    for(int i=n; i>0 && res > 0; i--){
        if(res == dp[i-1][W]) continue;
        else{
            cout << wt[i-1] << " ";
            W = W - wt[i-1];
            res = dp[i][W];
        }
    }

}

int main(){
    int val[] = { 60, 100, 120 }; 
    int wt[] = { 10, 20, 30 }; 
    int W = 50; 
    int n = sizeof(val) / sizeof(val[0]);

    knapsack(val,wt,W,n);
    return 0;
}