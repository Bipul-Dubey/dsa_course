//diagonal matrix using struct
#include<iostream>
using namespace std;

struct Matrix{
    int a[10];
    int n;
};

void Set(struct Matrix *m,int i,int j,int x){
    if(i==j){
        m->a[i-1]=x;
    }
}

int get(struct Matrix m,int i,int j){
    if(i==j){
        return m.a[i-1];
    }
    else{
        return 0;
    }
}

void Display(struct Matrix m){
    int i,j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j){
                cout<<m.a[i]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    struct Matrix m;
    m.n=3;
    Set(&m,1,1,3);
    Set(&m,2,2,5);
    Set(&m,3,3,9);
    Display(m);
    
    return 0;
}