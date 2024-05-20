/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.10 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.13.11 or later version;
     - for iOS 1.10.3 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// you can enable debug logging to Serial at 115200
//#define REMOTEXY__DEBUGLOG    

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT


// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "project"
#define REMOTEXY_WIFI_PASSWORD "00000000"
#define REMOTEXY_SERVER_PORT 6377


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 108 bytes
  { 255,6,0,0,0,101,0,17,0,0,0,24,1,200,102,1,3,6,0,1,
  28,35,23,23,0,6,31,117,112,0,1,119,67,23,23,0,6,31,108,101,
  102,116,0,1,156,67,23,23,0,6,31,114,105,103,104,116,0,1,158,35,
  19,19,0,2,31,104,111,114,110,0,1,28,66,23,23,0,6,31,100,111,
  119,110,0,129,52,10,101,12,1,78,101,116,119,111,114,107,32,67,111,110,
  116,114,111,108,108,101,114,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t page_01; // =1 if page is visible, else =0
  uint8_t button_02; // =1 if button pressed, else =0
  uint8_t button_03; // =1 if button pressed, else =0
  uint8_t button_04; // =1 if button pressed, else =0
  uint8_t button_05; // =1 if button pressed, else =0
  uint8_t button_01; // =1 if button pressed, else =0

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;   
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_BUTTON_02 5
#define PIN_BUTTON_03 2
#define PIN_BUTTON_04 3
#define PIN_BUTTON_05 7
#define PIN_BUTTON_01 4


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_BUTTON_02, OUTPUT);
  pinMode (PIN_BUTTON_03, OUTPUT);
  pinMode (PIN_BUTTON_04, OUTPUT);
  pinMode (PIN_BUTTON_05, OUTPUT);
  pinMode (PIN_BUTTON_01, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_BUTTON_02, (RemoteXY.button_02==0)?LOW:HIGH);
  digitalWrite(PIN_BUTTON_03, (RemoteXY.button_03==0)?LOW:HIGH);
  digitalWrite(PIN_BUTTON_04, (RemoteXY.button_04==0)?LOW:HIGH);
  digitalWrite(PIN_BUTTON_05, (RemoteXY.button_05==0)?LOW:HIGH);
  digitalWrite(PIN_BUTTON_01, (RemoteXY.button_01==0)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


}