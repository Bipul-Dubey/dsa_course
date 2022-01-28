//tower of hanoi
#include<iostream>
using namespace std;

void TOH(int n,int src,int helper,int dest){
    if(n==0){
        return;
    }
    else{
        TOH(n-1,src,dest,helper);
        cout<<"from "<<src<<" to "<<dest<<endl;
        TOH(n-1,helper,src,dest);
    }
}

int main(){

    TOH(3,1,2,3);

    return 0;
}