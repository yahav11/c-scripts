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
    int IDarray[2]={12345,54321};
    int id;
    int balance,depositAmount,transferenceAmount;
    string answer;
    string userinput_addTakeBalance;
    int trnswhom;
    
    
 
    cout<<"please enter your id\n";
    cin>>id;
      if(id==12345){
          cout<<"hello Yahav gueta,\n";
          cout<<"would you like to make a deposit/a transference \n or to check your account balance?\n(enter balance/transfer/deposit)\n\n";
          cin>>userinput_addTakeBalance;
          if(userinput_addTakeBalance=="deposit"){
           
             cout<<"please enter the amount you would like to deposit\n";
              cin>>depositAmount;
              balance=+depositAmount;
              cout<<"deposit made succsesfully the balance is \t"<<balance<<"\n"; 
          }
          if(userinput_addTakeBalance=="transfer"){
               cout<<"please enter the acoount number you would like to transfer to\n";
              cin>>trnswhom;
              cout<<"please enter the amount you would like to transfer\n";
              cin>>transferenceAmount;
              balance-=transferenceAmount;
              cout<<" transference succsesfully made, the balance is \t"<<balance<<"\n";
              
          }
          if(userinput_addTakeBalance=="balance"){
              cout<<"currently your balance is \t "<<balance<<"\n\n\n";
              cout<<"would you like to make a transfer or a deposit?\n";
              cin>>answer;
              if(answer=="yes"){
           cout<<"enter transfer/deposit\n\n";
          cin>>userinput_addTakeBalance;
          if(userinput_addTakeBalance=="deposit"){
           
             cout<<"please enter the amount you would like to deposit\n";
              cin>>depositAmount;
              balance=+depositAmount;
              cout<<"deposit made succsesfully the balance is \t"<<balance<<"\n"; 
          }
          if(userinput_addTakeBalance=="transfer"){
               cout<<"please enter the acoount number you would like to transfer to\n";
              cin>>trnswhom;
              cout<<"please enter the amount you would like to transfer\n";
              cin>>transferenceAmount;
              balance-=transferenceAmount;
              cout<<" transference succsesfully made, the balance is \t"<<balance<<"\n";
              
          }
          }
              }
              
          }
          
          
          //משתמש שני
          if(id==54321){
          cout<<"hello Yaha guet,\n";
          cout<<"would you like to make a deposit/a transference \n or to check your account balance?\n(enter balance/transfer/deposit)\n\n";
          cin>>userinput_addTakeBalance;
          if(userinput_addTakeBalance=="deposit"){
           
             cout<<"please enter the amount you would like to deposit\n";
              cin>>depositAmount;
              balance=+depositAmount;
              cout<<"deposit made succsesfully the balance is \t"<<balance<<"\n"; 
          }
          if(userinput_addTakeBalance=="transfer"){
               cout<<"please enter the acoount number you would like to transfer to\n";
              cin>>trnswhom;
              cout<<"please enter the amount you would like to transfer\n";
              cin>>transferenceAmount;
              balance-=transferenceAmount;
              cout<<" transference succsesfully made, the balance is \t"<<balance<<"\n";
              
          }
          if(userinput_addTakeBalance=="balance"){
              cout<<"currently your balance is \t "<<balance<<"\n\n\n";
              cout<<"would you like to make a transfer or a deposit?\n";
              cin>>answer;
              if(answer=="yes"){
           cout<<"enter transfer/deposit\n\n";
          cin>>userinput_addTakeBalance;
          if(userinput_addTakeBalance=="deposit"){
           
             cout<<"please enter the amount you would like to deposit\n";
              cin>>depositAmount;
              balance=+depositAmount;
              cout<<"deposit made succsesfully the balance is \t"<<balance<<"\n"; 
          }
          if(userinput_addTakeBalance=="transfer"){
               cout<<"please enter the acoount number you would like to transfer to\n";
              cin>>trnswhom;
              cout<<"please enter the amount you would like to transfer\n";
              cin>>transferenceAmount;
              balance-=transferenceAmount;
              cout<<" transference succsesfully made, the balance is \t"<<balance<<"\n";
              
          }
          }
              }
              
          }
             
      }
    

