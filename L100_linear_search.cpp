#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;    
};

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
int LinearSearch(struct Array arr,int key){         //just gives index number
    for(int i=0;i<arr.length;i++){
        if(key==arr.A[i]){
            return i;
        }
    }
        return -1;
}

int LinearSearchT(struct Array *arr,int key){           //return index number and swap with previous index
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
        return -1;
}

int LinearSearchF(struct Array *arr,int key){           //return index number and swap with 0 index
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
        return -1;
}

int main(){
    struct Array arr={{7,4,6,2,9,1,5},10,7};
    display(arr);
    cout<<endl<<LinearSearch(arr,2);
    cout<<endl;
    display(arr);
    cout<<endl<<LinearSearchT(&arr,6)<<endl;
    display(arr);
    cout<<endl<<LinearSearchF(&arr,5)<<endl;
    display(arr);
    return 0;
}