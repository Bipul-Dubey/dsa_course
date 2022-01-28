#include<iostream>
using namespace std;
struct Array{
    int Arr[20];
    int size;
    int length;
};
int BinarySearch(int arr[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=((l+h)/2);
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            return BinarySearch(arr,l,mid-1,key);
        }
        else{
            return BinarySearch(arr,mid+1,h,key);
        }
    }
    return -1;
}
int main(){
    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
    cout<<BinarySearch(arr.Arr,0,arr.length,28);
    return 0;
}