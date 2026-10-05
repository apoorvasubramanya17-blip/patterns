#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void pattern(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++ ){
            cout<<i;
        }
        cout<<endl;}
    }};
    int main(){
        Solution obj;
        int n;
        cin>>n;
        obj.pattern(n);
        return 0;


    }
