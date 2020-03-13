#include<string.h>
#include<stdio.h>
#include"sensor.h"
#include "DHT.h"
extern int get_sensor_value(SENSOR_TYPE type, SENSORS *sensor_value)
{
	printf("get sensor value function invoked from sensor module:%d\n",type);
	switch(type)
	{
		case TEMPERATURE_AND_HUMIDITY:
			Temperature_and_humidity_sensor(sensor_value);
			break;
		case ALL:
			Temperature_and_humidity_sensor(sensor_value);
			Atmosphere_pressure_sensor(sensor_value);
			Water_level_sensor(sensor_value);
			Storage_box_temperature_sensor(sensor_value);
                        Wind_speed_sensor(sensor_value);
                        Wind_direction_sensor(sensor_value);
			Engine_heat_sensor(sensor_value);
                        Engine_room_fire_sensor(sensor_value);
                        Battery_amp_sensor(sensor_value);
			Engine_status_sensor(sensor_value);
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
///////TSETED CODE WITH DHT!! SENSOR///////////////
DHT dht(2, DHT11);/// selecting the Digital PIN 2 to connect to dataline of DHT11 and DHT TYPE as DHT11 sensor 
dht.begin();//// Making the PIN 2 as input pin also setting up internal pullup resistor
float humidity = dht.readHumidity(); ///getting humidity value
float temperature = dht.readTemperature();///getting Temperature value
sensor_value->temperature = temperature;
sensor_value->humidity = humidity;
printf("Temperature  is %d °c",sensor_value->temperature);
printf("Temperature  is %d °c",sensor_value->humidity);
return 0;
}

static int Atmosphere_pressure_sensor(SENSORS* sensor_value)
{
printf("atmosphere pressure value updated\n");
sensor_value->atmosphere_pressure = 30;
return 0;
}

static int Water_level_sensor(SENSORS* sensor_value)
{
printf("engine room water level value updated\n");
sensor_value->water_level = 40;
return 0;
}

static int Storage_box_temperature_sensor(SENSORS* sensor_value)
{
printf("fish storage box temperature value updated\n");
sensor_value->storage_box = 50;
return 0;
}

static int Wind_speed_sensor(SENSORS* sensor_value)
{
printf("wind speed value updated\n");
sensor_value->wind_speed = 60;
return 0;
}

static int Wind_direction_sensor(SENSORS* sensor_value)
{
printf("wind direction value updated\n");
sensor_value->wind_direction = 70;
return 0;
}

static int Engine_heat_sensor(SENSORS* sensor_value)
{
printf("engine heat value updated\n");
sensor_value->engine_heat = 80;
return 0;
}

static int Engine_room_fire_sensor(SENSORS* sensor_value)
{
printf("engine room fire sensor value updated\n");
sensor_value->engine_room_fire = 90;
return 0;
}

static int Battery_amp_sensor(SENSORS* sensor_value)
{
printf("battery amp value updated\n");
sensor_value->battery_amp = 100;
return 0;
}

static int Engine_status_sensor(SENSORS* sensor_value)
{
printf("engine on/off status  value updated\n");
sensor_value->engine_status = ON;
return 0;
}
