/*
Author: Iman Ikram
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab2c

The program creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
*/

#include <iostream>

int main(){

int myData[10];  
for (int i = 0; i < 10; i++) 
{
 myData[i] = 1; 
}
  
int indx;
int value;
  
do {
    for (int i = 0; i < 10; i++) 
    {
    std::cout << myData[i] << " " ; 
    }
    std::cout << " " << std::endl;
    std::cout << "Input Index: ";
    std::cin >> indx;
    std::cout << "Input value: ";
    std::cin >> value;
  
    if ((indx >= 0) && (indx < 10))
    {
    myData[indx] = value;
    } 
    else 
    {
      std::cout << "Index is out of range." << std::endl;
    }
  } while (indx >= 0 && indx < 10); 
   
return 0; 
}
  