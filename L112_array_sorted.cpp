// 1) insert in sorted array
// 2) check array is sorted or not
// 3) arrange -ve in left side
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
    cout<<endl;
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


void insertSort(struct Array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
            return;
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }     
    arr->A[i+1]=x;
    arr->length++;
}

int issorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}
void Rearrange(struct Array *arr){
    int i=0;
    int j=arr->length-1;
    while(i<j){

        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}
int main(){
    struct Array arr={{2,-3,25,10,-15,-7},15,6};
    //insertSort(&arr,18);
    //cout<<issorted(arr);
    display(arr);
    Rearrange(&arr);
    display(arr);
    return 0;
}