#include <iostream>
using namespace std;

int main()
{
    string testString;
    cout << "To do list\n\n\n";
    cout << "*************\n";
    cout << "enter a task!\n";
    getline(cin, testString);
    cout << "*************\n";
    string useranswer;
    cout << "would you like to add another task?\n";
    getline(cin, useranswer);
    if(useranswer == "Yes" || useranswer == "yes") {
        string useranothertask;
        cout << "enter another task!\n";
        getline(cin, useranothertask);
        cout << testString << "\n" << useranothertask << "\n";
    } 
    else {
        cout << "Thank you!";
    }

    // ask user to add another task
    string useranswer2;
    cout << "Would you like to add another task?\n";
    getline(cin, useranswer2);

    if(useranswer2 == "Yes" || useranswer2 == "yes") {
        string useranothertask;
        cout << "Enter another task!\n";
        getline(cin, useranothertask);
        cout << testString << "\n" << useranothertask << "\n";
    } 
    else {
        cout << "Thank you!";
    }

    return 0;
}

