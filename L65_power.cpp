//pow(m,n)--->>> 5^3=5*5*5
#include<iostream>
using namespace std;
int pow(int m,int n){
    if(n<=0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
int main(){

    int power=pow(2,5);
    cout<<power;
    return 0;
}