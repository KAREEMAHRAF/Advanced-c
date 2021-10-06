/*
   write a c function to count the number of 1's in an unsigned 32-bit iteger.
*/

#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int count_ones(int number);

int main()
{
    printf( "%d\n" , count_ones(3) );
	//int x = 0x000000080 ;
	printf( "%d" , x );
}


int count_ones(int number)
{
	unsigned int mask = 0x80000000 ;
	unsigned int i , ones_count = 0 ;
	for(int i ; i<32 ; i++)
	{
		if((number<<i) & mask)
		{
			++ones_count;
		}
	}
	return ones_count;
}