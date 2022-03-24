#include<iostream>
using namespace std;

void display(int arr[],int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void RightRotate(int arr[],int length,int shift){
    int temp=0,n=0;
    while(n<shift){
        temp=arr[length-1];
        for(int i=length-1;i>=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        n++;
    }
}

void LeftRotate(int arr[],int length,int shift){
    int temp=0,n=0;
    while(n<shift){
        temp=arr[0];
        for(int i=0;i<length;i++){            
            arr[i]=arr[i+1];   
        }        
        arr[length-1]=temp;
        n++;
    }
}

void LeftShift(int arr[],int length,int shift){
    int n=0;
    while(n<shift){
        for(int i=0;i<length;i++){
            arr[i]=arr[i+1];
        }arr[length-1]=0;
        n++;
    }
}

void RightShift(int arr[],int length,int shift){
    int n=0;
    while(n<shift){
        for(int i=length-1;i>=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=0;
        n++;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr)/sizeof(arr[0]);

    display(arr,length);
    LeftRotate(arr,length,2);
    display(arr,length);
    cout<<"\n\n";
    display(arr,length);
    RightRotate(arr,length,2);
    display(arr,length);

    return 0;
}
