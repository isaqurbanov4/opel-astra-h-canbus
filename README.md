cat <<EOF > README.md
# 🚗 Opel Astra H CAN-BUS Monitoring Project

![Car](https://img.shields.io/badge/Car-Opel%20Astra%20H%202009-blue)
![Engine](https://img.shields.io/badge/Engine-1.4%20Petrol-green)
![Status](https://img.shields.io/badge/Status-Data%20Analysis-orange)

## 📋 Layihənin Məqsədi (Project Goals)
Bu layihə **Opel Astra H** avtomobilinin CAN-BUS sistemindən məlumatları oxumaq, onları analiz etmək və xüsusi funksiyaları (məsələn, mühərrik temperaturu, sükan düymələri) idarə etmək üçün yaradılıb.

## 🛠 Texniki Detallar
* **Cihaz:** ESP32 + MCP2515 (CAN Controller)
* **Protokol:** CAN-BUS (500 kbps / 95 kbps)
* **Bağlantı:** OBD2 Portu vasitəsilə

## 📂 Fayllar haqqında
* **can_captures.txt**: Maşından oxunmuş minlərlə xam (raw) məlumat sətirləri.
* **esp32_can_reader.ino**: Məlumatları oxumaq üçün istifadə etdiyimiz proqram kodu.

## 🆘 Kömək Lazımdır (Help Wanted)
Məndə minlərlə CAN-ID datası var, lakin hansı ID-nin hansı funksiyaya (məsələn, qapı kilidi, dövriyyə göstəricisi) aid olduğunu dəqiqləşdirmək üçün təcrübəli şəxslərin köməyinə ehtiyacım var. 

> **Qeyd:** Əgər Opel Astra H üçün CAN ID-lərin mənalarını bilirsinizsə, zəhmət olmasa bir **Issue** açaraq bildirin!

---
**Müəllif:** @isaqurbanov4
EOF
## ✅ Görüləcək İşlər (To-Do List)
- [x] GitHub Repozitoriyasının yaradılması
- [x] ESP32 və MCP2515 bağlantısının qurulması
- [x] Maşından xam dataların (Raw Data) tutulması
- [ ] Dataların analiz edilməsi (Decoding)
- [ ] Mühərrik dövriyyəsinin (RPM) tapılması
- [ ] Sükan düymələrinin ID-lərinin müəyyən edilməsi
- [ ] ESP32 üzərində kiçik bir ekran (OLED) qurulması
- [ ] Məlumatların mobil tətbiqə göndərilməsi (Bluetooth/Wi-Fi)
cat <<EOF >> README.md

## 📦 Lazım olan Kitabxanalar (Requirements)
Bu kodu işlətmək üçün aşağıdakı kitabxanaları Arduino IDE-də quraşdırmalısınız:
* [mcp_can](https://github.com/coryjfowler/MCP_CAN_lib) - MCP2515 Modulu üçün.
* SPI (Standart Kitabxana).
EOFcat <<EOF > README.md
# 🚗 Opel Astra H CAN-BUS Monitoring Project

![Car](https://img.shields.io/badge/Car-Opel%20Astra%20H%202009-blue)
![Engine](https://img.shields.io/badge/Engine-1.4%20Petrol-green)
![Status](https://img.shields.io/badge/Status-Data%20Analysis-orange)

## 📋 Proje Amacı
Bu proje, **Opel Astra H** avtomobilinin CAN-BUS sistemini analiz etmək, su temperaturu, voltaj və motor dövriyyəsi kimi məlumatları ESP32 vasitəsilə oxumaq üçün yaradılıb.

## 🌡️ Fokuslanmış Məlumatlar
* **Coolant Temperature (Antifriz temperaturu):** Opel-lərdə adətən 0x108 və ya 0x4E8 ID-ləri içində olur.
* **Battery Voltage (Batareya Voltajı):** Avtomobilin elektrik sisteminin vəziyyətini izləmək üçün.

## 🔌 Bağlantı Şeması (Wiring)
| MCP2515 Pin | ESP32 Pin | Tanım |
| :--- | :--- | :--- |
| **VCC** | 5V | Güç Beslemesi |
| **GND** | GND | Toprak |
| **CS** | GPIO 5 | Chip Select |
| **SO (MISO)**| GPIO 19 | Data Out |
| **SI (MOSI)**| GPIO 23 | Data In |
| **SCK** | GPIO 18 | Clock |
| **INT** | GPIO 4 | Interrupt |

## ✅ Yol Haritası (Roadmap)
- [x] GitHub Repozitoriyasının yaradılması
- [x] ESP32 və MCP2515 bağlantısının qurulması
- [x] Maşından xam dataların (Raw Data) tutulması
- [ ] **Dataların analizi (Su temperaturu və Voltaj)** 🌡️⚡
- [ ] RPM (Motor dövriyyəsi) tapılması
- [ ] Sükan düymələrinin ID-lərinin müəyyən edilməsi
- [ ] OLED ekran entegrasyonu
- [ ] Bluetooth vasitəsilə telefona ötürülmə

---
**Kömək lazımdır:** Əgər Opel Astra H üçün Coolant Temp ID-ni bilirsinizsə, Issue açın!
EOF