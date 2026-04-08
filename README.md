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