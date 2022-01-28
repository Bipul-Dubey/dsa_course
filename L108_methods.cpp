//get(), set(), max(), min(), sum(), avg()
#include<iostream>
using namespace std;

struct Array{
    int Arr[25];
    int size;
    int length;
};

int get(struct Array arr,int index){
    if(index>0&&index<arr.length){
        return arr.Arr[index];
    }
    return -1;
}

int set(struct Array arr,int index,int x){
    if(index>0&&index<arr.length){
        return arr.Arr[index]=x;
    }
    return -1;
}

int max(struct Array arr){
    int max=arr.Arr[0];
    for(int i=1;i<arr.length;i++){
        if(arr.Arr[i]>max){
            max=arr.Arr[i];
        }
    }
    return max;
}

int min(struct Array arr){
    int min=arr.Arr[0];
    for(int i=1;i<arr.length;i++){
        if(arr.Arr[i]<min){
            min=arr.Arr[i];
        }
    }
    return min;
}

int sum(struct Array arr){
    int totalsum=0;
    for(int i=0;i<arr.length;i++){
        totalsum=totalsum+arr.Arr[i];
    }
    return totalsum;
}

float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}

int Rec_Sum(struct Array arr,int n){
    if(n<0){
        return 0;
    }
    else{
        return Rec_Sum(arr,n-1)+arr.Arr[n];
    }
}

int main(){
    struct Array arr={{2,5,8,15,9,1},10,6};
    cout<<get(arr,2);
    cout<<endl;
    cout<<set(arr,5,30);
    cout<<endl;
    cout<<max(arr);
    cout<<endl;
    cout<<min(arr);
    cout<<endl;
    cout<<sum(arr);
    cout<<endl;
    cout<<avg(arr);
    cout<<endl;
    cout<<Rec_Sum(arr,arr.length);
    return 0;
}