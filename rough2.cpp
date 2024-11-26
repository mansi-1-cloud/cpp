#include<iostream>
using namespace std;

 int main(){
    int p=5;
    int *ptr=&p;
    cout<<ptr<<endl;
    int *ptr2=ptr;
    cout<<ptr2<<endl;
    cout<<"VALUE OF P"<<p<<endl;
    cout<<"VALUE OF Ptr"<<ptr<<endl;
    cout<<"VALUE OF Ptr2"<<ptr2<<endl;
   
return 0;
 }
