////////////////
#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int find_array(int Array_Size , int * Array ,int Search_Item);

int main()
{
	int array[10] = {1,2,3,4,5,5,5,5,6};
	//find_array(10,array,5);
	printf("%d" , find_array(10,array,4));
}

int find_array(int Array_Size , int * Array ,int Search_Item)
{
	
	int item ;
	for(int i =0 ; i<=Array_Size ; i++)
	{
		if(Search_Item==Array[i])
		{
			item = i  ;
		}
	}
	return item ;
}


