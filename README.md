# Smart Waste Bin – IoT-Based Trash Monitoring  

An **IoT-powered smart bin** that detects trash levels using an **ESP32 and an ultrasonic sensor**, logs data to **Firebase**, and **sends an email notification** when the bin is full.  

---

## 📌 Features  
- ✅ **Real-time trash level monitoring** with an **ultrasonic sensor**.  
- ✅ **ESP32 updates Firebase Realtime Database** with live bin status.  
- ✅ **Automated email alerts** when the bin is full using **Firebase Cloud Functions + Nodemailer**.  
- ✅ **Web-based dashboard** (in progress) for monitoring waste levels.  

---

## 🔧 Hardware Requirements  
- 🛠 **ESP32**  
- 🛠 **Ultrasonic Sensor (HC-SR04)**  
- 🛠 **WiFi Connection**  

---

## 💻 Software & Tools  
- 🔹 **PlatformIO** (for ESP32 development)  
- 🔹 **Firebase Realtime Database** (for storing bin status)  
- 🔹 **Firebase Cloud Functions + Nodemailer** (for email alerts)  
- 🔹 **HTML + JavaScript** (for the web dashboard - in progress)  

---

## 📜 Setup Instructions  
1. **Connect the hardware** (ESP32 + Ultrasonic Sensor).  
2. **Flash the ESP32 code** using PlatformIO.  
3. **Set up Firebase Realtime Database** and **enable Cloud Functions**.  
4. **Deploy Firebase Functions** to send email alerts when the bin is full.  
5. *(Optional)* **Set up a web dashboard** to monitor bin levels.  

---

## 📌 Next Steps  
- 🔹 **Optimize sensor readings** for better accuracy.  
- 🔹 **Host the web dashboard online** for easy access.  
- 🔹 *(Future Feature)* **Integrate a servo motor** for automatic lid opening.  

---

### 🚀 Work in Progress – Contributions & Ideas Welcome!  

---
