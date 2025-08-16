//-------------------------------------------------------------------------------------------//
//        Project Title: TOOLCHAIN_OF_C_C++_PROGRAMMING
//        Description  : The .c or .cpp program is converted from human readable code to 
//                       binary code for the execution of the program as computer only understands 
//                       the binary language that is in the form of 0 and 1 only.
//        Author       : Amol R. Mane
//        Date         : 16 August, 2025
//-------------------------------------------------------------------------------------------//

#include<stdio.h>

// User defined header file
#define DOZEN 12

int main()
{
  int No = DOZEN;
  printf("Jay Ganesh...\n");
  printf("Value of No is %d\n",No);
  
  return 0;
}

// compilation
// gcc Preprocessor.c -save-temps -o Myexe
// Myexe.exe for Windoes 
// ./Myexe for Linux
