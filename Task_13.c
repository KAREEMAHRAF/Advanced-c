/*
   Write a c function that clears a specified bit in a giver number (bit number starts from 0),
   if not possible return the same number as it is .
*/
#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"

int Clear_Bit(int Number , int Bit_Number);


int main()
{
	printf("%d" , Clear_Bit(255 , 7 )) ;
}

int Clear_Bit(int Number , int Bit_Number)
{
	
	if(Bit_Number > sizeof(Number)*8)
	{
		return Number ;
	}
	else
	{
		return (Number &~ (1<<Bit_Number)) ;
		
    }
	
}