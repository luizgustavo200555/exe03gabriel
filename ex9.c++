#define LDR A0 //Define LDR como A0
#define led 8 //Define led como 8
float luminosidade; //Variável para armazenar o valor da luminosidade
float amostra; //Variável para armazenar o amostratória
void setup()
{
Serial.begin(9600); //Inicia a Serial do Arduino
pinMode(led, OUTPUT); //Configura pino 8 como saída
digitalWrite(led, LOW); //Desliga o LED
}
void loop()
{
amostra = 0; //Zera a variável amostra
//Pega 1000 amostras
for(int i=0; i < 100 ; i++)
{
luminosidade = analogRead(LDR); //Armazena o valor lido pelo LDR
luminosidade = (luminosidade / 1024) * 100; //Transforma o valor lido em
porcentagem
amostra = amostra + luminosidade; //Armazena na variável amostra
}
//=================
amostra = amostra/100; //Tira a média das amostras
Serial.print("Luminosidade = "); //Imprime na serial "Luminosidade = "
Serial.print(amostra, 0); //Imprime a amostra sem casas decimais
Serial.println("%"); //Imprime o símbolo de porcentagem
if(amostra < 30) //Se a luminosidade estiver abaixo de 30%
{
digitalWrite(led,HIGH); //Liga o LED
}
else //Senão
{
digitalWrite(led,LOW); //Desliga o LED
}
delay(250); //Delay de 250 milissegundos
}