#include<iostream>
using namespace std;
class Binary{
        public:
            int A[20];
            int size;
            int length;
            int BinarySearch(int key){
                int l,mid,h;
                l=0;
                h=length-1;
                while(l<=h){
                    mid=((l+h)/2);
                    if(key==A[mid]){
                        return mid;
                    }
                    else if(key<A[mid]){
                        h=mid-1;
                    }
                    else {
                        l=mid+1;  
                    }                  
                }                
            return -1;
            }
};

 int SBinarySearch(int arr[],int l,int h,int key){  
    int mid;          
    if(l<=h){
        mid=((l+h)/2);
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            return SBinarySearch(arr,l,mid-1,key);
        }
        else{
            return SBinarySearch(arr,mid+1,h,key);
        }
     }
     return -1;
}
int main(){
    Binary A={{2,3,4,6,7,9},10,6};
    cout<<A.BinarySearch(7);

cout<<endl;

    int arr[10]={2,3,5,6,8,9,14,56};
    cout<<SBinarySearch(arr,0,10,9);

    return 0;
}