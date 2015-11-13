

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 *A class is a user defined type.  It can
 *hold information and it also can have it's
 *own functions that can change it's information
 *or do anything it wants.  It is an organizational
 *tool.  In the end Obejct Oriented programing is
 *1 and 0s 
 *
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
    cout<<"Name===="<<Name<<endl;
    cout<<"YearsLeftInProgram===="<<YearsLeftInProgram<<endl;
  }

  void ParentClassMagicFunction(){
    if (YearsLeftInProgram > 10){
      cout<<"Abandon hope all ye who enter here"<<endl;
      cout<<"You have "<<YearsLeftInProgram<<" years of servitude left"<<endl;
    }
  }
};



//To make a class 'inherit' from another you say 
//class ChildClass  : public ParentClass{
//
//
// };
class PhysicsGradStudent : public GradStudent{
public:
  int BadAssLevel;//A new member variable that only PhysicsGradStudents have
  
  void Init(){
    GradStudent::Init();
    YearsLeftInProgram=30;
    BadAssLevel=100;
  }

  void Print(){
    GradStudent::Print();
    cout<<"BadAssLevel===="<<BadAssLevel<<endl;
  }


  void DoPhysicsResearch(){
    cout<<"Code\n Drink Coffee \n Repeat"<<endl;
  }

};


void GenericInterface(GradStudent s){
  s.ParentClassMagicFunction();
}

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
  Sam.Name="Mr. Sam Master of Science";
  Sam.Print();

  cout<<endl<<endl;



  //Now let's make a instance of the 'child' class
  //IE the class that inherits from Graduate Student
  PhysicsGradStudent JonEBarney;
  JonEBarney.Init();
  JonEBarney.Name="Jon E Barney";
  JonEBarney.Print();

  cout<<endl<<endl<<endl;

  /***********************Question***********************
   *What will happen when you try to send a PhysicsGradStudent
   *object to a method that takes a just a GradStudent as an 
   *argument?
   *
   * Uncoment below to find out!
   */

  //  GenericInterface(Sam);
  //  GenericInterface(JonEBarney);
  
  



  return 0;
}
