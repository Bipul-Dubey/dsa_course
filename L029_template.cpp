//template-->>generic datatypes
#include<iostream>
using namespace std;
template <class t>
class rectangle{
    private:
     t length,breadth;
    public:
        rectangle(){            //constructor-->>default constructor
            length=breadth=0;   
        }
        rectangle(t l,t b){            //constructuor-->>parameterize constructor
            length=l;
            breadth=b;
        }
        t area();
        t perimeter();
      /*  void setlen(t l){
            length=l;
        }
        void setbreadth(t b){
            breadth=b;
        }
        t getlen(){
            return length;
        }
        t getbreadth(){
            return breadth;
        }
        ~rectangle(){
            cout<<"destructor";
        }*/
};
template <class t>
t rectangle <t>::area(){
        return length*breadth;
}
template <class t>
t rectangle <t>::perimeter(){
    return 2*(length+breadth);
}

int main(){
    rectangle <float> r(5,7);
    cout<<"area: "<<r.area()<<endl;
    cout<<"perimeter: "<<r.perimeter()<<endl;
    return 0;
}