#include<iostream>
using namespace std;
 class library{
  private:
  string title;
   int id;
  static int count;
  public:
  library():title(""),id(0){} 
  library(string a,int i): title(a),id(i){
    count++;
  }
  void setdata(string a,int l){
   title=a;
   id=l;
    count++;
  }
  void getdata() const{
    cout<<"output is"<<endl;
    cout<<title<<" "<<id<<" "<<count<<endl;
  }
   static void total(){
    cout<<"total "<<count;
  }
  ~library(){
    count--;
    int i;
    cout<<"destructor called"<<endl;
  }
  };
   int library ::count=0;
int main(){
  library b;
  b.setdata("hello",986);
  
  b.getdata();
  library::total();
  
}