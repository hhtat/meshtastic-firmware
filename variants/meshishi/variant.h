// Developed for ESP32-S3-WROOM-1-N16R8 + E22-900M30S

#define SX126X_CS 14
#define LORA_SCK 21
#define LORA_MOSI 38
#define LORA_MISO 39
#define SX126X_RESET 40
#define SX126X_BUSY 41
#define SX126X_DIO1 42

#define SX126X_TXEN 9
#define SX126X_RXEN 10

#define LED_PIN 1
#define LED_STATE_ON 1
#define EXT_NOTIFY_OUT 2
#define BUTTON_PIN 0

#define I2C_SCL 18
#define I2C_SDA 8

#define UART_TX 43
#define UART_RX 44

#define SX126X_MAX_POWER 22

#define HAS_SCREEN 0
#define HAS_GPS 0

#define USE_SX1262
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

#define LORA_CS SX126X_CS
#define LORA_DIO1 SX126X_DIO1