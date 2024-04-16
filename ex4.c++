#define CHAVE 2 //Define CHAVE como 2
void setup()
{

 pinMode(CHAVE, INPUT); //Configura o pino 2 como entrada
 Serial.begin(9600); //Habilita a porta Serial com um Baud Rate de 9600
}
void loop()
{

 if(digitalRead(CHAVE)) //Se o botão for pressionado
 {
 Serial.println("Botao Pressionado\n"); //Imprime no Serial Monitor "Botão
Pressionado"
 }

 else //Senão
 {
 Serial.println("Botao Despressionado\n"); // Imprime no Serial Monitor "Botão
Despressionado"
 }

 delay(250); //Delay de 250 milissegundos
}