#include <iostream>
using namespace std;
//Note, please keep in mind that it is best to use std:: in needed fields and to avoid using namespace std; as a way to follow best code practices.
//Also keep in mind here I created floats to accompany both floats and integers instead of using double. Please consider using double to follow better coding practices.
//variables
int option;
int first_val;
int second_val;
int ans;
//float variables
int f_option;
float f_first_val;
float f_second_val;
float f_ans;

//main function
int main(){
    cout << "Welcome to the Calculator." << endl;
    cout << "This is beta so not all features may function. (v0.1)" << endl;
    cout << "Please select a number to choose what you want to do.\n";
    cout << "1 - Addition\n" << "2 - Subtraction\n" << "3 - Multiplication\n" << "4 - Division\n" << "5 - Working with floats\n";
       cin >> option;


//main function selection point
  //Addition function
  if (option==1) {
    cout << "Addition\n" << "Please insert the first number you want to add.\n";
       cin >> first_val;
    cout << "Please insert the second number you want to add.\n";
       cin >> second_val;
    ans = first_val + second_val;
    cout << "Your answer is " << ans << endl;
    return 0;
    }

  //Subtraction function
  if (option==2) {
    cout << "Subtraction\n" << "Please insert the first number you want to subtract.\n";
       cin >> first_val;
    cout << "Please insert the second number you want to subtract.\n";
       cin >> second_val;
    ans = first_val - second_val;
    cout << "Your answer is " << ans << endl;
    return 0;
  }

 //Multiplication function
  if (option==3) {
    cout << "Multiplication\n" << "Please insert the first number you want to multiply.\n";
       cin >> first_val;
    cout << "Please insert the second number you want to multiply.\n";
       cin >> second_val;
    ans = first_val * second_val;
    cout << "Your answer is " << ans << endl;
    return 0;
  }
 
 //Division function
 if (option==4) {
   cout << "Warning - Currently the division function doesn't support floats and can only handle simple divisions.\n";
   cout << "Division\n "<< "Please insert the first number you want to divide with.\n";
      cin >> first_val;
   cout << "Please insert the second number you want to divide with.\n";
      cin >> second_val;
   ans = first_val / second_val;
   cout << "Your answer is " << ans << endl;
   return 0;
 }

 //Working with floats and their subfunctions
 if (option==5) {
   cout << "Please choose a sub-function.\n" << "1 - Addition\n" << "2 - Subtraction\n" << "3 - Multplication\n" << "4 - Division\n";
   cin >> f_option;

    //Subfunction for addition of floats
    if (f_option==1) {
      cout << "Addition of floats.\n";
      cout << "Please insert the first float number you want to add.\n";
         cin >> f_first_val;
      cout << "Please insert the second float number you want to add.\n";
         cin >> f_second_val;
      f_ans = f_first_val + f_second_val;
      cout << "Your answer is " << f_ans << endl;
      return 0;
   
    }
    //Subfunction for subtraction of floats

    if (f_option==2) {
      cout << "Subtraction of floats.\n" << "Please insert the first float number you want to subtract.\n";
        cin >> f_first_val;
      cout << "Please insert the second float number you want to subtract.\n";
        cin >> f_second_val;
      f_ans = f_first_val - f_second_val;
      cout << "Your answer is " << f_ans << endl;
      return 0;
    }
    //Subfunction for multiplication of floats

    if (f_option==3) {
      cout << "Multiplication of floats.\n" << "Please insert the first float number you want to multiply.\n";
        cin >> f_first_val;
      cout << "Please insert the second float number you want to multiply.\n";
        cin >> f_second_val;
      f_ans = f_first_val * f_second_val;
      cout << "Your answer is " << f_ans << endl;
      return 0;
    }

    //Subfunction for division of floats

    if (f_option==4) {
      cout << "Division of floats.\n" << "Warning - May not work properly. It's currently held in a testing state for improvements however this function will last in this state. ";
      cout << "Some functions cannot be calculated due to limits of the cpu.\n";
      cout << "This will happen to all computers as chips are not good at calculations.\n";
      cout << "Enter the first float number you want to divide with.\n";
        cin >> f_first_val;
      cout << "Enter the second float number you want to divde with.\n";
        cin >> f_second_val;
      f_ans = f_first_val / f_second_val;
      cout << "Your answer is " << f_ans << endl;
      return 0;
   
    }
    

 }

  //Incorrect option variable output for main functions
  //Fixed as of 6/01/2023 d/mm/yyy
  //Unknown how this worked but it works.
  if (option!=1, 2, 3, 4, 5) {
   cout << "Incorrect option. Please select a number that is visible on the menu.\n";
   return 0;
  }
 return 0;
}
