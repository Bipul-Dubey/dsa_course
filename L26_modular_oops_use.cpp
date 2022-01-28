//modular program-->> using function struct or class
//in this using class
#include<iostream>
using namespace std;

class rectangle{
        float length;
        float breadth;
    public:
        void initialise(float l,float b){
            length=l;
            breadth=b;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    rectangle r;
    float l,b;
    cout<<"enter length and breadth: ";
    cin>>l>>b;
    r.initialise(l,b);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;

    return 0;
}