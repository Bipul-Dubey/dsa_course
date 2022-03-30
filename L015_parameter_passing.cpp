//pass by value  ex:-addition multiplication and many more
//pass by reference         --swap values ,etc
#include<iostream>
using namespace std;

void swap(int *x,int *y){           //pass by address---using pointer
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void swap1(int &x,int &y){          //pass by reference--using reference (&)
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int x=20;
    int y=30;
    cout<<"before swap: "<<x<<"   "<<y<<endl;
    swap(&x,&y);
    cout<<"after swap: "<<x<<"   "<<y<<endl;

    int a=55,b=35;
    cout<<"before swap: "<<a<<"   "<<b<<endl;
    swap1(a,b);
    cout<<"after swap: "<<a<<"   "<<b<<endl;
    return 0;
}