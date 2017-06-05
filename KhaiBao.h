#define Send_PIN  15
#define RECV_PIN  2

#define status_led  0

//#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT21   // DHT 21 (AM2301)
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

#define DHTPin 5
#define MotionPin 4

byte _motion_status=0;
unsigned long motion_time=0;

float nhietdo=0;
float doam=0;

/* Cai dat update fota
 *  */
const char ApiKey[] = "BkxnF0xUl-";
const char ApiURL[] = "http://fota.vn";
const char AppVersion[] = "mIR-V0.1";  // Phien ban
const char timeVersion[] = " 1/06/2017";
/*
 * Wifi
 */
 
const char* wifi_password = "88888888";
const char* update_path = "/firmware";
const char* update_username = "mhome";
const char* update_password = "fibaro";
String ipStr="Nil";
String SerialHC2="Nil";

byte denled=0;

int status_failmang=0;
uint16_t _resetketnoi=0;
byte datasend = 0;
byte hoclenh = 0;
int truyenhc=0;
int statusmang=0;

String ts;
String json_ts="38000";
uint16_t *code_array;
int chieudai_ir = 1100 ;
uint16_t irSignal[1100];  // SAMSUNG E0E040BF
//uint16_t irphat[1100];
//unsigned int *codeArray;
int chieudai = 0;


int demgiay=0;
unsigned long timeled=0;
unsigned long timeout = 0;
unsigned long timedelay = 0;
/////////////////////
#define WIFI_CONF_FORMAT {0, 0, 0, 1}
const uint8_t wifi_conf_format[] = WIFI_CONF_FORMAT;
#define NAME_PREF "mHome-"
String network_html;
#define WIFI_CONF_START 0
  byte ip1[4];
  byte gateway[4];
  byte subnet[4];
struct WiFiConfStruct {
  uint8_t format[4];
  char sta_ssid[32];
  char sta_pwd[64];
  char sta_ip[15];
  char sta_gateway[15];
  char sta_subnet[15];
  char sta_iphc2[20];
  char sta_passhc[100];
  char sta_global1[20];
  char sta_global2[20];
  char sta_global3[20];
  char sta_language[3];
  char module_id[32];
} WiFiConf = {
  WIFI_CONF_FORMAT,
  "mhome",
  "mhome",
  "192.168.1.240",
  "192.168.1.1",
  "255.255.2550.0",
  "192.168.1.10",
  "admin:admin@",
  "temp1",
  "temp2",
  "temp3",
  "0",
  ""
};


/*
 * Thoi gian thuc doc tu server
 */


unsigned long thoigianthuc=0;
String time_ ;
int year;
int month;
int day;
int hour;
int minute;
