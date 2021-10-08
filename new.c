
#include <stdio.h>


int largest_array(int array_size , int *array , int array_number);

int main()
{
	int array_size   = 15 ;
	int array_number =  3 ;
	int array[15]    ={1,2,2,3,3,3,3,3,4,4,4,4,3,3,3};
	int result = largest_array(array_size ,array , array_number );
	printf("%d" , result);
}


int largest_array(int array_size , int *array , int array_number)
{
	int i;
	int count_one = 0 ;
	int count_two = 0 ;
	
	for(i=0 ; i<array_size ; i++)
	{
		if(array_number==array[i])
		{
			count_one++; 
			if(count_one>count_two)
			{
				count_two=count_one;  //count_two save largest number in array
			}
		}
		else
		{
			count_one = 0 ;
		}
		
	}
	return count_two ;
}
