//lower traingle using row major by class
#include<iostream>
using namespace std;

class Matrix{
    private:
        int *a;
        int n;
    public:
        Matrix(){
            n=2;
            a=new int[2*(2+1)/2];
        }
        Matrix(int n){
            this->n=n;
            a=new int[n*(n+1)/2];
        }
        void set(int i,int j,int k){
            if(i>=j){
                a[(i*(i-1)/2)+j-1]=k;
            }
        }
        void display(){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i>=j){
                        cout<<a[(i*(i-1)/2)+j-1]<<"  ";
                    }
                    else{
                        cout<<"0"<<"  ";
                    }
                }
                cout<<endl;
            }            
        }
        ~Matrix(){
            delete []a;
            cout<<"\ndestructor";
        }
};

int main(){
    int d;
    cout<<"enter dimanesion: ";
    cin>>d;
    Matrix m(d);

    int x;
    cout<<"enter all element: ";
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>x;
            m.set(i,j,x);
        }
    }
    m.display();

    return 0;
}