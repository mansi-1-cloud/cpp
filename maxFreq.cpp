#include<iostream>
#include<string>
#include<cstring>
using namespace std;

char max(char s[]){
  int max=0,c=0,l;
  char b='\0';
  l=strlen(s);
  for(int i=0;i<l;i++){
    c=0;
    for(int j=0;j<l;j++){
      if(s[i]==s[j])
      c++;
    }
    if(c>max){
    max=c;
    b=s[i];
  }}
  return b;
}
char toLower(char ch){
  if((ch>'a'&&ch<='z') || (ch>='0'&&ch<='9'))
  return ch;
  else {
    char temp=ch-'A'+'a';
    return temp;
  }
}
int main(){
  char str[100],k;
  cout<<"enter name"<<endl;
  getline(cin,str);
  int l=strlen(str);
  for(int i=0;i<l;i++){
    str[i]=toLower(str[i]);
  }
 k= max(str);
cout<<"MAXI  "<<k<<endl;
}