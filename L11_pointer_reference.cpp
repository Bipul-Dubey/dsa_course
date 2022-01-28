#include<iostream>
using namespace std;
struct rectangle{
    int lenght;
    int breadth;
    void area(){
        cout<<"area: "<<(lenght*breadth);
    }
};
int main(){
  /*  struct rectangle r;
    struct rectangle *p=&r;     //declare and assign pointer
    */
   struct rectangle *p;         //declare struct using pointer
    (*p).lenght=6;                //assign value to struct pointer using (.) operator
    p->breadth=5;               //assign value to struct pointer using (->)
    (*p).area();
    cout<<endl;
    p=new rectangle;
    
    return 0;
}