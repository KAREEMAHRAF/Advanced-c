/*
   write a c function to return the index of first occurrence of number in a given array.
   Array index start from 0 .if iten is not in the list return -1.
*/
#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"

int Serach_In_Array(int *Array , int Number , int Size);

int main()
{
	int array[8] ={1,2,3,5,4,4,4,4} ;
	printf("%d" , Serach_In_Array(array,2, 8) );
}

int Serach_In_Array(int *Array , int Number , int Size)
{
	for(int i = 0 ; i<Size ; i++)
	{
        if(Number == Array[i])
	    {
			return (i) ;
		}
	}
	return -1 ;
}