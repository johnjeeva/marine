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
	//while(1)
	//{
	//check_network connectivity
		//if network issue reconnect
 	//load all sensor  values
		//any sensor issue report
	//go into decision mode
		//check for any alarm triggered like fire water etc
	//update display in diferent thread less prority
		//update all sensor data in display
	//push data to cloud
		//getting update sucess status
	//receive input from cloud in different thread
		//must be event trigger call back high priority
	//}
	int result = 0;
	SENSORS sensor;
	memset(&sensor, 0, sizeof(SENSORS));
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

