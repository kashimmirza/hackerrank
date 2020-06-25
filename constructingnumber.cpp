#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int x;
    int sum=0;

    for(int i=0;i<n;i++){
            cin>>x;
        while(x){
            sum+=x%10;
            x=x/10;

        }



    }



    if(sum%3==0){

        cout<<"Yes"<<endl;
    }
    else{

        cout<<"No"<<endl;
    }







}
}
