//simple style of coding
#include<iostream>
using namespace std;
int main(){
    float length=0,breadth=0;
    cout<<"enter length and breadth: ";
    cin>>length>>breadth;
    float area=length*breadth;
    float peri=2*(length+breadth);
    cout<<"area: "<<area<<endl<<"perimeter: "<<peri<<endl;
    return 0;
}