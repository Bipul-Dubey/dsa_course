#include<iostream>
using namespace std;

class Diagonal{
    int *a;
    int n;
    public:
        Diagonal(int n){
            this->n=n;
            a=new int[n];
        }
        void create();
        void Display();
};

void Diagonal::create(){
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;            
            if(i==j){
                a[i-1]=x;
            }
        }
    }
}

void Diagonal::Display(){
    cout<<endl;
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

class LowerTriRowMaj{
    int n;
    int *a;
    public:
        LowerTriRowMaj(int d){
            n=d;
            a=new int[n*(n+1)/2];
        }
        void create();
        void Display();
};

void LowerTriRowMaj::create(){
    int ele;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ele;
            if(i>=j){
                a[(i*(i-1)/2)+j-1]=ele;
            }
        }
    }
}

void LowerTriRowMaj::Display(){
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<a[(i*(i-1)/2)+j-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

class LowerTriColMaj{
    int n;
    int *a;
    public:
        LowerTriColMaj(int d){
            n=d;
            a=new int[n*(n-1)/2];
        }
        void create();
        void Display();
};

void LowerTriColMaj::create(){
    int ele;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ele;
            if(i>=j){
                a[(n*(j-1)-((j-2)*(j-1))/2)+(i-j)]=ele;
            }
        }
    }
}

void LowerTriColMaj::Display(){
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<a[(n*(j-1)-((j-2)*(j-1))/2)+(i-j)]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

class UpperTriRowMaj{
    int *a;
    int n;
    public:
        UpperTriRowMaj(int d){
            n=d;
            a=new int[(n*(n-1))/2];
        }
        void create();
        void display();
};

void UpperTriRowMaj::create(){
    int ele;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ele;
            if(i<=j){
                a[(n*(i-1)-((i-2)*(i-1))/2)+(j-i)]=ele;
            }
        }
    }
}

void UpperTriRowMaj::display(){
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<a[(n*(i-1)-((i-2)*(i-1))/2)+(j-i)]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

class UpperTriColMaj{
    int *a;
    int n;
    public:
        UpperTriColMaj(int d){
            n=d;
            a=new int[n*(n-1)/2];
        }
        void create();
        void Display();
};

void UpperTriColMaj::create(){
    int ele;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ele;
            if(i<=j){
                a[(j*(j-1)/2)+i-1]=ele;
            }
        }
    }    
}

void UpperTriColMaj::Display(){
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<a[(j*(j-1)/2)+i-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}

class SymmetricMatrix{
    int *a;
    int n;
    public:
        SymmetricMatrix(int d){
            n=d;
            a=new int[n*(n+1)/2];
        }
        void create();
        void display();
};

void SymmetricMatrix::create(){
    int ele;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ele;
            if(i>=j){
                a[(i*(i-1)/2)+j-1]=ele;
            }
        }
    }
}

void SymmetricMatrix::display(){
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<a[(i*(i-1)/2)+j-1]<<" ";
            }
            else{
                cout<<a[(j*(j-1)/2)+i-1]<<" ";
            }
        }
        cout<<endl;
    }
}

class TriDiagonalMat{
    int *a;
    int n;
    public:
        TriDiagonalMat(int d){
            n=d;
            a=new int[3*n-2];
        }
        ~TriDiagonalMat(){
            delete []a;
        }
        void create();
        void display();        
};

void TriDiagonalMat::create(){
    int x;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            if(i-j==0){
                a[n+i-2]=x;
            }
            else if(i-j==1){
                a[i-2]=x;
            }
            else if(i-j==-1){
                a[2*n+i-2]=x;
            }
        }
    }
}

void TriDiagonalMat::display(){
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i-j==0){
                cout<<a[n+i-2]<<" ";
            }
            else if(i-j==1){
                cout<<a[i-2]<<" ";
            }
            else if(i-j==-1){
                cout<<a[2*n+i-2]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

class ToeplitzMat{
    int *a;
    int n;
    public:
        ToeplitzMat(int d){
            n=d;
            a=new int[2*n-1];
        }
        void create();
        void display();
};

void ToeplitzMat::create(){
    int ele;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ele;
            if(i<=j){
                a[j-i]=ele;
            }
            else if(i>j){
                a[n+i-j-1]=ele;
            }
        }
    }
}

void ToeplitzMat::display(){
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<a[j-i]<<" ";
            }
            else{
                cout<<a[n+i-j-1]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    // Diagonal m(5);
    // m.create();
    // m.Display();


    // LowerTriRowMaj ltr(5);
    // ltr.create();
    // ltr.Display();

    
    // LowerTriColMaj ltc(5);
    // ltc.create();
    // ltc.Display();


    // UpperTriRowMaj utr(5);
    // utr.create();
    // utr.display();


    // UpperTriColMaj utc(5);
    // utc.create();
    // utc.Display();

    
    // SymmetricMatrix sm(5);
    // sm.create();
    // sm.display();

    // TriDiagonalMat tdm(5);
    // tdm.create();
    // tdm.display();

    ToeplitzMat tpm(5);
    tpm.create();
    tpm.display();


    return 0;
}