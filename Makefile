INCLUDES = -I "./includes/"
all:marine sensor
	gcc -o  marine  marine.o sensor.o
sensor:sensor.c
	gcc  -c sensor.c ${INCLUDES}
marine:marine.c
	gcc  -c marine.c ${INCLUDES}
clean:
	rm marine marine.o sensor.o
