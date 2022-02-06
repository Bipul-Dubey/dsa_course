#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;
};
 
void Insert(Node** ptrBins, int idx){
    Node* temp = new Node;
    temp->value = idx;
    temp->next = nullptr;
 
    if (ptrBins[idx] == nullptr){ // ptrBins[idx] is head ptr
        ptrBins[idx] = temp;
    } else {
        Node* p = ptrBins[idx];
        while (p->next != nullptr){
            p = p->next;
        }
        p->next = temp;
    }
}
 
int Delete(Node** ptrBins, int idx){
    Node* p = ptrBins[idx];  // ptrBins[idx] is head ptr
    ptrBins[idx] = ptrBins[idx]->next;
    int x = p->value;
    delete p;
    return x;
}

int FindMax(int A[],int n){
    int max=INT32_MIN,i=0;
    while(i<n){
        if(A[i]>max){
            max=A[i];
        }
        i++;
    }
    return max;
}

void BinSort(int A[],int n){
    int max=FindMax(A,n);
    Node** bins=new Node*[max+1];
    for(int i=0;i<max+1;i++){
        bins[i]=nullptr;        //create a bins array linked list with null pointer
    }    
    for(int i=0;i<n;i++){
        Insert(bins,A[i]);
    }
    int j=0;
    int i=0;
    while(i<max+1){
        while(bins[i]!=nullptr){
            A[j++]=Delete(bins,i);
        }
        i++;
    }
    delete []bins;
}


void display(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    BinSort(a,n);
    display(a,n);
    return 0;
}