#include<iostream>
using namespace std;

class student{
  protected:
  int roll;
  public:
  void setno(int r){
    roll=r;
  }
  void getno(){
    cout<<"the roll number is"<<roll<<endl;
  }
};
 class exam:public student{
  protected:
    float maths;
     float physics;
  public:
  void show(){
    getno();
  }
      void setmarks(float m1,float m2){
        maths=m1;
        physics=m2;
      }
      
      void getmarks(){
        cout<<"math are "<<maths<<endl;
        cout<<"physics are "<<physics<<endl;
      }

 };

 class result: public exam{
  float p;
  public:
    void display(){
      getno();
      getmarks();
      cout<<"ypor result is "<<(maths+physics)/2<<"%"<<endl;
    }
 };
 int main(){
  result harry;
  harry.setno(345);
  harry.setmarks(98,99);
  harry.display();
 }