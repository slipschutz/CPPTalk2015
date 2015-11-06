



#include <iostream>
#include <string>
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

  cout<<"Graduate student "<<Sam.Name<<" has "<<Sam.YearsLeftInProgram<<
    " years left in his program"<<endl;

  return 0;
}
