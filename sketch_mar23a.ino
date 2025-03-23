/*
 * ElephantMove
 * 使用可變電阻控制伺服馬達震動幅度
 * 版本：2.0.0
 */

#include <Servo.h>

// 建立伺服馬達物件
Servo elephantServo;    

// 定義連接腳位
const int SERVO_PIN = 9;     // 伺服馬達接腳
const int POT_PIN = A0;      // 可變電阻接腳

// 移動參數設定
const int CENTER_POS = 90;    // 中心位置
const int MOVE_DELAY = 400;   // 移動延遲（毫秒）增加延遲以確保安全

void setup() {
  // 初始化串口通訊
  Serial.begin(9600);
  Serial.println(F("震動控制系統初始化中..."));
  
  // 初始化伺服馬達
  elephantServo.attach(SERVO_PIN);
  
  // 設定初始位置
  elephantServo.write(CENTER_POS);
  delay(1000);
  
  Serial.println(F("初始化完成！"));
}

void loop() {
  // 讀取可變電阻值（0-1023）
  int potValue = analogRead(POT_PIN);
  
  // 將可變電阻值映射為震動範圍（0-90度）
  // 因為要讓震動範圍達到180度，所以單邊最大值設為90度
  int moveRange = map(potValue, 0, 1023, 0, 90);
  
  // 執行震動
  // 向前擺動（最大可到180度）
  elephantServo.write(CENTER_POS + moveRange);
  delay(MOVE_DELAY);
  
  // 向後擺動（最小可到0度）
  elephantServo.write(CENTER_POS - moveRange);
  delay(MOVE_DELAY);
}