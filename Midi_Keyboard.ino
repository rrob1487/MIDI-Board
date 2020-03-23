#include <CapacitiveSensor.h>

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);
CapacitiveSensor   cs_2_11 = CapacitiveSensor(2,11);
CapacitiveSensor   cs_2_12 = CapacitiveSensor(2,12);
CapacitiveSensor   cs_2_13 = CapacitiveSensor(2,13);

 
 int ON = 100;//velocity of MIDI notes, must be between 0 and 127
 int OFF = 0;

 
 int noteON = 144;//144 = 10010000 in binary, note on command

void setup() {
  //  Set MIDI baud rate:
  Serial.begin(31250);

}

void loop() {
  
  long total1 =   cs_2_3.capacitiveSensor(30);
  long total2 =   cs_2_4.capacitiveSensor(30);
  long total3 =   cs_2_5.capacitiveSensor(30);
  long total4 =   cs_2_6.capacitiveSensor(30);
  long total5 =   cs_2_7.capacitiveSensor(30);
  long total6 =   cs_2_8.capacitiveSensor(30);
  long total7 =   cs_2_9.capacitiveSensor(30);
  long total8 =  cs_2_10.capacitiveSensor(30);
  long total9 =  cs_2_11.capacitiveSensor(30);
 long total10 =  cs_2_12.capacitiveSensor(30); 
 long total11 =  cs_2_13.capacitiveSensor(30); 
 
 
static int lastInput1 = 0;
int newInput1 = total1;
if((lastInput1 < 500) && (newInput1 > 500)) {
    for (int note=48;note<49;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON); }};//turn note on
if((lastInput1 > 500) && (newInput1 < 500)) {
    for (int note=48;note<49;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, OFF); }};
lastInput1 = newInput1;

static int lastInput2 = 0;
int newInput2 = total2;
if((lastInput2 < 500) && (newInput2 > 500)) {
    for (int note=49;note<50;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput2 > 500) && (newInput2 < 500)) {
  for (int note=49;note<50;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput2 = newInput2; 

static int lastInput3 = 0;
int newInput3 = total3;
if((lastInput3 < 500) && (newInput3 > 500)) {
    for (int note=50;note<51;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput3 > 500) && (newInput3 < 500)) {
  for (int note=50;note<51;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput3 = newInput3;
    
static int lastInput4 = 0;
int newInput4 = total4;
if((lastInput4 < 500) && (newInput4 > 500)) {
    for (int note=51;note<52;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput4 > 500) && (newInput4 < 500)) {
  for (int note=51;note<52;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput4 = newInput4;
    
static int lastInput5 = 0;
int newInput5 = total5;
if((lastInput5 < 500) && (newInput5 > 500)) {
    for (int note=52;note<53;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput5 > 500) && (newInput5 < 500)) {
  for (int note=52;note<53;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput5 = newInput5; 

static int lastInput6 = 0;
int newInput6 = total6;
if((lastInput6 < 500) && (newInput6 > 500)) {
    for (int note=53;note<54;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput6 > 500) && (newInput6 < 500)) {
  for (int note=53;note<54;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput6 = newInput6;

static int lastInput7 = 0;
int newInput7 = total7;
if((lastInput7 < 500) && (newInput7 > 500)) {
    for (int note=54;note<55;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput7 > 500) && (newInput7 < 500)) {
  for (int note=54;note<55;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput7 = newInput7; 

static int lastInput8 = 0;
int newInput8 = total8;
if((lastInput8 < 500) && (newInput8 > 500)) {
    for (int note=55;note<56;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput8 > 500) && (newInput8 < 500)) {
  for (int note=55;note<56;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput8 = newInput8;

static int lastInput9 = 0;
int newInput9 = total9;
if((lastInput9 < 500) && (newInput9 > 500)) {
    for (int note=56;note<57;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput9 > 500) && (newInput9 < 500)) {
  for (int note=56;note<57;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput9 = newInput9;
    
static int lastInput10 = 0;
int newInput10 = total10;
if((lastInput10 < 500) && (newInput10 > 500)) {
    for (int note=57;note<58;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput10 > 500) && (newInput10 < 500)) {
  for (int note=57;note<58;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput10 = newInput10;  
   
 static int lastInput11 = 0;
int newInput11 = total11;
if((lastInput11 < 500) && (newInput11 > 500)) {
    for (int note=58;note<59;note++) {//from note 50 (D3) to note 69 (A4)
    MIDImessage(noteON, note, ON);}};//turn note on
if((lastInput11 > 500) && (newInput11 < 500)) {
  for (int note=58;note<59;note++) {
    MIDImessage(noteON, note, OFF);}};
lastInput11 = newInput11;   

    
}
//send MIDI message
void MIDImessage(int command, int MIDInote, int MIDIvelocity) {
  Serial.write(command);//send note on or note off command 
  Serial.write(MIDInote);//send pitch data
  Serial.write(MIDIvelocity);//send velocity data
}


