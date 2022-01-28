//work on sorted array
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
            cout<<"Elements: ";
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
    int n;
    cout<<"enter size: ";
    cin>>n;
    Array a1(n);
    Array a2(n);
    Array a3(n);
    int ch;
    do{
        cout<<"\n   -enter your choice-       "<<endl;
        cout<<"1) Union "<<endl;
        cout<<"2) intersection "<<endl;
        cout<<"3) diffference "<<endl;
        cout<<"4) exit "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            a1.getarray();
            a2.getarray();    
            a3=a1.Union(a2);
            a3.display();
            break;
        case 2:
            a1.getarray();
            a2.getarray();    
            a3=a1.Intersection(a2);
            a3.display();
            break;
        case 3:
            a1.getarray();
            a2.getarray();    
            a3=a1.Difference(a2);
            a3.display();
            break;
        }
    }while(ch<3);
    return 0;
}