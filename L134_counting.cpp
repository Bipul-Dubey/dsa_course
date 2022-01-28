//counting word vowel and consonent
#include<iostream>
using namespace std;
int main(){

    char ch[]="how are  you";
    int vcount=0;
    int ccount=0;
    int word=1;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            vcount++;
        }
        else if(ch[i]>=65 && ch[i]<=90 || ch[i]>=95 && ch[i]<=122){
            ccount++;
        }
    }
    cout<<"consonent: "<<ccount<<endl;
    cout<<"vovel: "<<vcount<<endl;
    
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' ' && ch[i-1]!=' '){
            word++;
        }
    }
    cout<<"words: "<<word;

    return 0;
}