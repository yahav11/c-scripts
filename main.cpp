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
    
    int aprilAP[30]={1,2,3,4,5,6,7,8,9,1011,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int aprilhours[7]={8,9,10,11,12,15,16};
   string usedinput;
    cout<<"would you like to book an appointment?\n";
    cin>>usedinput;
    
    if(usedinput=="yes" || usedinput=="Yes"){
        cout<<"great!, here's a list of the available dates:\n";
        cout<<"\n --------------------------------------------------------\n";
        for (int i = 0; i <=30; i++) {
  cout << aprilAP[i] << "\t";
}
cout<<"\n --------------------------------------------------------\n";
int aprildayAPP;
cout<<"please enter the day that is suitable for you:\n";
cin>>aprildayAPP;

int aprilhourAPP;
cout<<"this is the hours available at the selected date\n";
cout<<"\n --------------------------------------------------------\n";
for (int i = 0; i <=7; i++) {
  cout << aprilhours[i] << "\t";
}
cout<<"\n --------------------------------------------------------\n";
cout<<"please enter the desirable time:\n";
cin>>aprilhourAPP;
  /*----------------*/
  if (aprildayAPP==1 && aprilhourAPP==15){
      cout<<"this date is currently unavailable please choose another\n";
  }else {
      cout<<"-----------------------------------------------\n";
      cout<<"you booked an appointment for\t"<<aprildayAPP<<" of april at\t"<<aprilhourAPP<<"\n";
     
  }
}

    
      
}

