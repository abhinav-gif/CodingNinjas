#include <iostream>
using namespace std;

void reverse(char* str){
    int i=0,j=0;
    while(str[i]){
        if(str[i]==' '){
            int temp=i;
            i--;
           while(j<i){
               swap(str[i],str[j]);
               i--;
               j++;
           }i=temp;
            j=i+1;
        }i++;
    }if(str[i]=='\0'){
        i--;
        while(j<i){
               swap(str[i],str[j]);
               i--;
               j++;
           }
    }
}

int main()
{
    char str[100];
    cin.getline(str,100);
    reverse(str);
    cout << str;
}