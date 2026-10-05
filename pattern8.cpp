#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    void pattern(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i-1;j++){
    cout<<" ";}
    for(int j=1;j<=2*(n-i)+1;j++){
        cout<<"*";

    }
      cout<<endl;
    }}}
    ;
int main(){
solution obj;
int n;
cin>>n;
obj.pattern(n);
return 0;}
