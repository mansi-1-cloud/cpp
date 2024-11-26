#include<iostream>
#include<string>
#include<cstring>
using namespace std;

char reverse(char name[]){
    char temp;
    int i,j,l;
    l=strlen(name);
    for(i=0,j=l-1;i<j;j--,i++){
      temp=name[i];
      name[i]=name[j];
      name[j]=temp;
    }
    return temp;
}

int main(){
  char str[100],i;
  cout<<"enter name"<<endl;
  cin>>str;
  reverse(str);
  cout<<"reversed is   "<<str<<endl;
}