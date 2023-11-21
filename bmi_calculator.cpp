#include <iostream>
#include <math.h>
using namespace std;

int main(){
cout << "Body Mass Index Calculator" << endl;
cout << "Please enter your height in metres." << endl;
double height;
cin >> height;
cout << "Please enter your bodyweight in kilograms." << endl;
double weight;
cin >> weight;
double power2 = height * height;
double result = weight / power2;
cout << "Your BMI is ";
cout << result;
return 0;
}