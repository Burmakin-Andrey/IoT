#define sensor_pin A4

void setup()
{
    pinMode(sensor_pin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    char str = int(analogRead(sensor_pin) / 10.24);
//    Serial.write(val);
    Serial.write(str);
    delay(1000);
}
