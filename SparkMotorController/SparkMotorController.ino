#define motor1 3
#define motor2 4
#define potpin1 A0
#define potpin2 A1
#define maxMotor 2500
#define minMotor 500

int delayTime = 1500;
int potval;

void setup() {
  // put your setup code here, to run once:
pinMode(motor1, OUTPUT);
pinMode (potpin1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
potval = analogRead(potpin1);
delayTime = map(potval, 0, 1023, minMotor, maxMotor);
digitalWrite (motor1, HIGH);
delayMicroseconds(delayTime);
digitalWrite(motor1, LOW);
delayMicroseconds(delayTime);

//digitalWrite (motor2, HIGH);
//delayMicroseconds (delayTime);
//digitalWrite (Motor2, LOW);

}
