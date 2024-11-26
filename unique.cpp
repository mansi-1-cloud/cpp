#include<iostream>
using namespace std;

int main(){
    int a[100],b[100];
    int n,k,i,j,c=0,p=0,m=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++){
      cin>>a[i];
    }
     for(i=1;i<10;i++){
        c=0;
       for(j=0;j<n;j++){
         if(a[j]==i){
            c++;
         }}
         if(c>0){
         b[p]=c;
         p++;
         }
     }
     
       for(i=0;i<p;i++){
         k=0;
       for(j=i;j<p;j++){
         if(b[i]==b[j]){
            k++;
         }}
         if(k==1){
            m++;
         
       }}
       if(m==p)
       cout<<"yesssss unique";
       else 
       cout<<"noo";
}