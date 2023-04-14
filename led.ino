
int brightness = 0 to 255;     // how bright the LED is

// the setup routine runs once when you press reset:
void setup()
{
    // declare pin 9 to be an output:
    pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()
{
    // set the brightness of pin 9:
    analogWrite(led, brightness);

}