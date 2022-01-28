#include<iostream>
using namespace std;
int main(){
    int a[4][4];
    cout<<"enter 4*4: ";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    cout<<"matrix lower triangle: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i>=j){
                cout<<a[i][j]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}