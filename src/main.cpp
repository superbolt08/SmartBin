#include <WiFi.h>
#include <FirebaseESP32.h>
#include "secrets.h" // Firebase credentials
#include "config.h" // WiFi credentials

// Firebase instance
FirebaseData firebaseData;
FirebaseAuth auth;
FirebaseConfig config;

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

  // Firebase Configuration
  config.host = FIREBASE_HOST;
  config.api_key = FIREBASE_AUTH;

  // Initialize Firebase
  Firebase.begin(&config, &auth);
  Firebase.reconnectWiFi(true);

  // Ultrasonic sensor setup
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

// Function to measure distance
float getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2; // Convert to cm
  return distance;
}
