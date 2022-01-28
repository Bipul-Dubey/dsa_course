#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    cout<<"enter 3*3 matrix: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"diagonal matrix: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
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