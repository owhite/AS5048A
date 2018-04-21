#include <AS5048A.h>

// the sensor CSn pin is connected to the 10 pin
AS5048A angleSensor(25);


void setup()
{
	Serial.begin(115200);
	delay(200);
	angleSensor.init();
	delay(200);
}

void loop()
{
	word val = angleSensor.getRawRotation();
	Serial.println(val);
	delay(20);
}
