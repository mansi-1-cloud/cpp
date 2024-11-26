#include<iostream>
using namespace std;

int main(){
    int a[100];
    int n,k,i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    for(i=0;i<n;i+=2){
        if(i+1<n){
            k=a[i+1];
            a[i+1]=a[i];
            a[i]=k;
        }
    }
    cout<<"answer is";
    for(i=0;i<n;i++){
        
        cout<<a[i]<<" ";
        }
}