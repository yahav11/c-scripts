#include <iostream>

using namespace std;

void myfunc(){
    
     int barcode;
    std::cout << "Please enter the book's barcode" << std::endl;
      std::cin >> barcode;
      
     switch(barcode){ //books list
          case 1001:
          std::cout << "the book is located in aisle 4" << std::endl;
          break;
          
          
           case 1002:
          std::cout << "the book is located in aisle 3" << std::endl;
          break;
          
          
          case 1003:
          std::cout << "the book is located in aisle 2" << std::endl;
          break;
          
          
          case 1004:
          std::cout << "the book is located in aisle 1" << std::endl;
          break;
          
          default:
          std::cout << "book was not found" << std::endl;
      
      } 
}
int main()
{
   int membersID[3]={213947013,21394701,2139470};//members id
   
   
    int userID;
    cout<<"welcome to yahav's library,\n\n";//intro
    cout<<"Please enter your ID\n"; 
    cin>>userID;
    if (userID==membersID[0] || userID==membersID[1]  || userID==membersID[2]) //member verefication
    {
       int bookstaken;
       cout<<"welcome back member!\n\n";
       cout<<"Reminder: you are allowed to have only 3 books in your possession in one month\n\n";
        cout<<"how many books are currently in your possession?\n"; //library 3 books rule
        cin>>bookstaken;
        if(bookstaken<=3){ 
     myfunc();
      }
    } else {
        cout<<"member ID was not found\n";// the user id doesn't exsist in the "database"
    }
     string userresonse;
      cout<<"want to try another book?\n";
      cin>>userresonse;
      if(userresonse=="yes") {
          myfunc();
      }
     
    return 0;
}




