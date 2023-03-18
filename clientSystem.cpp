/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  string next;
  int i = 0;
   int currentlywating=30;
 while (currentlywating!=0){ cout<<"to call the next client?\n";
  cin>>next;
 
     if(next=="yes"){
      i++;
  currentlywating--;
  cout<<"client number\t"<<i<<"\tpls come in\n";
     }
}
}

