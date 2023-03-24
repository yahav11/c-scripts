
#include <iostream>

using namespace std;

int main()
{
    int ID;
     const int salaryforday=37;
    int YahavID=21394701;
     
     int TiranitID=2936296;
     const int salaryfordayT=200;
     
     int Person3ID=54321;
     const int salaryfordayPerson3=50;
     
    cout<<"Hello! please enter your ID:  ";
    cin>>ID;
    int december=31;
    int november=30;
    int october=31;

    int Daysnotworkeddec;
    int Daysnotworkednov;
    int Daysnotworkedoct;
    //verfication of id
    if (ID==YahavID){
        cout<<"Hello Yahav, here's the data we about your salary in the past months\n";
      cout<<"please enter the amount of days you didn't worked in december ";
      cin>>Daysnotworkeddec;
      
      cout<<"please enter the amount of days you didn't worked in november ";
      cin>>Daysnotworkednov;
      
      cout<<"please enter the amount of days you didn't worked in october ";
      cin>>Daysnotworkedoct;
      
      cout<<" your salary for december is\t"<< (december-Daysnotworkeddec)*10<<" ILS\n"; //december
      
       cout<<" your salary for november is\t"<< (november-Daysnotworkednov)*10<<" ILS\n"; //november
       
        cout<<" your salary for october is\t"<< (october-Daysnotworkedoct)*10<<" ILS\n";  //october
    } 
    
     if (ID==TiranitID){
        cout<<"Hello Tiranit, here's the data we about your salary in the past months\n";
      cout<<"please enter the amount of days you didn't worked in december ";
      cin>>Daysnotworkeddec;
      
      cout<<"please enter the amount of days you didn't worked in november ";
      cin>>Daysnotworkednov;
      
      cout<<"please enter the amount of days you didn't worked in october ";
      cin>>Daysnotworkedoct;
      
      cout<<" your salary for december is\t"<< (december-Daysnotworkeddec)*200<<" ILS\n"; //december
      
       cout<<" your salary for november is\t"<< (november-Daysnotworkednov)*200<<" ILS\n"; //november
       
        cout<<" your salary for october is\t"<< (october-Daysnotworkedoct)*200<<" ILS\n";  //october
    } 
    
        if (ID==Person3ID){
        cout<<"Hello Person3, here's the data we about your salary in the past months\n";
      cout<<"please enter the amount of days you didn't worked in december ";
      cin>>Daysnotworkeddec;
      
      cout<<"please enter the amount of days you didn't worked in november ";
      cin>>Daysnotworkednov;
      
      cout<<"please enter the amount of days you didn't worked in october ";
      cin>>Daysnotworkedoct;
      
      cout<<" your salary for december is\t"<< (december-Daysnotworkeddec)*50<<" ILS\n"; //december
      
       cout<<" your salary for november is\t"<< (november-Daysnotworkednov)*50<<" ILS\n"; //november
       
        cout<<" your salary for october is\t"<< (october-Daysnotworkedoct)*50<<" ILS\n";  //october
    } 

     
    return 0;
}


