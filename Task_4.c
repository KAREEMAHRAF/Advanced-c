
/*
    write a c program for swapping two arrays "A & B" with different length 
*/ 
  
#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"
int *swapping_array(int arr1_size  ,int *arr1 , int arr2_size , int *arr2 );  

int main()
{
	int arr1_size = 4 ;
	int arr2_size = 4 ;
	
	int arr1[4]={1,2,3,4} ;
	int arr2[4]={5,6,7,8} ;
    swapping_array(arr1_size,arr1,arr2_size,arr2);
	
	for(int i=0 ; i<arr1_size ; i++)
	{
		printf("arr 1 = %d \n" , arr1[i] );
	}
	
	for(int i=0 ; i<arr1_size ; i++)
	{
		printf("arr 2 = %d \n" , arr2[i] );
	}
}

int *swapping_array(int arr1_size  ,int *arr1 , int arr2_size , int *arr2 )
{
	
	
	int temp ;
	
	for(int i=0 ; i<arr1_size ; i++)
	{
		temp = arr1[i] ;
		arr1[i] = arr2[i] ;
	    arr2[i] = temp ;
	}
	
}