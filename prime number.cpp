#include<iostream>

using namespace std;

int prime(int n){
    if(n==1 or n==0){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return true;
        }
    }
    return true;
}
int main(){
    int n;cin>>n;
    prime(n) ? cout<<"Prime Number"<<endl: cout<<"Not a Prime Number"<<endl;
}
