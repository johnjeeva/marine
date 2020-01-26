#include<stdio.h>
#include<string.h>

#include"marine.h"
#include"sensor.h"
int main(int argc, char argv[])
{
	int result = 0;
	SENSORS sensor;
	printf(WELCOME"\n");
	if(get_sensor_value(TEMPERATURE_HUMIDITY,sensor))
	{
		printf("sensor value fetching failed from main function\n");
	}
	return 0;
}

