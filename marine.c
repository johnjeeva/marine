#include<stdio.h>
#include<string.h>

#include"marine.h"
#include"sensor.h"
#include"network.h"
#include"decision.h"
#include"display.h"
#include"cloud.h"
#include"controls.h"
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
	printf("sensor value fetched  in main function:%d\n",sensor.humidity);
	printf("sensor value fetched  in main function:%d\n",sensor.atmosphere_pressure);
	printf("sensor value fetched  in main function:%d\n",sensor.water_level);
	printf("sensor value fetched  in main function:%d\n",sensor.storage_box);
	printf("sensor value fetched  in main function:%d\n",sensor.wind_speed);
	printf("sensor value fetched  in main function:%d\n",sensor.wind_direction);
	printf("sensor value fetched  in main function:%d\n",sensor.engine_heat);
	printf("sensor value fetched  in main function:%d\n",sensor.engine_room_fire);
	printf("sensor value fetched  in main function:%d\n",sensor.battery_amp);
	printf("sensor value fetched  in main function:%d\n",sensor.engine_status);
	return 0;
}

