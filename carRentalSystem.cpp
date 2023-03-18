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
    cout<<"welcome to Yahav's car rental system\n\n" ;
    //בחירת המכונית תתבצע על ידי אינפוט מספר הרכב
    cout<<"here's our car menu: \n\n Mazda 3, car number- 1000 \n\n Mazda 5, car number- 1001 \n\n Volvo v50, car number-1 \n\n Ford F-150, car number-1002 \n\nChevrolet Silverado 1500,car number-1003 \n\nToyota Highlander,car number-1004 \n\n";
    int ChosenCar;
    cout<<"please enter the number of the car you want to rent out:\n";
    cin>>ChosenCar;
      int car1=1000;  // available car
      int  car5=1001;// available car
      int  car6=1;   // available car
      int car2=1002;    //unavailable car
      int car3=1003;    //unavailable car
      int car4=1004;    //unavailable car
     
      //סטרינגים לשם מודל הרכב
     string CAR1=" Mazda 3, car number ";//1000
     string CAR2=" Ford F-150 "; //1002
     string CAR3=" Chevrolet Silverado 1500 "; //1003
     string CAR4=" Toyota Highlander"; //1004
     string CAR5=" Mazda 5 ";  //1001
      string CAR6=" Volvo v50 "; //1
     
             
             
             //הגדרת OUTPUT עם שם הרכב
              if(ChosenCar==1000) {
                cout<<"the chosen car- \t"<< CAR1<<" is available.\n" <<"the price will be 30 dollars per hour.";}
    
              if(ChosenCar==1001) {
                cout<<"the chosen car-\t"<< CAR5<<" is available.\n "<<"the price will be 30 dollars per hour.";}
         
              if(ChosenCar==1) {
                cout<<"the chosen car-\t"<< CAR6<<" is available.\n"<<" the price will be 30 dollars per hour.";}
         
         
              if ( ChosenCar==1002) {
                cout<<"The chosen car- "<< CAR2 <<"is unavailable please choose another one\n" ; } 
            
              if ( ChosenCar==1003) {
                cout<<"The chosen car- "<< CAR3<< "is unavailable please choose another one\n";  } 
            
           
              if ( ChosenCar==1004) {
                cout<<"The chosen car- "<< CAR4 <<" is unavailable please choose another one\n" ; } 
                  
                 
                  //במצב שהמכונית לא נמצאת,output-not found
                if (ChosenCar!=1000 && ChosenCar!=1001 && ChosenCar!=1 && ChosenCar!=1002 && ChosenCar!=1003 && ChosenCar!=1004){
                  cout<< "car is not found";}
                  
    return 0;
}

