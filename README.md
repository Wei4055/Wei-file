# Wei-file
# ElephantMove

一個使用 Arduino 控制大象移動的最簡單專案。通過單個伺服馬達實現大象的開心擺動效果。

## 功能特點

- 開心擺動：快速小幅度的前後移動

## 硬體需求

- Arduino 開發板（如 Arduino UNO）
- 1個 SG90 伺服馬達（或類似規格）
- 連接線
- 5V 電源供應

## 接線說明

### 伺服馬達
- 紅線 → 5V
- 棕線 → GND
- 橙線 → Pin 9

## 安裝說明

1. 下載本專案
2. 使用 Arduino IDE 開啟 ElephantMove.ino
3. 選擇正確的開發板和連接埠
4. 上傳程式碼

## 使用說明

1. 完成接線後，給 Arduino 供電
2. 程式會自動執行開心擺動動作

## 參數調整

可以在程式碼中調整以下參數：
```cpp
const int CENTER_POS = 90;     // 中心位置
const int MOVE_RANGE = 15;     // 移動範圍
const int MOVE_DELAY = 100;    // 移動速度
```

## 注意事項

1. 首次測試時建議使用較小的移動範圍
2. 確保伺服馬達安裝牢固
3. 注意電源供應是否足夠
4. 定期檢查機械結構

## 授權

本專案採用 MIT 授權條款。
