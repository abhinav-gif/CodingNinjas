#include<iostream>
using namespace std;

int max(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else if(b>c){
        return b;
    }else{
        return c;
    }
}

int sqaure(int a,int b,int c){
    return a*a+b*b+c*c;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int max_=max(a,b,c);
    int Total_sq=sqaure(a,b,c);
    if(max_*max_==Total_sq-max_*max_){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}