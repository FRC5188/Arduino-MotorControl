#define motor1 3
#define motor2 5
#define potpin1 A0
#define potpin2 A1
#define maxMotor 2500
#define minMotor 500
#define buttonPin 7
#define motorNeutral 1500

int delayTime = 1500;
int potval1;
int potval2;

bool isOn = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(potpin1, INPUT);
  pinMode(potpin2, INPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin)== true){
    while(digitalRead(buttonPin)== true);
    isOn = !isOn;
    }
  if (isOn == true) {
  
    // put your main code here, to run repeatedly:
    potval1 = analogRead(potpin1);
    delayTime = map(potval1, 0, 1023, minMotor, maxMotor);
    digitalWrite (motor1, HIGH);
    delayMicroseconds(delayTime);
    digitalWrite(motor1, LOW);
    delayMicroseconds(delayTime);

    potval2 = analogRead(potpin2);
    delayTime = map(potval2, 0, 1023, minMotor, maxMotor);
    digitalWrite (motor2, HIGH);
    delayMicroseconds (delayTime);
    digitalWrite (motor2, LOW);
    delayMicroseconds (delayTime);
  }
  
  else{
   // put your main code here, to run repeatedly:
    delayTime = motorNeutral;
    digitalWrite (motor1, HIGH);
    delayMicroseconds(delayTime);
    digitalWrite(motor1, LOW);
    delayMicroseconds(delayTime);

    delayTime = motorNeutral;
    digitalWrite (motor2, HIGH);
    delayMicroseconds (delayTime);
    digitalWrite (motor2, LOW);
    delayMicroseconds (delayTime);
  } 
}
