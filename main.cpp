#include <iostream>
#include <vector>
using namespace std;

// function prototypes
char chooseMenu();
vector <string> addItem(vector <string>); 

// main program
int main() {
  vector <string> list;
  char input;
  
  

  cout << "Welcome to Grocery List Manager\n";
  cout << "===============================\n";
  do{

    
    input = chooseMenu();
    if( input == 'a' || input == 'A' ){
      
      list = addItem(list);
    }
  }while( input != 'q' && input != 'Q' );
  
  return 0;
}

// function definitions

// Menu input/output
char chooseMenu(){
     char input;
      cout << "Menu\n----\n";
      cout << "(A)dd item\n";
      cout << "(Q)uit\n";
      cin >> input;
      cin.ignore();
      return input;
}


  // item input/output
vector <string> addItem(vector <string> list){
  string item;
  cout << "Enter item:\n";
  getline(cin,item);


  return list;
}