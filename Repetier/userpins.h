// Mauk Cartesio W0.9 with Arduino DUE!
// board CNController V1.0 switched to DUE
// http://mauk.cc/mediawiki/index.php/Pins.h_for_CN_Controls_V1.0

#ifndef __SAM3X8E__
#error Oops! Make sure you have 'Arduino Due' selected from the 'Tools -> Boards' menu.
#endif

#define KNOWN_BOARD
#define CPU_ARCH ARCH_ARM

/*****************************************************************
* Arduino Due Pin Assignments
******************************************************************/

#define ORIG_X_STEP_PIN     34
#define ORIG_X_DIR_PIN      36
#define ORIG_X_MIN_PIN      43
#define ORIG_X_MAX_PIN      -1
#define ORIG_X_ENABLE_PIN   35

#define ORIG_Y_STEP_PIN     37 
#define ORIG_Y_DIR_PIN      39
#define ORIG_Y_MIN_PIN      45
#define ORIG_Y_MAX_PIN      -1
#define ORIG_Y_ENABLE_PIN   38

//pin40 ma niaky problem; enable nepotrebujem tak som pouzil 41 namiesto 40
//problem je ze 40 pripojena zem sposobje niaku chybu(beep) a navrat Z motora; chcelo by to zatial aspon pull-up
#define ORIG_Z_STEP_PIN     41//40
#define ORIG_Z_DIR_PIN      48
#define ORIG_Z_MIN_PIN      42
#define ORIG_Z_MAX_PIN      -1
#define ORIG_Z_ENABLE_PIN   -1//41

//analogove piny treba uvadzat vo forme kanalu
//http://www.avrfreaks.net/forum/arduino-due-adc-channel-sequence
// A0 = 7; .... A3=4

//Extruder1
#define HEATER_0_PIN   17
//pin A0 = #54 = channel 7
#define TEMP_0_PIN     7
#define THERMOCOUPLE_0_PIN  7

//Heat bed
#define HEATER_1_PIN   12
//pin A1 = #55 = channel 6
#define TEMP_1_PIN     6

//Extruder2
#define HEATER_2_PIN   58
//pin A3 = #57 = channel 4
#define TEMP_2_PIN     4
#define THERMOCOUPLE_1_PIN  4

//Extruder3
#define HEATER_3_PIN   64
//pin A9 = #63 = channel ???
//sequencer sa da pouzit iba na kanaly 0-7
#define TEMP_3_PIN     -1
#define THERMOCOUPLE_2_PIN  -1

//Extruder4
#define HEATER_4_PIN   46
//pin A11
#define TEMP_4_PIN     -1
#define THERMOCOUPLE_3_PIN  -1

#define ORIG_E0_STEP_PIN    29
#define ORIG_E0_DIR_PIN     28
#define ORIG_E0_ENABLE_PIN  19

#define ORIG_E1_STEP_PIN    61
#define ORIG_E1_DIR_PIN     62
#define ORIG_E1_ENABLE_PIN  60

//14+15 Serial3 pouzijem na Bluetooth; aj tak nemam Extruder3;
//povodne som chcel pouzit 0+1 ale tam nieco drzi RX hore a nedokazem ho vynulovat, hoci podla schemy by programovaci port nemal robit problem
//#define ORIG_E2_STEP_PIN    15
#define ORIG_E2_STEP_PIN    -1
//#define ORIG_E2_DIR_PIN     14
#define ORIG_E2_DIR_PIN     -1
//#define ORIG_E2_ENABLE_PIN  16
#define ORIG_E2_ENABLE_PIN  -1

#define SDPOWER      -1
// 10 if using HW SPI. 53 if using SW SPI
#define SDSS       53 
#define LED_PIN      13
 
#define ORIG_FAN_PIN     10
#define ORIG_PS_ON_PIN      -1
#define KILL_PIN     -1
#define SUICIDE_PIN    -1  //PIN that has to be turned on right after start, to keep power flowing.


// 20 or 70
#define SDA_PIN         20    
// 21 or 71
#define SCL_PIN         21    


#define E0_PINS ORIG_E0_STEP_PIN,ORIG_E0_DIR_PIN,ORIG_E0_ENABLE_PIN,
#define E1_PINS ORIG_E1_STEP_PIN,ORIG_E1_DIR_PIN,ORIG_E1_ENABLE_PIN,

#define EEPROM_AVAILABLE EEPROM_NONE

//not used 3x separate 24V power switch on CNController board
//PWM TOOL
//pin 3,6,7

//interface connector
//pin 2,4,9

//Extruder ToolController v1.0
//GND     | Vcc
//A0 Temp | 32
//10 spolocnyFAN| 17 HEAT
//28  DIR    | 18
//29  STEP   | 19
//GND     | 24v
//GND     | 24v

//UI
//#define FEATURE_BEEPER false
#define BEEPER_TYPE 1
#define BEEPER_PIN 8
//#define BEEPER_PIN -1

#define DOGLCD_A0       26
#define DOGLCD_CS       24
#define UI_DISPLAY_RS_PIN   -1
#define UI_DISPLAY_RW_PIN   -1
#define UI_DISPLAY_ENABLE_PIN        -1
#define UI_DISPLAY_D4_PIN   -1
#define UI_DISPLAY_D5_PIN   -1
#define UI_DISPLAY_D6_PIN   -1
#define UI_DISPLAY_D7_PIN   -1
#define UI_ENCODER_A 23
#define UI_ENCODER_B 25
#define UI_ENCODER_CLICK 27


//   #define UI_DISPLAY_TYPE        DISPLAY_SR
//   #define UI_DISPLAY_DATA_PIN    9
//   #define UI_DISPLAY_CLOCK_PIN   2
//   #define UI_DISPLAY_ENABLE_PIN  4

//configuration
//#define INVERT_X_DIR 0
//#define INVERT_Y_DIR 1
//#define INVERT_Z_DIR 0
//#define EXT0_INVERSE 1
//#define EXT1_INVERSE 1
//#define EXT2_INVERSE 1

