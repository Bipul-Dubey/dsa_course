//pointer implementation on array
#include<iostream>
using namespace std;

struct rectangle{
  int length;
  int breadth;
};

int main(){

    int arr[5]={2,5,2,7,4};
    int *p;
    p=arr;                  //in array pointer work as new array name
//print array element 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
//print array element using pointer
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }cout<<endl;

    int *ptr;
    ptr=new int[5];           //this allocate memory in heap
    ptr[0]=10;  ptr[1]=110;  ptr[2]=120;   ptr[3]=130;  ptr[4]=7;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }cout<<endl;

    delete [] ptr;

    int *p1;
    float *p2;
    double *p3;
    char *p4;
    struct rectangle *p5;

    cout<<"size of int: "<<sizeof(p1)<<endl;
    cout<<"size of float: "<<sizeof(p2)<<endl;
    cout<<"size of double: "<<sizeof(p3)<<endl;
    cout<<"size of char: "<<sizeof(p4)<<endl;
    cout<<"size of struct: "<<sizeof(p5)<<endl;
    return 0;
}