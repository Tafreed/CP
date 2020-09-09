#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s,c;
    cin >> t;
    while(t--){
   
        int i,ind=-1;
        s.clear();
        c.clear();
        cin >> s >> c;
        int n=s.size();

        string temp=s;
        sort(temp.begin(),temp.end());
    
        for(i=0;i<n;i++){
            if(s[i]!=temp[i]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            if(lexicographical_compare(s.begin(),s.end(),c.begin(),c.end()))
            cout << s << endl;
            else
            cout << "---" <<endl;
            continue;
        }
        int j;
        for(i=0; i<n; i++){
            if(s[i]==temp[ind]){
                j=i;
            }
               
        }
            swap(s[j],s[ind]);
            
        if(lexicographical_compare(s.begin(),s.end(),c.begin(),c.end()))
            cout << s << endl;
        else
            cout << "---" <<endl;
        

    }
}