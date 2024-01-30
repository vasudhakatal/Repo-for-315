#define MOTION_SENSOR_PIN 2
#define LED_PIN 13
int motionState = 0;

  void setup() 
  {
    Serial.begin(9600);
    pinMode(MOTION_SENSOR_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
  }
  void loop() 
  {
    motionState = digitalRead(MOTION_SENSOR_PIN);
    Serial.print("Motion Sensor: ");
    Serial.println(motionState);
    if (motionState == HIGH) 
    {
      digitalWrite(LED_PIN, HIGH);
      Serial.println("LED: ON");
    } 
    else 
    {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED: OFF");
    }
    delay(1000);
   
  }