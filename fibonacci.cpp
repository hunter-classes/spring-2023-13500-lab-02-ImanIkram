/*
Author: Iman Ikram
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab2d

The program creates uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).

*/

#include <iostream>

int main(){

  int fib[60];
  
  fib[0] = 0;
  fib[1] = 1;
  
  for (int i = 2; i < 60; i++)
  {
   fib[i] = fib[i-1] + fib[i-2];
    std::cout << fib[i] << std::endl;
  }
  
 return 0;  
}