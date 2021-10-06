/*
   write a c function to check if the input is an even number or an odd number
   , if even number return 0 if odd number return 1.
*/

#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int Check_Even_Or_Odd(int number);

int main()
{
	Check_Even_Or_Odd(7);
}

int Check_Even_Or_Odd(int number)
{
	if((number%2==0))
	{
		  return 0;
	}
	else
	{
		  return 1;
	}
}