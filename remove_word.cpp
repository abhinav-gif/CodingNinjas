#include <iostream>
using namespace std;

void remove(char* str,char x){
   int j=0;
   for(int i=0;str[i]!='\0';i++){
       if(str[i]!=x){
           str[j]=str[i];
           j++;
       }
   }str[j]='\0';
}

int main()
{
    char str[100];
    cin>>str;
    char x;
    cin>>x;
    remove(str,x);
    cout << str;
}