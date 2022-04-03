#include<iostream>
using namespace std;

int anagram(string a,string b){
    int H[26]={0};
    bool is_anagram=true;
    if(a.size()==b.size()){
        for(int i=0;i<a.size();i++){
            H[a[i]-97]++;
        }
        for(int j=0;j<b.size();j++){
            H[b[j]-97]--;
        }
        for(int k=0;k<26;k++){
            if(H[k]!=0){
                is_anagram=false;
            }
        }
    }
    else{
        is_anagram=false;
    }
    return is_anagram;
}

int main(){
    string a="verbose";
    string b="observe";
    if(anagram(a,b)){
        cout<<"Anagram";
    }
    else{
        cout<<"Not Anagram";
    }
    return 0;
}