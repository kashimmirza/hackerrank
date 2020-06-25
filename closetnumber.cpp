#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
int a,b,c;
int d=0;
cin>>t;

while(t--){
    cin>>a>>b>>c;
    d=pow(a,b)+c/2;
    cout<<d-(d%c)<<endl;



}





}
