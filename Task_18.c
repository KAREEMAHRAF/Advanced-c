#include <stdio.h>
#include "D:\Embedded_Cours\Adavced_c\Std_Macros.h"

int Sensor_Heating_Time(int Temperature);

int main()
{
	printf("%d" ,Sensor_Heating_Time(100) );
}

int Sensor_Heating_Time(int Temperature)
{
	
	int result ;
	if( (Temperature<=30) && (Temperature>=0) )
	{
		result = 7;
	}
	
	else if((Temperature<=60) && (Temperature>30) )
	{
		result = 5;
	}
	else if((Temperature<=90) && (Temperature>60) )
	{
		result = 3;
	}
	else if((Temperature>90) && (Temperature>100))
	{
		result = 1;
	}
	else if((Temperature>=100))
	{
		result = 0;
	}
	
	return result ;
}