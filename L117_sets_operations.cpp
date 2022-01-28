#include<iostream>
using namespace std;

class Array{
    public:
        int *a;
        int size;
        int length;
        Array(int size){
            a=new int[size];
        }
        void getarray(){
            cout<<"enter length: ";
            cin>>length;
            cout<<"enter elements: ";
            for(int i=0;i<length;i++){
                cin>>a[i];
            }
        }
        void display(){
            for(int i=0;i<length;i++){
                cout<<a[i]<<" ";
            }
        }
        Array Union(Array y){
            Array z(20);
           // z.length=length+y.length;
            int i=0,j=0,k=0;
            while(i<length && j<y.length){
                if(a[i]<y.a[j]){
                    z.a[k++]=a[i++];
                }
                else if(y.a[j]<a[i]){
                    z.a[k++]=y.a[j++];
                }
                else{
                    z.a[k++]=a[i++];
                    j++;
                }
            }
            for(;i<length;i++){
                z.a[k++]=a[i];
            }
            for(;j<y.length;j++){
                z.a[k++]=y.a[j];
            }
            z.length=k;
            return z;
        }
         Array Intersection(Array y){
            Array z(20);
            //z.length=length+y.length;
            int i=0,j=0,k=0;
            while(i<length && j<y.length){
                if(a[i]<y.a[j]){
                    i++;
                }
                else if(y.a[j]<a[i]){
                    j++;
                }
                else if(a[i]==y.a[j]){
                    z.a[k++]=a[i++];
                    j++;
                }
            }
            z.length=k;
            return z;
        }
       Array Difference(Array y){
            Array z(20);
            //z.length=length+y.length;
            int i=0,j=0,k=0;
            while(i<length && j<y.length){
                if(a[i]<y.a[j]){
                    z.a[k++]=a[i++];
                }
                else if(y.a[j]<a[i]){
                    j++;
                }
                else{
                    i++;
                    j++;
                }
            }
            for(;i<length;i++){
                z.a[k++]=a[i];
            }
            z.length=k;
            return z;
        }
};

int main(){
    Array a1(10);
    Array a2(10);
    a1.getarray();
    a2.getarray();
    Array a3(20);
    a3=a1.Union(a2);
    cout<<endl;
   //a3=a1.Intersection(a2);
    cout<<endl;
    //a3=a1.Difference(a2);
    a3.display();

    return 0;
}