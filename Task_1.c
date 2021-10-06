/*
  write a c function that return the count of the longest consective
  occurrence of a give number in array .
  by kareem ashraf fekry 5 / 10 / 2021 .
*/

#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
uint8 largest_array(uint8 array_size , uint8 *array , uint8 array_number);

uint8 main()
{
	uint8 array_size   = 15 ;
	uint8 array_number =  3 ;
	uint8 array[15]    ={1,2,2,3,3,3,3,3,4,4,4,4,3,3,3};
	uint8 result = largest_array(array_size ,array , array_number );
	printf("%d" , result);
}


uint8 largest_array(uint8 array_size , uint8 *array , uint8 array_number)
{
	uint8 i;
	uint8 count_one = 0 ;
	uint8 count_two = 0 ;
	
	for(i=0 ; i<array_size ; i++)
	{
		if(array_number==array[i])
		{
			count_one++; 
			if(count_one>count_two)
			{
				count_two=count_one;  //count_two save largest number in array
			}
		}
		else
		{
			count_one = 0 ;
		}
		
	}
	return count_two ;
}