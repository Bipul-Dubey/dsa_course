#include<iostream>
using namespace std;
struct Array{
    int A[25];
    int size;
    int length;
};
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void reverse(struct Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}

void shiftleft(struct Array *arr){
    int n=5,i=0,j;
    while(i<n){
        int first=arr->A[0];
        for(j=0;j<arr->length-1;j++){
            arr->A[j]=arr->A[j+1];
        }
        arr->A[j]=first;
        i++;
    }
    cout<<endl;
}

int main(){
    struct Array arr={{1,2,3,4,5,6},10,6};
    reverse(&arr);
    display(arr);
    shiftleft(&arr);
    display(arr);
    return 0;
}