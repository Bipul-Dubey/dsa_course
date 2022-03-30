//declare and initialization of reference
#include<iostream>
using namespace std;
int main(){

    int a=20;
    int &r=a;       //reference declaration and intialization

    cout<<a<<"    "<<r<<endl;
    r=5;
    cout<<"changing r and print a: "<<a<<endl;      // a change when we change r 
                                                   //(one auto change when we change on of them)

    int b=10;
    int c=b;
    cout<<b<<"   "<<c<<endl;

    c=25;
    cout<<"changing c and print b: "<<b<<endl;    //b not change when we change c


    return 0;
}