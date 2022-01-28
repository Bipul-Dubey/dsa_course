#include<iostream>
using namespace std;
int main(){
    char ch[]="reverse";
    int i,j;
    char t;
    for(i=0;ch[i]!='\0';i++){}
    i=i-1;
    for(j=0;j<i;j++,i--){
        t=ch[j];
        ch[j]=ch[i];
        ch[i]=t;
    }
    cout<<ch;
    return 0;
}