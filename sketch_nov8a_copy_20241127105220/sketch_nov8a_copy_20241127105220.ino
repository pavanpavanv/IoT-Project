#include <LCD_I2C.h>
LCD_I2C lcd(0x27);

//==============================lighy 1 =======================================
#define red1 15
#define yellow1 2
#define  green1 4
//==============================lighy 2 =======================================
#define red2 5
#define yellow2 18
#define  green2 19
//==============================lighy 3 =======================================
#define red3 13
#define yellow3 12
#define green3 14
//==============================current =======================================
#define c1 34
#define c2 26
#define c3 25

int current1;
int current2;
int current3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

lcd.begin();
lcd.backlight();
//==============================current =======================================
pinMode(c1,INPUT);
pinMode(c2,INPUT);
pinMode(c3,INPUT);
//==============================lighy 1 =======================================
pinMode(red1,OUTPUT);
pinMode(yellow1,OUTPUT);
pinMode(green1,OUTPUT);
//==============================lighy 2 =======================================
pinMode(red2,OUTPUT);
pinMode(yellow2,OUTPUT);
pinMode(green2,OUTPUT);
//==============================lighy 3 =======================================
pinMode(red3,OUTPUT);
pinMode(yellow3,OUTPUT);
pinMode(green3,OUTPUT);
//==============================lighy1 =======================================
digitalWrite(red1,LOW);
digitalWrite(yellow1,LOW);
digitalWrite(green1,LOW);
//==============================lighy2 =======================================
digitalWrite(red2,LOW);
digitalWrite(yellow2,LOW);
digitalWrite(green2,LOW);
//==============================lighy 3 =======================================
digitalWrite(red3,LOW);
digitalWrite(yellow3,LOW);
digitalWrite(green3,LOW);

Serial.println("setup : ");
lcd.print("SMART HOME "); // You can make spaces using well... spaces
lcd.setCursor(5, 1); // Or setting the cursor in the desired position.
lcd.print("AUTOMATION");
delay(2000);
lcd.clear();


    
}

void loop() {
  // put your main code here, to run repeatedly:

current1=analogRead(c1);
if(current1>=400)
{
  digitalWrite(red1,HIGH);

}
else if(current1>=200)
{

   digitalWrite(yellow1,HIGH);

}

else if(current1>=100)
{
    digitalWrite(green1,HIGH);


}
else
{
  
   digitalWrite(red1,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(green1,LOW);
}
current2=analogRead(c2);
if(current2>=400)
{
  digitalWrite(red2,HIGH);



}
else if(current2>=200)
{

  digitalWrite(yellow2,HIGH);

}
else if(current2>=100)
{

 digitalWrite(green2,HIGH);
}
else{digitalWrite(red2,LOW);digitalWrite(yellow2,LOW);digitalWrite(green2,LOW);}
current3=analogRead(c3);
if(current3>=400)
{
  digitalWrite(red3,HIGH);



}
else if(current3>=200)
{
  digitalWrite(yellow3,HIGH);



}
else if(current3>=100)
{
  digitalWrite(green3,HIGH);


}
else
{
 
 digitalWrite(red3,LOW);
digitalWrite(yellow3,LOW);
digitalWrite(green3,LOW);

}




lcd.setCursor(0,0);
lcd.print("L1:");
if(current1 <=9){lcd.print("00");lcd.print(current1 );}
else if(current1<=99){lcd.print("0");lcd.print(current1 );}
else if(current1 <=999){lcd.print("");lcd.print(current1 );}

lcd.setCursor(7,0);
lcd.print("L2:");
if(current2 <=9){lcd.print("00");lcd.print(current2 );}
else if(current2<=99){lcd.print("0");lcd.print(current2 );}
else if(current2 <=999){lcd.print("");lcd.print(current2 );}


lcd.setCursor(0,1);
lcd.print("L3:");
if(current3 <=9){lcd.print("00");lcd.print(current3 );}
else if(current3<=99){lcd.print("0");lcd.print(current3 );}
else if(current3 <=999){lcd.print("");lcd.print(current3 );}

delay(300);
}