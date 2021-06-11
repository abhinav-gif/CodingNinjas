#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num_inputs;
    cin>>num_inputs;
    int max=INT_MIN;
    for(int i=1;i<=num_inputs;i++){
        int n;
        cin>>n;
        if(max<n){
            max=n;
        }
    }cout<<max<<endl;
}