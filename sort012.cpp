#include<iostream>
using namespace std;

int main(){
    int a[100];
    int n,k,i,temp;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(k=i;k<n-1-i;k++){
           if(a[k]>a[k+1]){
            temp=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
           }
      }
    }
    for(i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
}

    
