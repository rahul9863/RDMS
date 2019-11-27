//Basic Electronics Project
/*Author: Rahul Shah */

const int ledred1 = 10;
const int ledred2 = 9;
const int ledgreen2 = 8;
const int ledgreen1 = 11;
const int ldrPin1 = A0;
const int ldrPin2 = A1;
const int buzzerpin = 7;
int ldrStatus1 = 0;
int ldrStatus2 = 0;
const int thresold= 980;
unsigned long timestatus1=0;
unsigned long timestatus2=0;
bool red1status=false;
bool red2status=false;

void setup() {
Serial.begin(9600);
pinMode(ledgreen1, OUTPUT);
pinMode(ledgreen2, OUTPUT);
pinMode(ledred1, OUTPUT);
pinMode(ledred2, OUTPUT);
pinMode(ldrPin1, INPUT);
pinMode(ldrPin2, INPUT);
pinMode(buzzerpin, OUTPUT);
digitalWrite(ledgreen1, HIGH);
digitalWrite(ledgreen2, HIGH);
digitalWrite(ledred1, LOW);
digitalWrite(ledred2, LOW);
}

void loop() {
int ldrStatus1 = analogRead(ldrPin1);
int ldrStatus2 = analogRead(ldrPin2);
Serial.println(ldrStatus1); //prints the values coming from the sensor on the screen
Serial.println(ldrStatus2);
Serial.print("\n");

if (ldrStatus1<= thresold )
{
digitalWrite(ledred2, HIGH);
digitalWrite(ledgreen2, LOW);
timestatus1 = millis();
red2status=true;
}
if ((millis()-timestatus1)>5000 && red2status)
{
    digitalWrite(ledred2, LOW);
    digitalWrite(ledgreen2, HIGH);
    red2status=false;
}
if (ldrStatus2<= thresold )
{
digitalWrite(ledred1, HIGH);
digitalWrite(ledgreen1, LOW);
timestatus2 = millis();
red1status=true;
}
if ((millis()-timestatus2)>5000 && red1status)
{
    digitalWrite(ledred1, LOW);
    digitalWrite(ledgreen1, HIGH);
    red1status=false;
}
if (red1status && red2status)
{
    digitalWrite(buzzerpin, HIGH);
}
else
{
    digitalWrite(buzzerpin, LOW);
}

}
