
#include <iostream>

using namespace std;

int main()
{
    int height, base;
int sum;
cout << "Type the wall height in meters: ";
cin >> height;
cout << "Type the length of the wall's base in meters: ";
cin >> base;
int sumWall=(height*base); //  במטר ->שטח הקיר

//חישוב הלבנה
int Basebrick,Heightbrick;
cout<<"type brick base in cm";
cin>>Basebrick;

cout<<"type brick's height in cm";
cin>>Heightbrick;

int brick=(Heightbrick*Basebrick);
 //חישוב כמה לבנים בקיר
int WallInCM=sumWall*100;//בס"מ
int TotBricks=WallInCM/brick;
cout<<TotBricks<<"\t is the amount of bricks needed for that wall";

}

