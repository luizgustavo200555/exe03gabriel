#define botaoA 6
#define botaoB 7
#define ledXOR 8
#define ledOU 9
#define ledE 10

boolean valA = 0;
boolean valB = 0;

void setup () {

pinMode(ledXOR, OUTPUT);
pinMode(ledOU, OUTPUT);
pinMOde(ledE, OUTPUT);

pinMode(botaoA, INPUT);
pinMode(botaoB, INPUR);
}

void loop () {

    valA = digitalRead(botaoA);
    valB = digitalRead(botaoB);

    digitalWrite(ledXOR, valA ^ valB);
    digitalWrite(ledOU, valA | valB);
    digitalWrite(ledE, valA & valB);
    
}