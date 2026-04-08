cat <<EOF > esp32_can_reader.ino
#include <mcp_can.h>
#include <SPI.h>

long unsigned int rxId;
unsigned char len = 0;
unsigned char rxBuf[8];
MCP_CAN CAN0(5); // ESP32-də CS pini adətən 5 olur

void setup() {
  Serial.begin(115200);
  if(CAN0.begin(MCP_ANY, CAN_500KBPS, MCP_8MHz) == CAN_OK) 
    Serial.println("MCP2515 Hazirdir!");
  else 
    Serial.println("Xeta: MCP2515 tapilmadi...");
  
  CAN0.setMode(MCP_NORMAL);
}

void loop() {
  if(!digitalRead(4)) { // İnt (kəsilmə) pini 4-cü pin
    CAN0.readMsgBuf(&rxId, &len, rxBuf);
    
    // --- KÖMƏK EDƏCƏK ŞƏXSLƏR BURAYA ID ƏLAVƏ EDƏ BİLƏR ---
    
    if(rxId == 0x108) {
       Serial.print("Motor Dövriyyəsi (Ehtimal): ");
       Serial.println(rxBuf[0]); // Nümunə analiz
    }
    
    // Digər ID-ləri bura əlavə edəcəyik...
    
    Serial.print("ID: "); Serial.print(rxId, HEX);
    Serial.print(" Data: ");
    for(int i = 0; i<len; i++) {
      Serial.print(rxBuf[i], HEX); Serial.print(" ");
    }
    Serial.println();
  }
}
EOF