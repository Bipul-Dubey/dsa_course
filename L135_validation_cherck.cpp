#include<iostream>
using namespace std;

int checkvalid(char name[]){
    for(int i=0;name[i]!='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=95 && name[i]<=122) && 
        !(name[i]>=48 && name[i]<=58)){
            return 0;
        }
    }
    return 1;
}

int main(){

    char name[]="king123@";
    if(checkvalid(name)){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"not valid"<<endl;
    }
    return 0;
}