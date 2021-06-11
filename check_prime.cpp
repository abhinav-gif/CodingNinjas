#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }return true;
}

int main(){
    int n;
    cin>>n;
    if(checkPrime(n)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
        return 0;
}