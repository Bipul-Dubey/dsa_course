#include<iostream>
using namespace std;
int main(){

    int a=10;
    int *p;             //declaration of pointer
    p=&a;         //initialization

    cout<<"a: "<<a<<endl;            //return value
    cout<<"&a: "<<&a<<endl;         //return address
    cout<<"p: "<<p<<endl;           //return address
    cout<<"*p: "<<*p<<endl;         //return value
    
    *p=20;              //change the value of variable using pointer
    cout<<*p<<endl; 
    cout<<"value of a here after (*p=20): "<<a<<endl;   

    int **pp;           //declare a pointer of pointer that store the value of a pointer
    pp=&p;              //value of pointer p stored in pointer of pointer i.e. pp

    cout<<**pp<<endl;

    **pp=30;
    cout<<**pp<<endl;
     cout<<"value of 'a' here after (**pp=30): "<<a<<endl;

    
    return 0;
}