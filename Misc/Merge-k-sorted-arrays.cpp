#include<bits/stdc++.h>
using namespace std;
#define n 4

struct HeapNode{
    int element;
    int i; // array no
    int j; //next index of array
};

class Heap{
    private:
        HeapNode *hrr;
        int size;
    public:
        Heap(HeapNode a[],int k){
            hrr=a;
            size=k;
            int sz=(size-1)/2;
            while(sz>=0){
                Heapify(sz);
                sz--;
            }
        };
        void Heapify(int i){
            int smallest = i;
            int l=left(i);
            int r=right(i);
            if(l<size && hrr[i].element > hrr[l].element) smallest=l;
            else if(r<size && hrr[i].element > hrr[r].element) smallest=r;
                
            if(smallest != i){
                swap(hrr[i],hrr[smallest]);
                Heapify(smallest);
            }
            
        };
        int left(int i) {return (2*i)+1;};
        int right(int i){return (2*i)+2;};
        HeapNode getMin(){
            return hrr[0];
        };
        void replaceMin(HeapNode x){hrr[0]=x; Heapify(0);};
};


void *mergekarray(int arr[][n],int l, int h, int output[]){

    HeapNode *heap= new HeapNode[n];
    for(int i=0; i<n; i++){
        heap[i].element=arr[i][0];
        heap[i].i = i;
        heap[i].j = 1;
    }

    Heap hp(heap,4);
    int count=0;
    int i=0;
    while(count<16){
        HeapNode x=hp.getMin();
        output[count++]=x.element;
        if(x.j<n){
            x.element=arr[x.i][x.j];
            x.j++;
            hp.replaceMin(x);
        }
        else{
            x.element=INT_MAX;
            hp.replaceMin(x); 
        }
    }

}

int main() {

    int k;
    int arr[][n]={{1,2,3,4},{9,10,11,12},{5,6,7,8},{13,14,15,16}};

    int output[n*4];
    mergekarray(arr,0,3,output);

    for(auto i: output)
        cout << i << " ";

    return 0;
}