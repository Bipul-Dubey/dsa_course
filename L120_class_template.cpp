#include<iostream>
using namespace std;
template<class t>
class Array{
    private:
        t *a;
        t size;
        t length;
    public:
        Array(t size){
            length=0;
            a=new int[size];
        }
        ~Array(){
            delete []a;
            cout<<"\ndestructor\n";
        }
        void display(){
            cout<<"\nElements: ";
            for(int i=0;i<length;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        void insert(t index,t element){
            if(index>=0 && index<=length){
                for(int i=length-1;i>=index;i--){
                    a[i+1]=a[i];
                }
                a[index]=element;
                length++;
            }
        }
        int delet(t index){
            int x=0;
            if(index>0 && index<=length){
                x=a[index];
                for(int i=index;i<=length;i++){
                    a[i]=a[i+1];
                }
                length--;
            }
            return x;
        }
};

int main(){
    Array<int> arr(10);
    arr.insert(0,2);
    arr.insert(1,4);
    arr.insert(2,6);
    arr.display();
    cout<<"delete: "<<arr.delet(1);
    arr.display();
    return 0;
}