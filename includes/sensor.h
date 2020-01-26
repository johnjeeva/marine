typedef struct _sensors
{
	char temperature[128];
	char humidity[128];
}SENSORS;

typedef enum _sensor_type
{
	TEMPERATURE_HUMIDITY = 0,
	FIRE_SENSOR = 3,
}SENSOR_TYPE;

extern int get_sensor_value(SENSOR_TYPE, SENSORS);

static int Temperature_and_humidity_sensor();
static int Atmosphere_pressure_sensor();
static int Water_level_sensor();
static int Storage_box_temperature_sensor();
static int Wind_speed_sensor();
static int Wind_direction_sensor();
static int Engine_heat_sensor();
static int Engine_room_fire_sensor();
static int Battery_amp_sensor();
static int Engine_status_sensor();


