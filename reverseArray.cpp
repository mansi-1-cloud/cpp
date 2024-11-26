#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
  int arr[20],m,n,i,temp,j;
  cout<<"enter m and n"<<endl;
  cin>>m;
  cin>>n;
   for(i=0;i<n;i++){
    cin>>arr[i];}

  for(i=m,j=n-1;i<j;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
   for(i=0;i<n;i++){
    cout<<" "<<arr[i]<<endl;
}
return 0;
}