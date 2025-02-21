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
