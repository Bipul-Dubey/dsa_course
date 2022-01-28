//find missing number
#include<iostream>
using namespace std;
class Array{
    private:
        int *a;
        int size;
        int length;
    public:
        Array(int size){
            a=new int[size];
        }
        void getarray(){
            cout<<"length: ";
            cin>>length;
            cout<<"enter elements: ";
            for(int i=0;i<length;i++){
                cin>>a[i];
            }
        }
        void display(){
            cout<<"elements: ";
            for(int i=0;i<length;i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        ~Array(){
            delete []a;
            cout<<"\ndestructor\n";
        }
        int SumN(){
            length=length+1;
            return ((length*(length+1))/2);

        }
        int Missing(){      //find 1 missing in 1st N naturalnumber
            int sum=0,s;
            for(int i=0;i<length;i++){
                sum=sum+a[i];
            }
            return SumN()-sum;            
        }
        void missN(){           //find 1 missing in N sorted natural number
            int diff=a[0]-0;
            for(int i=0;i<length;i++){
                if((a[i]-i)!=diff){
                    cout<<(i+diff);
                    break;
                }
            }
        }
        void MissMulN(){           //find multiple missing  in N sorted natural number array
            int diff=a[0]-0;
            for(int i=0;i<length;i++){
                if((a[i]-1)!=diff){
                    while(diff<(a[i]-i)){
                        cout<<(diff+i)<<" ";
                        diff++;
                    }
                }
            }
        }
        int high(){                         //find largest in array
            for(int i=1;i<length;i++){
                if(a[0]<a[i]){
                    a[0]=a[i];
                }
            }
            return a[0];
        }
        int low(){
            for(int i=1;i<length;i++){
                if(a[0]>a[i]){
                    a[0]=a[i];
                }
            }
            return a[0];
        }
        void UnSortMiss(){
            int h[12];
            for(int i=0;i<length;i++){
                h[a[i]]++;
            }
            for(int i=low();i<=high();i++){
                if(h[i]==0){
                    cout<<i<<" ";
                }
            }
        }
};
int main(){
    int size;
    cout<<"size: ";
    cin>>size;
    Array arr(size);
    arr.getarray();
    //cout<<"missing number: "<<arr.Missing();
    //arr.missN();
    //arr.MissMulN();
    //cout<<arr.high();
    //cout<<arr.low();
    arr.UnSortMiss();
    return 0;
}