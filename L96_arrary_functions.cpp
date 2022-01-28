#include<iostream>
using namespace std;
class Array{
    private:
        int *Arr;
        int size;
        int length;
    public:
        Array(int size){
            this->size=size;
            Arr=new int[size];
        }
        void getarray(){
            cout<<"enter length of array: ";
            cin>>length;
            cout<<"enter elements: ";
            for(int i=0;i<length;i++){
                cin>>Arr[i];
            }
        }
        void display(){
            cout<<"\nelements: ";
            for(int i=0;i<length;i++){
            cout<<Arr[i]<<"  ";
            }
        }
        void append(int x){
            if(length<size){
                Arr[length]=x;
                length++;
            }
        }
        void insert(int index,int ele){
            for(int i=length;i>index;i--){
                Arr[i]=Arr[i-1];
            }
            Arr[index]=ele;
            length++;
        }
        void dlt(int index){
            for(int i=index;i<length-1;i++){
                Arr[i]=Arr[i+1];
            }
            length--;
        }
        ~Array(){
            delete[] Arr;
            cout<<"\ndestructor-->array destroyed";
        }
};

int main(){
    Array arr(10);
    arr.getarray();
    arr.display();
   cout<<"\nenter a number to add: ";
    int x;
    cin>>x;
    arr.append(x);
    //arr.insert(4,20);
   // arr.dlt(3);
    arr.display();
    return 0;
}