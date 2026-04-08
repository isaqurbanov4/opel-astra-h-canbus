cat <<EOF > README.md
# 🚗 Opel Astra H CAN-BUS Monitoring Project

![Car](https://img.shields.io/badge/Car-Opel%20Astra%20H%202009-blue)
![Status](https://img.shields.io/badge/Status-Data%20Analysis-orange)

## 📋 Layihənin Məqsədi
Bu layihə **Opel Astra H** avtomobilinin CAN-BUS sistemini analiz etmək, su temperaturu (coolant), voltaj, mühərrik dövriyyəsi (RPM) və sükan düymələri kimi məlumatları ESP32 vasitəsilə oxumaq üçün yaradılıb.

## 🌡️ Fokuslanmış Məlumatlar
* **Coolant Temperature:** Mühərrik temperaturunu izləmək üçün.
* **Battery Voltage:** Elektrik sisteminin gərginliyini yoxlamaq üçün.
* **Steering Buttons:** Sükan düymələri ilə kənar cihazları idarə etmək üçün.

## 🔌 Bağlantı Şeması (Wiring)
| MCP2515 Pin | ESP32 Pin | Tanım |
| :--- | :--- | :--- |
| **VCC** | 5V | Güc Beslemesi |
| **GND** | GND | Toprak |
| **CS** | GPIO 5 | Chip Select |
| **SO (MISO)** | GPIO 19 | Data Out |
| **SI (MOSI)** | GPIO 23 | Data In |
| **SCK** | GPIO 18 | Clock |
| **INT** | GPIO 4 | Interrupt |

## 📦 Lazım olan Kitabxanalar
* [mcp_can](https://github.com/coryjfowler/MCP_CAN_lib) - Cory J. Fowler

## ✅ Yol Haritası (Roadmap)
- [x] GitHub Repozitoriyasının yaradılması
- [x] ESP32 və MCP2515 bağlantısının qurulması
- [x] Maşından xam dataların (Raw Data) tutulması
- [ ] Dataların analizi (Su temperaturu və Voltaj) 🌡️⚡
- [ ] RPM (Motor dövriyyəsi) tapılması
- [ ] Sükan düymələrinin ID-lərinin müəyyən edilməsi
- [ ] OLED ekran entegrasyonu
- [ ] Bluetooth vasitəsilə telefona ötürülmə

---
🆘 **Kömək Lazımdır:** Əgər Opel Astra H üçün CAN-ID mənalarını (xüsusilə temperatur və düymələr) bilirsinizsə, zəhmət olmasa bir **Issue** açaraq bildirin!
EOF