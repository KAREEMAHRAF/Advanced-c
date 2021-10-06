////////////


#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int Maximal_Mummber(int a , int b);


int main()
{
	
	int x = 5 ; 
	int y = 55 ;
	
	printf("%d" ,  Maximal_Mummber(x,y));
	
}

int Maximal_Mummber(int a , int b)
{
	
	int max  = 0 ;
	int temp = 0 ;
	
	for(int i = a ; i<= b ; i++)
	{
		
		for(int j = i ; i<= b ; i++)
		{
			
			temp = i^j ;
			if(temp>max)
			{
				max = temp ;
			}
			
		}
		
	}
	return max ;
	 
}