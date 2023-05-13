int tiempo;
float distancia;

void setup() 
{
	Serial.begin(9600);
	pinMode(A0, INPUT);
	pinMode(2, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(7, OUTPUT);
}

void loop() 
{
	digitalWrite(2, LOW);
	delayMicroseconds(30);
	digitalWrite(2, HIGH);
	delayMicroseconds(10);
	digitalWrite(2, LOW);

	tiempo = pulseIn(A0, HIGH);
	distancia = 0.01716 * tiempo;

	Serial.println(distancia);

	digitalWrite(4, HIGH);
	digitalWrite(7, HIGH);
	delay(distancia * 10);
	digitalWrite(4, LOW);
	digitalWrite(7, LOW);
	delay(distancia * 10);
}
