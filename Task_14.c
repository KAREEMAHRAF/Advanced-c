/*
     Write a c function that rverse an input array .
	 input  1 , 2 , 3 , 4
	 output 4 , 3 , 2 , 1
*/

#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int Reverse_Array(int Array_Size, int *array);

int main()
{
	int size = 8 ;
	int arr[8]={1,2,3,4,5,6,7,8,9};
	
	for(int i = 0 ; i <=size ; i++)
	{
		printf("%d " , Reverse_Array( size , arr[i] ) );
	}
	
}

int Reverse_Array(int Array_Size, int *array)
{
	
	static int temp ;
	for(int i = Array_Size ; i >=0 ; i--)
	{
		 temp = array[i];
		
	}
	
	return temp ;
	
}