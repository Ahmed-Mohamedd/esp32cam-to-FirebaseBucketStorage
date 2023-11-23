# esp32cam-to-FirebaseBucketStorage
Capturing  Images By ESP 32 cam and Store it in Firebase Bucket Storage

You can use ESP32-CAM to capture and save photos to Firebase storage.
1- Firstly, you need to create a Firebase project to store photos or any files.
The Firebase project data will be secured by enabling email/password authentication as well.

2- You can then connect ESP32-CAM with an FTDI programmer and capture photos through the ESP32-CAM development board with OV2640 camera when the RST button is pressed.
After capturing the photo, the photo will get saved in the ESP32-CAM’s SPIFFS files and will be fetched from the filesystem. 
ESP32-CAM secures a connection with Google Firebase through an authorized email/password.

3- After a successful connection is established, the development board sends the latest image captured to the Firebase storage. 
The image gets uploaded to the Storage and can be viewed by the authorized user by navigating to the Firebase Console 1.
