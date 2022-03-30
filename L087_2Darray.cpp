//declare 2D array

#include<iostream>
using namespace std;
int main(){

    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};         //1st general method --- all these is in stack
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<"  ";
        }
        cout<<"\n";
    }
cout<<"\n";
    int *B[3];                  //2nd method using pointer   //this created in stack
    B[0]=new int[4];            //all these three created in heap
    B[1]=new int[4];
    B[2]=new int[4];
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<B[i][j]<<"  ";
        }
        cout<<"\n";
    }
cout<<"\n";
    int **C;                //3rd method all these created in heap
    C=new int*[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<"  ";
        }
        cout<<"\n";
    }
cout<<"\n";
    return 0;
}