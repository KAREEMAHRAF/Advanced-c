

#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int PowerOfThree(unsigned int number);

int main()
{
	PowerOfThree(98);
}

int PowerOfThree(unsigned int number)
{
	if( (number==1) || (number==0))
	{
	     return 1 ; 	
	}
	else
	{
		while(1)
		{
			if((number%3)==0)
		    {
				if(number==3)
				{
					return 0;
				}
				number = number / 3 ;
		    }
		    else
		    {
			   return 1;
		    }
		}
	}
}