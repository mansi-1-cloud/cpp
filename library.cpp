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
  void setdata(){
    cout<<"enter name and id"<<endl;
    
    cin>>id;
    cin.ignore();
     getline(cin,title);
    count++;
  }
  void getdata() const{
    cout<<"output is"<<endl;
    cout<<title<<" "<<id<<" "<<count<<endl;
  }
   static int total(){
    return count;
  }
  ~library(){
    count--;
    cout<<"destructor called"<<endl;
  }
  };
   int library ::count=0;
int main(){
  library b;
  b.setdata();
  
  b.getdata();
  cout<<"tottal books "<<library::total()<<endl;
}