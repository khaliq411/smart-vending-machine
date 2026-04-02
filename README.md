# Smart Vending Machine System

## 🚀 Overview
A smart vending machine system integrating a mobile application, cloud database, and embedded hardware using ESP32. 
Users interact through an Android application to select products, which sends requests to a cloud database. The ESP32 fetches these requests and triggers a motor-based dispensing mechanism in real time.

---

## ⚙️ How It Works
1. User selects products through a custom Android mobile application (APK)
2. Checkout action sends a request to Supabase cloud database
3. ESP32 periodically fetches pending requests via REST API
4. Motor is activated to dispense the selected product
5. Request is marked as completed in the cloud

---

## 🧩 System Architecture
Mobile App → Supabase Cloud → ESP32 → Motor → Product Dispensed

---

## 🔧 Features
- Cloud-based request handling
- Real-time API communication
- Automated product dispensing
- Scalable system design

---

## 🛠 Tech Stack
- Kotlin (Android App & Backend logic)
- Arduino (ESP32 firmware)
- Supabase (Database & API)
- Android Studio (App development)

---

## 📱 Mobile Application
- Developed a basic Android application (APK) for product selection and checkout
- Built using Android Studio with Kotlin
- Enables user interaction with the vending system
- Currently deployed locally for testing and demonstration

---

## 📁 Project Structure
- backend/ → request handling
- firmware/ → hardware control

---

## 📌 Status
Prototype completed and tested successfully.

---

## 🔮 Future Improvements
- Integration of secure digital payment gateways (UPI, cards, etc.)
- Development of a fully deployable mobile application for public use
- Real-time inventory tracking and stock management
- Multi-machine support with centralized monitoring
- User authentication and order history tracking
