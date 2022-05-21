#define BLYNK_TEMPLATE_ID "TMPLoJIzkQDf"
#define BLYNK_DEVICE_NAME "buzzer"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG
#include "BlynkEdgent.h"

BLYNK_WRITE(V0)
{
  int pinValue=param.asInt();
  digitalWrite(15,pinValue);
}
void setup()
{
  pinMode(15,OUTPUT);
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
}
void loop() {  
  BlynkEdgent.run();
}    
