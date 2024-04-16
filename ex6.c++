#define pot A0 //Define pot como A0
int potvalor; //Cria variável para armazenar o valor do potenciômetro
void setup()
{
Serial.begin(9600); //Inicia a serial com Baud Rate de 9600
}
void loop()
{
potvalor = analogRead(A0); //Lê o potenciômetro e armazena na variável potvalor
Serial.print("Valor do Potenciometro = "); //Imprime na serial "Valor do Potenciometro
= 
Serial.println(potvalor); //Imprime na serial o valor lido
delay(250); //Aguarda 250 milissegundos
}