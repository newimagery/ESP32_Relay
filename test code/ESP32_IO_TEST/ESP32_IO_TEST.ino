#define RELAY          16
#define LED            23

void setup() 
{
 pinMode(RELAY, OUTPUT);      //输出模式
 pinMode(LED, OUTPUT);      //输出模式  
 digitalWrite(RELAY,LOW );    //IO默认关闭
 digitalWrite(LED,LOW );    //IO默认关闭
}

void loop() 
{
  digitalWrite(RELAY,HIGH );       
  delay(200); //延时0.2S
  digitalWrite(LED,HIGH );       
  delay(200); //延时0.2S 
  
  digitalWrite(RELAY,LOW );
  delay(200); //延时0.2S
  digitalWrite(LED,LOW );
  delay(200); //延时0.2S
  
}
