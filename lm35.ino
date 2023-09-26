#define RED 4
#define YELLOW 7
#define GREEN 8

#define TEMP_LIMITE 70

void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
	float read = float(analogRead(A0));
  	float volts = (read / 1023.0) * 5.0;
  	float c = (volts / 0.01);
  
    digitalWrite(2, c >= TEMP_LIMITE);
    
    digitalWrite(GREEN, c <= 20);
    digitalWrite(YELLOW, c > 20 && c <= 50);
    digitalWrite(RED, c > 50);
  
  	delay(100);
}