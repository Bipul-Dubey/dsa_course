#include<iostream>
using namespace std;
int main(){
    char ch='a';
    cout<<ch<<endl;   //print character
    cout<<int(ch)<<endl;     //print integer value of a

    //char x[5]={'a','b','c','d','e'};
    char x[5]={65,66,67,68,69};
    for(int i=0;i<5;i++){
        cout<<x[i]<<" ";
    }cout<<endl;

    char name[10]={'j','o','h','n'};
    cout<<name<<endl;
    
    char y[]="johny";
    cout<<y<<endl;

    char s[]="welcome";
    int i;
    for(i=0;s[i]!=0;i++){}
    cout<<"length: "<<i;

    return 0;
}