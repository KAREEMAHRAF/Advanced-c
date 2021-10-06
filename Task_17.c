#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"

int Sort_Array(int Array[] ,const int Size);

int main()
{
	int size = 10 ;
	int arr1[10]={10,1,2,3,8,9,6,5,7,4};
	
	for(int i = 0 ; i<size; i++ )
	{
		
		printf("%d" , Sort_Array(arr1[i], 10 ) ) ;
	}
}


int Sort_Array(int Array[] ,const int Size)
{
	int i ,j ,temp , min;
	for( i = 0 ; i<= Size; i++ )
	{
		min=i;
		for( j = i+1 ; j<=Size ; j++)
		{
				if(Array[i]>Array[j])
				{
					min=j;
				}
		}
		            temp = Array[i];
					Array[i] = Array[min];
					Array[min]= temp ; 
	}
	return Array ;
}