// Definizione PIN Bottone 3MS (Ondulato)
const int SW3 = 2;
// Definizione PIN Bottone 4MS (Triangolo)
const int SW4 = 3;

// the setup function runs once when you press reset or power the board
void setup() {
  // Inizializzazione PIN Bottone SW4 (Ondulato)
  pinMode(SW4, OUTPUT);
  // Inizializzazione PIN Bottone SW3 (Triangolo)
  pinMode(SW3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(SW3, HIGH);  // Chiudi il circuito del pulsante
  delay(1000);            
  digitalWrite(SW3, LOW);   // Apri Il circuito del pulsante
  delay(1000);                     
}
