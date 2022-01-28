#include<iostream>
using namespace std;
int main(){
    char ch[]="madam";
    string t;
    t=ch;
    int i,j;
    char temp;
    for(i=0;ch[i]!='\0';i++){}
    i=i-1;
    for(j=0;j<i;j++,i--){
        temp=ch[j];
        ch[j]=ch[i];
        ch[i]=temp;
    }
    cout<<ch<<endl;
    cout<<t<<endl;

    if(ch==t){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}