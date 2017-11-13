/************************************ WIFI *********************************************/
#define ssid "ssid"
#define password "wifiPassword"

/************************************ MQTT *********************************************/
#define mqtt_server "mqttServerAddress"
#define mqtt_username "mqttUsername"
#define mqtt_password "mqttPassword"
#define mqtt_port 1883

#define light_state_topic "lights/light-1a"
#define light_set_topic "lights/light-1a/set"

/************************************* OTA *********************************************/
#define SENSORNAME "light-1a"
#define OTApassword "otaPassword"
#define OTAport 8266

/********************************* LED Defintions **************************************/
#define NUM_LEDS    300
#define DATA_PIN    5
#define CHIPSET     WS2811
#define COLOR_ORDER BRG