#define LED 13 //Define LED como 13
void setup()
{
 pinMode(LED, OUTPUT); //Define o pino 13(LED) como saída
}
void loop()
{
 digitalWrite(LED, HIGH); //Liga o LED
 delay(1000); //Aguarda 1 segundo
 digitalWrite(LED, LOW); //Apaga o LED
 delay(1000); //Aguarda 1 segundo
}