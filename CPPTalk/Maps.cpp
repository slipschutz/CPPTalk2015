
#include <iostream>
#include <map>
#include <string>
using namespace std;



void PrintOld(map <string,int> thing){
  cout<<"OLD PRINTING"<<endl;
  //The old c++98 way of printing a map  
  for (map<string,int>::iterator ii=thing.begin();
       ii!=thing.end();ii++){
    cout<<ii->first<<" Maps to "<<ii->second<<endl;
  }


}



void Print(map <string,int> thing){
  //The c++11 way
  cout<<"New Printing"<<endl;
  for (auto i : thing){
    cout<<i.first<<" Maps to "<<i.second<<endl;
  }
  
}


int main(){
 
  //Make a 'Map'
  //Maps are a container that have pairs of elements 
  //That can be mapped to each other
  //Here we have strings->integers
  map<string,int> MyFirstMap={{"hi",3},{"bob",45}};


  PrintOld(MyFirstMap);
  cout<<endl<<endl;
  Print(MyFirstMap);

  //Some of the great things about MAPS
  //The elements are automatically sorted based on the first 
  //value (which is called the key)
  //
  //And you can look for things in one line in an efficent way

  cout<<endl<<endl;
  
  if ( MyFirstMap.count("hi") != 0){
    cout<<"MyFirstMap Does contain 'hi!!!!!!!!!!!!!!!'"<<endl;
  }

  /*******************Question********************************
   *Write a function to check whether the map contains a key
   *IE something like
   *
   *MyFunction (myMap,"SamIsTheBest");
   *
   *Which prints yes if "SamIsTheBest" is in the map and no
   *otherwise

   */

  

  cout<<endl<<endl;


  //another way of checking for something in a map

  auto aIterator = MyFirstMap.find("hi");
  if (aIterator == MyFirstMap.end()){/// the key was not in the map
    cout<<"The Key was not in the map"<<endl;
  }else{
    cout<<"The key was in the map. It maps to "<<aIterator->second<<endl;
  }


  return 0;
}

