#include<bits/stdc++.h>
using namespace std;

int part(int arr[],int low,int high, int k){
    int i= low-1;
    int pivot=arr[high];

    for(int j=low; j<=high-1; j++){
        if(pivot > arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
       
    }
    swap(arr[i+1],arr[high]);
    return i+1;

}

int ksmallest(int arr[],int low,int high, int k){

    while(k>=0 && k <= high){
 
        int pivot = part(arr,low,high,k);
        if(pivot==k) return arr[pivot];
        else if(pivot>k) return ksmallest(arr,low,pivot-1,k);
        else return ksmallest(arr,pivot+1,high,k);
    }
    return -1;
}

int main(){

    int arr[]={2,4,1,3,8,6,5,7,100,0};

    int n = sizeof(arr)/sizeof(int);
    int k=5;
    cout << ksmallest(arr,0,9,k-1);
    nth_element(arr,arr+n,arr+k);
    cout << endl;
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}