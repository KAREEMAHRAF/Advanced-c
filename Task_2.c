/*   
     Write a c function to return an  array containing the values between two
	 8-bits unsigned uint8egers in descending order exclusive the function
	 takes 2 value (LowerValue and UpperValue) , it shall determine the 
	 values in between , and then or equal the Upper and lower values.
	 if the LowerValue is Greater than or equal the UpperValue , return an
	 array of 2 elelment , both containing value = 0xFF 
	 Example :
	 input :LowerValue = 2 and UpperValue = 5
	 output Array = 4,3 
	 Output Array Size=2

*/ 
#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"

uint8 *func(uint8 Lower_value , uint8 Upper_value , uint8 *array_out);
uint8 count = 0;


uint8 main()
{
	uint8 array_out ;
	uint8 lower = 2 ;
	uint8 upper = 10 ;
	uint8 *pouint8er = func(lower , upper , array_out );
	
	for(uint8 i = 0 ; i<count ; i++)
	{
		
	   pruintf("%d \n",pouint8er[i]);
	   
	
	}
	   pruintf(" Size of Array = %d",count);
	
}

uint8 *func(uint8 Lower_value , uint8 Upper_value , uint8 *array)
{
   
   
   if( (Lower_value>=Upper_value) )
   {
	   array[1]= 0xFF ;
	   array[2]= 0xFF ;
	   
   }
   else
   {
	   for(uint8 i = Lower_value+1 ; i < Upper_value ; i++)
	    {
			
				array[count] =  i;
				count ++ ;
			
	    }
	   
   }
	
	return array ;
}