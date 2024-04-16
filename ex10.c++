// Exemplo de Alarme por temperatura
// Lab. de Garagem
#include <Thermistor.h>
//Define a temperatura máxima e mínima para o range do sensor
#define TEMP_MAX 42
#define TEMP_MIN 24
//Define o pino onde a sirene vai estar conectado
#define sirene 3
//Instância o pino A0 como o pino onde o sensor de temperatura estará conecta
do
Thermistor temp(0);
void setup()
{
Serial.begin(9600);
Serial.println("Alarme de temperatura");
}
void loop()
{
int temperatura = temp.getTemp();
delay(2000); // delay para garantir no minimo 2s entre cada uma das leituras
if (temperatura > TEMP_MIN && temperatura < TEMP_MAX)
{
noTone(sirene);
}
else
{
tone (sirene,440,1000);
Serial.println("PERIGO!!! TEMPERATURA FORA DO ESPERADO");
Serial.print("Temperatura deve estar entre ");
Serial.print(TEMP_MIN);
Serial.print(" e ");
Serial.println(TEMP_MAX);
}
Serial.print("Temperatura: ");
Serial.print(temperatura);
Serial.println(" *C\n");
}