



#include <iostream>
using namespace std;

struct Talk{
  void GetTalk(){
    cout<<"This is the talk"<<endl;
  }
};


//This shows how the title of the talk is a real line of C++
int main(){

  Talk *a[5];
  a[1]=new Talk();
 
  
  (*(&a[0]+1))->GetTalk();

 return 0;
}
