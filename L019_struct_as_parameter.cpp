#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};

void fun(struct rectangle r1){                      //struct pass as value
    cout<<"pass by value "<<endl;
    r1.length=5;                       //change value in pass by value will not change value in main function
    cout<<"l: "<<r1.length<<endl<<"r: "<<r1.breadth<<endl;
    cout<<(r1.length*r1.breadth)<<endl;
}

void fun1(struct rectangle &r2){                    //strcut pass as reference
    cout<<"pass by reference "<<endl;
    r2.length=7;                        //value change in main() when we change in call by reference funtion
    cout<<"l: "<<r2.length<<endl<<"r: "<<r2.breadth<<endl;
    cout<<(r2.length*r2.breadth)<<endl;
}

void fun2(struct rectangle *r3){
    cout<<"pass by address "<<endl;
    r3->length=6;
    cout<<"l: "<<r3->length<<endl<<"r: "<<r3->breadth<<endl;
    cout<<(r3->length*r3->breadth)<<endl;

}

int main(){
    struct rectangle r={10,5};
    cout<<"in main function"<<endl;
    cout<<"l: "<<r.length<<endl<<"r: "<<r.breadth<<endl;
    fun(r);
    cout<<"in main function after call by pointer"<<endl;
    fun2(&r);
    cout<<"in main function after call by reference \n";
    fun1(r);
    cout<<"l: "<<r.length<<endl<<"r: "<<r.breadth<<endl; 
    return 0;
}