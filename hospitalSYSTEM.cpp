

#include <iostream>

using namespace std;

int main()
{
   int UserIDin;
    int IDYahav=21394701;
    int IDMichael=12345;
    int IDShalom=54321;
    int IDEden=11111;
     int DOCid=7525;
     
    
    
    //yahav's data
    string patientNameYahav="Yahav Gueta";
    string patientDataYahav="19 years old , female, diagnosed with hydrocephalus.\nVitals are stable.\ncurrently at neurology dept, room 105.\n";
    
    
    //Michael's data
    string patientnameMicahel="Micahel Mic";
    string patientDataMichael="45 years old, male, diagnosed with high blood pressure.\n Vitals are stable.\n currently in cardiology dept, room 102\n";
    
    //Shalom's data
    string patientnameShalom="Shalom Shal";
    string patientDataShalom="58 years old , male, diagnosed with diabetes type 2.\n vitals unstable, blood sugar too high";
    
    //Eden's data
    string patientnameEden="Eden Ed";
    string patientDataEden="16 years old, female.\n Vitals unstable.  currently in  the ICU. no visiting allowed.\n ";
    
    cout<<"Please enter your ID  ";
      cin>>UserIDin;

    
    
    
          if(UserIDin==DOCid){
              cout<<"Hello DOC/staff,\n";
              cout<<"These are the patients you will meet today: \n\n "<<patientNameYahav<<"\n"<<patientDataYahav<<"\n\n";
              cout<< patientnameMicahel<<"\n"<<patientDataMichael<<"\n\n";
              cout<< patientnameShalom<<"\n"<<patientDataShalom<<"\n\n";
              cout<< patientnameEden<<"\n"<<patientDataEden<<"\n\n";
          }
     
    
    
    
   
    if (UserIDin==IDYahav){
        cout<<"Hello "<<patientNameYahav<<"\n here's the data the hospital has about this patient:\n"<<patientDataYahav;
        
    }
    if (UserIDin==IDMichael){
          cout<<"Hello "<<patientnameMicahel<<"\n here's the data the hospital has about this patient:\n"<<patientDataMichael;
        
    }
     
     if(UserIDin==IDShalom) {
         cout<<"Hello"<<patientnameShalom<<"\n here's the data the hospital has about this patient:\n"<<patientDataShalom;
     }
     
      if(UserIDin==IDEden) {
         cout<<"Hello"<<patientnameEden<<"\n here's the data the hospital has about this patient:\n"<<patientDataEden;
     }
    

    
    
    
    
}
     
     
     
    
    





