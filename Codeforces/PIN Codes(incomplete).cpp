#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,count,n,aux,last;
    string x,data;
    cin >> t;
    unordered_map<string,int> mp;
    while(t--){
        count=0;
        mp.clear();
        cin >> n;
        for(int i=0;i<n; i++){
            cin >> x;
            mp["x"]++;
            if(mp["x"]>1)
                count++;
        }
        if(count==0)
            cout << "0" << endl; 
        else{
                cout << count << endl;
                for(auto it=mp.begin(); it!=mp.end(); it++){
                n=0;
                if(it->second==1)
                cout << it->second << endl;
                else{
                    aux=it->second;
                    for(int j=0;j<aux;j++){
                        last = stoi(it->first);
                        last=last%10;
                        data=(it->first);
                        data.pop_back();
                        data += to_string(n);
                        n++;
                        if(n==last) n++;
                        cout << data << endl;
                        


                    }
                }
            }
        }
    }
}
