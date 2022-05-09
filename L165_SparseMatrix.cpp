#include<iostream>
using namespace std;

class Element{
    public:
        int i;
        int j;
        int x;
};

class Sparse{
    int m;
    int n;
    int num;
    Element *ele;
    public:
        Sparse(int m,int n,int num){
            this->m=m;
            this->n=n;
            this->num=num;
            ele=new Element[this->num];
        }
        void read();
        void display();
};

void Sparse::read(){
    cout<<"Enter Non-Zero Elements (row column element)"<<endl;
            for(int i=0;i<num;i++){
                cin>>ele[i].i>>ele[i].j>>ele[i].x;
            }
}

void Sparse::display(){
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ele[k].i==i && ele[k].j==j){
                cout<<ele[k++].x<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main(){
    Sparse sp(5,5,5);
    sp.read();
    sp.display();
    return 0;
}