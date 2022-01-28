#include<iostream>
using namespace std;

class diagonal{
    private:
        int *a;
        int n;
    public: 
        diagonal(){
            a=new int[n];
        }
        diagonal(int n){
            this->n=n;
            a=new int[n];
        }
        ~diagonal(){
            delete []a;
            cout<<"\ndestructor";
        }
        void set(int i,int j,int x){
            if(i==j){
                a[i-1]=x;
            }
        }
        int get(int i,int j){
            if(i==j){
                return a[i-1];
            }
            return 0;
        }
        void display(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        cout<<a[i]<<" ";
                    }
                    else{
                        cout<<"0 ";
                    }
                }
                cout<<endl;
            }
        }
};

int main(){
    diagonal dm(3);
    dm.set(1,1,3);
    dm.set(2,2,6);
    dm.set(3,3,9);
    dm.display();

    return 0;
}