float Thermistor_function(int Vo) {
 logRt = log(10000.0*((1024.0/Vo-1))); 
 T = (1.0 / (A + B*logRt + C*logRt*logRt*logRt));  // We get the temperature value in Kelvin from this Stein-Hart equation
 Tc = T - 273.15;                     // Convert Kelvin to Celcius
 ////Tf = (Tc * 1.8) + 32.0;              // Convert Kelvin to Fahrenheit
 return Tc;
}
