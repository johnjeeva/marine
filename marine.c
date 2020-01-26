#include<stdio.h>
#include<string.h>

#include"marine.h"
#include"sensor.h"
int main(int argc, char argv[])
{
	int result = 0;
	SENSORS sensor;
	printf("\n"WELCOME"\n");
	if(get_sensor_value(ALL,&sensor))
	{
		printf("sensor value fetching failed from main function\n");
	}
	printf("sensor value fetched  in main function:%d\n",sensor.temperature);
	return 0;
}

