//Currently in testing, some bugs might be present.

#include <iostream>

//Variables
//WARNING - These are pointers. If they are not conditioned correct, it can lead to segmentation fault.
//Pointers and variables are not the same thing even though they have the same function. Please use accordingly.
//PLEASE MAKE SURE TO DEALLOCATE MEMORY BEFORE RUNNING!
double byte;
double kilobyte;
double megabyte;
double gigabyte;
double terabyte;
double pre;
[[maybe_used]] double pre1;
[[maybe_used]] double pre2;
double result;

//Non pointers/References
int option;
int soption;
//Conversion rates
double e = 2.71828;

//Main function
int main(){
std::cout << "Please select what you want to convert to.\n";
std::cout << "1 - byte\n" << "2 - kilobye\n" << "3 - megabyte\n" << "4 - gigabyte\n" << "5 - terabyte" << std::endl;
std::cin >> option;
   
   if (option==1){
    std::cout << "Please select what you want to convert to bytes" << std::endl;
    std::cout  << "1 - kilobyte\n" << "2 - megabyte\n" << "3 - gigabyte\n" << "4 - terabyte" << std::endl;
    std::cin >> soption;
      if (soption==1){
        std::cout << "Please enter the amount of kilobytes you want to convert to bytes.\n";
        std::cin >> kilobyte;
        result = kilobyte * 1000;
        std::cout << result << " bytes";
        //return 0;
      }

      if (soption==2){
        std::cout << "Please enter the amount of megabytes you want to convert to bytes.\n";
        std::cin >> megabyte;
        pre = 1 * e;
        pre1 = pre + 6;
        result = pre1 * megabyte;
        std::cout << result << " bytes";
        return 0;
      }

      if (soption==3){
        std::cout << "Please enter the amount of gigabytes you want to convert to bytes.\n";
        std::cin >> gigabyte;
        pre = 1 * e;
        pre1 = pre + 9;
        result = pre1 * gigabyte;
        std::cout << result << " bytes.\n";
        return 0;
      }

      if (soption==4){
        std::cout << "Please enter the amount of terabytes you want to convert to bytes.\n";
        std::cin >> terabyte;
        pre = 1 * e;
        pre1 = pre + 12;
        result = pre1 * terabyte;
        std:: cout << result << " bytes.\n";
        return 0;
      }
   }

   if (option==2){
    std::cout << "Please select what you want to convert to kilobytes\n";
    std::cout << "1 - byte\n" << "2 - megabyte\n" << "3 - gigabyte\n" << "4 - terabyte\n";
    std::cin >> soption;
     if (soption==1){
        std::cout << "Please enter the amount of bytes you want to convert to kilobytes.\n";
        std::cin >> byte;
        result = byte / 1000;
        std::cout << result << " kilobytes.\n";
        return 0;
     }
    
     if (soption==2){
        std::cout << "Please enter the amount of megabytes you want to convert to kilobytes.\n";
        std::cin >> megabyte;
        result = megabyte * 1000;
        std::cout << result << " kilobytes.\n";
        return 0;
     }

     if (soption==3){
        std::cout << "Please enter the amount of gigabytes you want to convert to kilobytes.\n";
        std::cin >> gigabyte;
        pre = 1 * e;
        pre1 = pre + 6;
        result = pre1 * gigabyte;
        std::cout << result << " kilobytes.\n";
        return 0;
     }

     if (soption==4){
        std::cout << "Please enter the amount of terabytes you want to convert to kilobytes.\n";
        std::cin >> terabyte;
        pre = 1 * e;
        pre1 = pre + 9;
        result = pre1 * terabyte;
        std::cout << result << " kilobyes.\n";
        return 0;
     }
     return 0;
   }

   if (option==3){
    std::cout << "Please select what you want to convert to megabytes.\n";
    std::cout << "1 - bytes\n" << "2 - kilobytes\n" << "3 - gigbytes\n" << "4 - terabytes\n";
    std::cin >> soption;
     if (soption==1){
        std::cout << "Please enter the amount of bytes you want to convert to megabytes.\n";
        std::cin >> byte;
        pre = 1 * e;
        pre1 = pre + 6;
        result = byte / pre1;
        std::cout << result << " megabytes.\n";
        return 0;
     }

     if (soption==2){
        std::cout << "Please enter the amount of kilobytes you want to convert to megabytes.\n";
        std::cin >> kilobyte;
        result = kilobyte / 1000;
        std::cout << result << " megabytes.\n";
        return 0;
     }

     if (soption==3){
        std::cout << "Please enter the amount of gigabytes you want to convert to megabytes.\n";
        std::cin >> gigabyte;
        result = gigabyte * 1000;
        std::cout << result << " megabytes.\n";
        return 0;
     }
     if (soption==4){
        std::cout << "Please enter the amount of terabytes you want to convert to megabytes.\n";
        std::cin >> terabyte;
        pre = 1 * e;
        pre1 = pre + 6;
        result = pre1 * terabyte;
        std::cout << result << " megabytes.\n";
        return 0;
     }
     return 0;
   }

   if (option==4){
    std::cout << "Please select what you want to convert to gigabytes.\n";
    std::cout << "1 - bytes\n" << "2 - kilobytes\n" << "3 - megabytes\n" << "4 - terabytes\n";
    std::cin >> soption; 
    if (soption==1){
        std::cout << "Please enter the amount of bytes you want to convert to gigabytes.\n";
        std::cin >> byte;
        pre = 1 * e;
        pre1 = pre + 9;
        result = byte / pre1;
        std::cout << result << " gigabytes.\n";
        return 0;
    }

    if (soption==2){
        std::cout << "Please enter the amount of kilobytes you want to convert to gigabytes.\n";
        std::cin >> kilobyte;
        pre = 1 * e;
        pre1 = pre + 6;
        result = kilobyte / pre1;
        std::cout << result << " gigabytes.\n";
        return 0;
    }

    if (soption==3){
        std::cout << "Please enter the amount of megabytes you want to convert to gigabytes.\n";
        std::cin >> megabyte;
        result = megabyte / 1000;
        std::cout << result << " gigabytes.\n";
        return 0;
    }

    if (soption==4){
        std::cout << "Please enter the amount of terabytes you want to convvert to gigabytes.\n";
        std::cin >> terabyte;
        result = terabyte / 1000;
        std::cout << result << " gigabytes.\n";
        return 0;
    }
    return 0;
   }

  if (option==5){
    std::cout << "Please select what you want to convert to terabytes.\n";
    std::cout << "1 - bytes\n" << "2 - kilobytes\n" << "3 - megabytes\n" << "4 - gigabytes\n";
    std::cin >> soption;
     if (soption==1){
        std::cout << "Please enter the amount of bytes you want to convert to terabytes.\n";
        std::cin >> byte;
        pre = 1 * e;
        pre1 = pre + 12;
        result = byte / 1000;
        std::cout << result << " terabytes.\n";
        return 0;
     }

     if (soption==2){
        std::cout << "Please enter the amount of kilobytes you want to convert to terabytes.\n";
        std::cin >> kilobyte;
        pre = 1 * e;
        pre1 = pre + 9;
        result = kilobyte / pre1;
        std::cout << result << " terabytes.\n";
        return 0;
     }

     if (soption==3){
        std::cout << "Please enter the amount of megabytes you want to convert to terabytes.\n";
        std::cin >> megabyte;
        pre = 1 * e;
        pre1 = pre + 6;
        result = megabyte / pre1;
        std::cout << result << " terabytes.\n";
        return 0;
     }

     if (soption==4){
        std::cout << "Please enter the amount of gigabytes you want to convert to terabytes.\n";
        std::cin >> gigabyte;
        result = gigabyte / 1000;
        std::cout << result << " terabytes.\n";
        return 0;
     }
     return 0;
  }

  //Limiting functions
  if (option>5){
    std::cout << "Please select an option ranging from 1 to 5.\n";
    std::cin >> option;
  }

  if (soption>4){
    std::cout << "Please select an option ranging from 1 to 4.\n";
    std::cin >> soption;
  }

}
