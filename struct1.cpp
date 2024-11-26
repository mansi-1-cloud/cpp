#include<iostream>
using namespace std;

class book{
  private: 
    string title;
    int id;
    string author;
  
   public: 
    book(string n,string m,int a):title(n),author(m),id(a){}
    void settitle(string t,string a,int i) {
      title=t;
      author=a;
      id=i;
      }
    void display(){
      cout<<"book is "<<title<<endl;
      cout<<"author is  "<<author<<endl;
      cout<<"id is "<<id<<endl;
    
   }
};
   int main(){
   book *b1=new book[3];
   int i;
   string title,author;
   for(int i=0;i<3;i++){
    cin>>id;
    getline(cin,title);
    getline(cin,author);
     b1[i]->settitle();
   }
  for(int i=0;i<3;i++){
   b1[i]->display();
  }
  //  for(int i=0;i<3;i++){
  //  delete b1[i];
  // }
   return 0;
   }
 
