#include<string.h>
#include<stdio.h>
#include"sensor.h"
extern int get_sensor_value(SENSOR_TYPE type, SENSORS *sensor_value)
{
	printf("get sensor value function invoked from sensor module:%d\n",type);
	switch(type)
	{
		case TEMPERATURE_HUMIDITY:
			Temperature_and_humidity_sensor(sensor_value);
			break;
		default:
			printf("sensor not availble\n");
			break;
	}
	return 0;
}

static int Temperature_and_humidity_sensor(SENSORS* sensor_value)
{
printf("temperature and humidity value updated\n");
strcpy(sensor_value->temperature, "100 c");
return 0;
}

static int Atmosphere_pressure_sensor()
{
printf("atmosphere pressure value updated\n");
return 0;
}

static int Water_level_sensor()
{
printf("engine room water level value updated\n");
return 0;
}

static int Storage_box_temperature_sensor()
{
printf("fish storage box temperature value updated\n");
return 0;
}

static int Wind_speed_sensor()
{
printf("wind speed value updated\n");
return 0;
}

static int Wind_direction_sensor()
{
printf("wind direction value updated\n");
return 0;
}

static int Engine_heat_sensor()
{
printf("engine heat value updated\n");
return 0;
}

static int Engine_room_fire_sensor()
{
printf("engine room fire sensor value updated\n");
return 0;
}

static int Battery_amp_sensor()
{
printf("battery amp value updated\n");
return 0;
}

static int Engine_status_sensor()
{
printf("engine on/off status  value updated\n");
return 0;
}
