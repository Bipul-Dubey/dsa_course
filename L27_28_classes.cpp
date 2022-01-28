#include<iostream>
using namespace std;

class rectangle{
    private:
     float length,breadth;
    public:
        rectangle(){            //constructor-->>default constructor
            length=breadth=0;   
        }
        rectangle(float l, float b){            //constructuor-->>parameterize constructor
            length=l;
            breadth=b;
        }
        float area();
        float perimeter();
        void setlen(float l){
            length=l;
        }
        void setbreadth(float b){
            breadth=b;
        }
        int getlen(){
            return length;
        }
        int getbreadth(){
            return breadth;
        }
        ~rectangle(){
            cout<<"destructor";
        }
};
float rectangle::area(){
        return length*breadth;
}
float rectangle::perimeter(){
    return 2*(length+breadth);
}

int main(){
    rectangle r;
    r.setlen(5);
    r.setbreadth(10);
    cout<<"area: "<<r.area()<<endl;
    cout<<"perimeter: "<<r.perimeter()<<endl;
    return 0;
}