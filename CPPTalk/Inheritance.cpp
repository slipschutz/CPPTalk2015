

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 *A class is a user defined type.  It can
 *hold information and it also can have it's
 *own functions that can change it's information
 *or do anything it wants
 */
class GradStudent{
public:
  int YearsLeftInProgram;
  string Name;

  void Init(){
    YearsLeftInProgram=9999999;
    Name="Mr. Doesnt-Have-PhD-Yet";
  }

  void Print(){
    cout<<"Name "<<Name<<endl;
    cout<<"YearsLeftInProgram: "<<YearsLeftInProgram<<endl;
  }

};



//To make a class 'inherit' from another you say 
//class ChildClass  : public ParentClass{
//
//
// };
class PhysicsGradStudent : public GradStudent{
public:
  int BadAssLevel;
  
  void Init(){
    GradStudent::Init();
    BadAssLevel=100;
  }

  void Print(){
    cout<<"Name "<<Name<<endl;
    cout<<"YearsLeftInProgram: "<<YearsLeftInProgram<<endl;
    cout<<"BadAssLevel "<<BadAssLevel<<endl;
  }


  void DoPhysicsResearch(){
    cout<<"Code\n Drink Coffee \n Repeat"<<endl;
  }

};


int main(){


  //just like I can say
  int num;
  //Where I have made a variable num of type int

  //I can say
  GradStudent Sam;
  //Where I have made a variable Sam of type GradStudent
  //When you make a GradStudent people say of have made
  //an instance of the class Graduate student
  //the instance (the variable sam in this case)
  //is the "object" and GradStudent is the class


  Sam.Init();//Call the function init that is part of the GradStudent Class
  Sam.Print();

  cout<<endl<<endl;

  //Now let's make a instance of the 'child' class
  //IE the class that inherits from Graduate Student
  PhysicsGradStudent JonEBarney;
  JonEBarney.Init();
  JonEBarney.Print();


  


  
  vector<GradStudent> ListOfStudents;

  ListOfStudents.push_back(Sam);
  ListOfStudents.push_back(JonEBarney);

  cout<<"******************************"<<endl;

  for (auto i : ListOfStudents){
    i.Print();
  }


  return 0;
}
