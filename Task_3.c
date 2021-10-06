/*   
     Write a c function to return an  array containing the values between two
	 8-bits unsigned integers in descending order exclusive the function
	 takes 2 value (LowerValue and UpperValue) , it shall determine the 
	 values in between , and then arrange the sequance in descending order including the Upper and lower values.
	 if the LowerValue is Greater than or equal the UpperValue , return an
	 array of 2 elelment , both containing value = 0xFF 
	 Example :
	 input :LowerValue = 2 and UpperValue = 5
	 output Array = 4,3 
	 Output Array Size=2

*/ 

#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"

int *func(int Lower_value , int Upper_value , int *array_out);
int count = 0;


int main()
{
	int array_out ;
	int lower = 2 ;
	int upper = 5 ;
	int *pointer = func(lower , upper , array_out );
	
	for(int i = 0 ; i<count ; i++)
	{
		
	   printf("%d \n",pointer[i]);
	  
	}
	   printf(" Size of Array = %d",count);
	
}

int *func(int Lower_value , int Upper_value , int *array)
{
   
   
   if( (Lower_value>=Upper_value) )
   {
	   array[1]= 0xFF ;
	   array[2]= 0xFF ;
	   
   }
   else
   {
	   for(int i = Lower_value ; i <= Upper_value ; i++)
	    {
			
				array[count] =  i;
				count ++ ;
			
	    }
	   
   }
	
	return array ;
}