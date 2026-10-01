#include<iostream>
using namespace std;
int main(){
    int b , a , ans;
    cout<<"enter the base";
    cin>>a;
    cout<<"enter exponent";
    cin>>b;
    for(int i =1; i<=b;i++){
        
            ans*=a;
            if(a==1) break;
        
    } 
    if(a==0 && b==0)cout<<"indeterminate formet ";
    else cout<<ans;
}