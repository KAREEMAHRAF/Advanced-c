/////////////////////////

#include <stdio.h>
int Func_Zero_Count(int Num);
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int main()
{
	
	printf("%d" , Func_Zero_Count(11110011111111111101101000000000) );
	
}
int Func_Zero_Count(int Num)
{
	int count_zero = 0 ;
	int new_count  = 0 ;
	int temp = 0  ;
	int Mask=0x80000000 ;
	for(int i = 0  ; i< 32 ; i++)
	{
		
		if( (Num<<i) & Mask)
		{
			
			
			 if(count_zero>new_count)
			 {
				 temp  =  count_zero   ;
				 printf("%d\n" , temp);
				 count_zero = 0 ;
			 }
			 
			  count_zero = 0 ;
			
			 
		}
		else
		{
			count_zero++;
			
		}
		
	}
	
	return temp ;
}