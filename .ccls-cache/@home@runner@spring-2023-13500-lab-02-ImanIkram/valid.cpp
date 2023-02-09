/*
Author: Iman Ikram
Course: CSCI-135
Instructor: Gennedy Ma
Assignment: Lab2a

The program asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.
*/

#include <iostream>
#include <cmath>
int square(int integer){
  int squared;
  squared = integer*integer;
  return squared;
}


int main (){

  int integer;

  std::cout << "Enter an integer: ";
  std::cin >> integer; 
  
  while (std::cin >> integer)
  {
    if (integer < 0 && integer > 100)
    {
      std::cout << "Please re-enter: " << std::endl;
      std::cin >> integer;
    }
    else  
    {
     std::cout << "Number squared is " << pow(integer,2) <<std::endl; 
    }
    
  }

  return 0;
}
