#include <iostream>
using namespace std;
//Avoid using namespace std and call is at the required function.
//float was used instead of double. Please use double to follow best coding practices. 
//Data variables (Values recorded in 3/12/2022)
int currency;
int conv_currency;
float dol_mvr = 15.28;
float dol_euro = 0.95;
float mvr_euro = 0.062;
float mvr_dol = 0.065;
float euro_dol = 1.05;
float euro_mvr = 16.10;
float amount;
float answer;
//Main function 
int main() {
    cout << "Currency converter.\n" << "This is still under development\n";
    cout << "More currencies will be added in the future!" << endl << "Please select the currency you want to convert.\n";
    cout << "1 - Dollar\n" << "2 - Maldivian Rufiyaa\n" << "3 - Euro\n";
    cin >> currency;
   //Conversion function
   if (currency==1) {
    cout << "Please choose the currency you want to convert Dollars into.\n";
    cout << "1 - Maldivian Rufiyaa\n" << "2 - Euro\n";
    cin >> conv_currency;

       if (conv_currency==1) {
        cout << "Please enter the amount of Dollars you want to convert into Maldivian Rufiyaa.\n";
        cin >> amount;
        answer = amount  * dol_mvr;
        cout <<  "The amount converted to is " << answer;
       }
    if (conv_currency==2) {
        cout << "Please enter the amount of Dollars you want to convert into Euros.\n";
        cin >> amount;
        answer = amount * dol_euro;
        cout << "The amount converted to is " << answer;
    }

   }
     ///WARNING - INCORRECT BLOCK OF CODE
   //if (currency==2) {
    //cout << "Please choose the currency you want to convert Maldivian Rufiyaa into.\n";
    //cout << "1 - Dollar\n" << "2 - Euro\n";
    //cin >> conv_currency;
    
    //if(conv_currency==1) {
       // cout << "Please enter the amount of Maldivian Rufiyaa you want to convert into Dollars.\n";
        //cin >> amount;
        //double answer = amount / mvr_dol;
        //cout << "The amount converted is " << amount;
    }
   //}

//}