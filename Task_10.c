 /*
   that occurs on a digital input pin . you are required to complete the function count_Rising() which called periodically
   and have one input parameter that contain the last reading for the port pin (low = 0 , high = 1 ) and return accumulated
   number of Rising edges since the first function call.
 */
 
#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int Count_Rising(int Pin_Rader);

int main()
{
	Count_Rising(0);                                           
	Count_Rising(0);
	Count_Rising(0);
	Count_Rising(1);      //                                                    _______________1
	Count_Rising(1);      //  Rising rdge                                      | 
	Count_Rising(0);      //                                     0_____________|
	Count_Rising(0);
	Count_Rising(0);
	Count_Rising(1);
	Count_Rising(0);
	Count_Rising(1);
	Count_Rising(1);
	Count_Rising(0);
	Count_Rising(1);
	printf("%d" ,Count_Rising(0) );
	
}

int Count_Rising(int Pin_Rader)
{
	static int previous = 0;
	static int count = 0 ;
	if((Pin_Rader==1)&&(previous==0))
	{
		count ++;
	}
	previous = Pin_Rader ;
	return count ;
}