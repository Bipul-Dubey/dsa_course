/*#include<iostream>
using namespace std;
int main(){

    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int arr3[20];
    for(int i=0;i<5;i++){
        arr3[i]=arr1[i];
        arr3[i+5]=arr2[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<"  ";
    }

    return 0;
}*/

#include<iostream>
using namespace std;
class arr{
    public: 
        int *a;
        int size;
        int length;
        arr(int b){
            size=b;
            a=new int[size];
        }
        void getarr(){
            cout<<"enter length: ";
            cin>>length;
            for(int i=0;i<length;i++){
                cin>>a[i];
            }
        }
        void display(){
            for(int i=0;i<length;i++){
                cout<<a[i]<<" ";
            }
        }
        arr merge(arr y){
            arr z(20);
            z.length=length+y.length;
            int i=0,j=0,k=0;
            while(i<length && j<y.length){
                if(a[i]<y.a[j]){
                    z.a[k++]=a[i++];
                }
                else{
                    z.a[k++]=y.a[j++];
                }
            }
            for(;i<length;i++){
                z.a[k++]=a[i];
            }
            for(;j<y.length;j++){
                z.a[k++]=y.a[j];
            }
            return z;
        }
};
int main(){
    arr a1(10);
    arr a2(10);
    a1.getarr();
    a2.getarr();
    arr a3(20);
    a3=a1.merge(a2);
    a3.display();
    return 0;
}