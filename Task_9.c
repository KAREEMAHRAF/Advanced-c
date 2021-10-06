/*
   write a  function that ccounts number of dalling edges (change from high to low)
   that occurs on a digital input pin . you are required to complete the function Count_Faling() which called periodically
   and have one input parameter that contain the last reading for the port pin (low = 0 , high = 1 ) and return accumulated
   number of faling edges since the first function call.
*/

#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int Count_Faling(int Pin_Rader);

int main()
{
	Count_Faling(0);
	Count_Faling(0);              //                                           0____________         
	Count_Faling(0);              //  Faling rdge                                           |  
	Count_Faling(1);              //                                                        |____________1
	Count_Faling(1);
	Count_Faling(0);
	Count_Faling(0);
	Count_Faling(0);
	Count_Faling(1);
	printf("%d" ,Count_Faling(1) );
	
}

int Count_Faling(int Pin_Rader)
{
	static int previous = 0;
	static int count = 0 ;
	if((Pin_Rader==0)&&(previous==1))
	{
		count ++;
	}
	previous = Pin_Rader ;
	return count ;
}