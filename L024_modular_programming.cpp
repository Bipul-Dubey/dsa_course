//coding style using functions struct class etc
//in this coding using function and struct
#include<iostream>
using namespace std;

struct rectangle{
    float length;
    float breadth;
};

float area(struct rectangle r){
    return r.length*r.breadth;
}
float perimeter(struct rectangle r){
    return 2*(r.length+r.breadth);
}

int main(){
    rectangle r;
    cout<<"enter length and breadth: ";
    cin>>r.length>>r.breadth;
    cout<<"area: "<<area(r)<<endl;
    cout<<"perimeter: "<<perimeter(r)<<endl;
    return 0;
}