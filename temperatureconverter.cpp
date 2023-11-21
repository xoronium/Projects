#include <iostream>
using namespace std;

//Variables
int option;
int soption;
float Celsius;
float Fahrenheit;
float Kelvin;
float pre;
float preb;
float preb1;
float result;
//Main function
int main(){
cout << "Please select one below that you want to convert." << endl;
cout << "1 - Celsius" << endl;
cout << "2 - Fahrenheit" << endl;
cout << "3 - Kelvin" << endl;
cin >> option;

  //Subfunctions
   if (option==1){
    cout << "Please select what you want to convert Celsius into." << endl;
    cout << "1 - Fahrenheit" << endl;
    cout << "2 - Kelvin" << endl;
     cin >> soption;
        if (soption==1){
        cout << "Please insert the amount of Celsius you want to convert to Fahrenheit." << endl;
        cin >> Celsius;
        pre = Celsius * 9/5;
        result = pre + 32;
        cout << result;

     }
        if (soption==2){
        cout << "Please insert the amount of Celsius you want to convert to Kelvin." << endl;
        cin >> Celsius;
        result = Celsius + 273.15;
        cout << result;
     }
       if (soption>2){
        cout << "Please choose a number ranging from 1 to 2." << endl;
       }
   }
    if (option==2){
        cout << "Please select what you want to convert." << endl;
        cout << "1 - Celsius" << endl;
        cout << "2 - Kelvin" << endl;
        cin >> soption;
         if (soption==1){
            cout << "Please insert the amount of Fahrenheit you want to convert to Celsius." << endl;
            cin >> Fahrenheit;
            pre = Fahrenheit - 32;
            result = pre * 5/9;
            cout << result;
         }
         if (soption==2){
            cout << "Please insert the amount of Fahrenheit you want to convert to Kelvin." << endl;
            cin >> Fahrenheit;
            preb = Fahrenheit - 32;
            pre = preb * 5/9;
            result = pre + 273.15;
            cout << result;
         }
         if (soption>2){
            cout << "Please choose a number ranging from 1 to 2." << endl;
         }

    }

    if (option==3){
        cout << "Please select what you want to convert." << endl;
        cout << "1 - Celsius" << endl;
        cout << "2 - Fahrenheit" << endl;
        cin >>  soption;
         if (soption==1){
            cout << "Please insert the amount of Kelvin you want to convert to Celsius." << endl;
            cin >> Kelvin;
            result = Kelvin - 273.15;
            cout << result;
         }
         if (soption==2){
            cout << "Please insert the amount of Kelvin you want to convert to Fahrenheit." << endl;
            cin >> Kelvin;
            preb = Kelvin - 273.15;
            preb1 = preb * 9/5;
            result = preb1 + 32;
            cout << result;


         }
         if (soption>2){
            cout << "Please select a number ranging from 1 to 2." << endl;
         }
        
    }
 if (option>3){
    cout << "Please select a number ranging from 1 to 3." << endl;
 }

   return 0; 
}