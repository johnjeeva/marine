#define ON 1
#define OFF 0
typedef struct _sensors
{
	int temperature;
	int humidity;
	int atmosphere_pressure;
	int water_level;
	int storage_box;
	int wind_speed;
	int wind_direction;
	int engine_heat;
	int engine_room_fire;
	int battery_amp;
	int engine_status;
}SENSORS;

typedef enum _sensor_type
{
	TEMPERATURE_AND_HUMIDITY = 0,
	ATMOSPHERE_PRESSURE = 1,
	WATER_LEVEL = 2,
	STORAGE_BOX_TEMP = 3,
	WIND_SPEED = 4,
	WIND_DIRECTION = 5,
	ENGINE_HEAT = 6,
	ENGINE_ROOM_FIRE =7,
	BATTERY_AMP = 8,
	ENGINE_STATUS =9,
	ALL = 10,
}SENSOR_TYPE;

extern int get_sensor_value(SENSOR_TYPE, SENSORS*);

static int Temperature_and_humidity_sensor(SENSORS*);
static int Atmosphere_pressure_sensor(SENSORS*);
static int Water_level_sensor(SENSORS*);
static int Storage_box_temperature_sensor(SENSORS*);
static int Wind_speed_sensor(SENSORS*);
static int Wind_direction_sensor(SENSORS*);
static int Engine_heat_sensor(SENSORS*);
static int Engine_room_fire_sensor(SENSORS*);
static int Battery_amp_sensor(SENSORS*);
static int Engine_status_sensor(SENSORS*);


