#include<iostream>
#include<string.h>
using namespace std;
struct student{
    int rollno;
    char name[20];
    string address;
};
int main(){
    struct student s;
    //method to initialize
    s.rollno=10;
    strcpy(s.name,"alex");     //char initialization
    s.address="gorakhpur UP";
                                
    cout<<s.rollno<<endl;
    cout<<s.name<<endl;
    cout<<s.address<<endl;
    

    /*struct student s1={20,"alex","gorakhpur"};          //second method to initialize

    cout<<s1.rollno<<endl;
    cout<<s1.name<<endl;
    cout<<s1.address<<endl;*/

    return 0;
}