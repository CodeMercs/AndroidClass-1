
#include <SoftwareSerial.h>   /* 引用程式庫 */
 
#define rxPin 2                     /* define SoftwareSerial rx data pin  */
#define txPin 3                     /* define SoftwareSerial tx data pin  */

/* 定義連接藍牙模組的序列埠 */
SoftwareSerial BT(rxPin, txPin); /* 接收腳, 傳送腳 */

char val;  /* 儲存接收資料的變數 */
 
void setup() {
  Serial.begin(9600);   /* 與電腦序列埠連線 */ 
  Serial.println("Bluetooth is ready!");
 
  /* 設定藍牙模組的連線速率 */
  /* 如果是HC-05，請改成38400 */
  BT.begin(9600);
  // BT.begin(34800);
}
 
void loop() {
  /* 若收到序列埠監控視窗的資料，則送到藍牙模組 */
  if (Serial.available()) {
    val = Serial.read();
    BT.print(val);
  }
 
  /* 若收到藍牙模組的資料，則送到序列埠監控視窗 */
  if (BT.available()) {
    val = BT.read();
    Serial.println("Bluetooth OK !");
    // Serial.println(val);
  }
}
