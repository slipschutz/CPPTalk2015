



#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class GradStudent{
public:
  int YearsLeftInProgram;
  string Name;
  
  int YearsInProgram;//<<Added this from previous example

  void Init(){
    YearsLeftInProgram=9999999;
    Name="Mr. Doesnt-Have-PhD-Yet";
  }
  
  void Print(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Years In Program: "<<YearsInProgram<<endl;
    cout<<"Years Left: "<<YearsLeftInProgram<<endl;
  }

};



int main(){

  vector <GradStudent> temp;

  map<string,vector<GradStudent> > Data;
  
  for (int i=0;i<100;i++){
    GradStudent Sam;
    Sam.Name="Sam";
    Sam.YearsLeftInProgram=10000;
    Sam.YearsInProgram=i;
    temp.push_back(Sam);
  }
  
  Data["Sam"]=temp;
  
  
  temp.clear();//Clear out the temp vector
  for (int i=0;i<100;i++){
    GradStudent JonEBarney;
    JonEBarney.Name="JonEBarney";
    JonEBarney.YearsLeftInProgram=100-i;
    JonEBarney.YearsInProgram=i;
    temp.push_back(JonEBarney);
  }
  
  Data["JonEBarney"]=temp;


  //Above we have built a compicated data structure
  

  /*************Question 1********************************
   *How do we access the data we have packed
   *into this thing?
   *For instance how do I get the number of years left for Sam and Jon
   *when they are both 30 years into their programs?
   */
  

  

  return 0;
}
