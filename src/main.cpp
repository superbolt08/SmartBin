#include <WiFi.h>
#include <FirebaseESP32.h>
#include "secrets.h" // Firebase credentials
#include "config.h" // Wifi credentials

// Firebase instance
FirebaseData firebaseData;

// Ultrasonic sensor pins
const int trigPin = 5;
const int echoPin = 18;

// Bin full threshold (adjustable)
const int binFullDistance = 5; // cm 

void setup() {
  Serial.begin(115200);

  // WiFi Connection
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(1000);
      Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi!");

  // Initialize Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  // Ultrasonic sensor setup
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}