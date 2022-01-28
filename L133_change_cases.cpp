#include<iostream>
using namespace std;
int main(){

    char a[]="welcome";

    for(int i=0;a[i]!='\0';i++){
        a[i]=a[i]-32;   //change lower to uper
    }
    cout<<a<<endl;

    char b[]="HELLOWORLD";
    for(int i=0;b[i]!='\0';i++){
        b[i]=b[i]+32;          //change upper to lower
    }
    cout<<b<<endl;

    char c[]="welCOME";
    for(int i=0;c[i]!='\0';i++){
        if(c[i]>=65 && c[i]<=90){
            c[i]=c[i]+32;
        }
        else if(c[i]>='a' && c[i]<='z'){
            c[i]=c[i]-32;
        }
    }
    cout<<c<<endl;

    return 0;
}