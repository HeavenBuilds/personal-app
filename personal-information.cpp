// Begineer Personal information App
// Ask the user for their First Name
// Ask the user for their age
// Ask user for their height
// Ask user for their Faviorite Number
// Display the information


#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;
    double height;
    int number;


    cout << "Welcome to My Personal Information App" << endl;

    cout << "What is your Name?" << endl;

    cin >> name;

    cout << "What is your Age?" << endl;

    cin >> age;

    cout << "How tall are you?" << endl;

    cin >> height;

    cout << "What is your Favorite Number" << endl;

    cin >> number;

    cout << "Hi, your name is " << name << "." << endl;
 
    cout << "Your age is " << age << "." << endl;

    cout << "You are " << height << " feet tall" << endl;

    cout << "and your favorite number is " << number << "." << endl;

    return 0;
}