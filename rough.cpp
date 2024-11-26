/*name (string)
id (int)
grade (float)
Write a program that:

Declares an array of Student structures.
Prompts the user to input the number of students.
Prompts the user to input values for the name, id, and grade for each student.
Displays the details of all students*/
#include<iostream>
#include<string>

using namespace std;
 struct Student{
  string name;
  int id;
  float grade;
 };
 int main(){
  int n,i;
  Student s1[100];
  cout<<"enter n"<<endl;
  cin>>n;
  for(i=0;i<n;i++){
    cout<<"name id grade"<<endl;
    getline(cin,s1[i].name);
    cin>>s1[i].id;
    cin>>s1[i].grade;
  }
   for(i=0;i<n;i++){
 
    cout<<s1[i].name<<endl;
    cout<<s1[i].id<<endl;
    cout<<s1[i].grade<<endl;
  }
 }