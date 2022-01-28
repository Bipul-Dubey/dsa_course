#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch[]="finding";
    int h[26]={0};
    int i;
    for(i=0;ch[i]!='\0';i++){
        h[ch[i]-97]+=1;
    }
    for(i=0;i<26;i++){
        if(h[i]>1){
            cout<<char(i+97)<<" = ";
            cout<<h[i]<<endl;
        }
    }
    return 0;
}