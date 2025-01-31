#define RED1 2
#define YELLOW1 3
#define GREEN1 4
#define RED2 5
#define YELLOW2 6
#define GREEN2 7

void setup() {
    pinMode(RED1, OUTPUT);
    pinMode(YELLOW1, OUTPUT);
    pinMode(GREEN1, OUTPUT);
    pinMode(RED2, OUTPUT);
    pinMode(YELLOW2, OUTPUT);
    pinMode(GREEN2, OUTPUT);
}

void loop() {
    digitalWrite(GREEN1, HIGH);
    digitalWrite(RED2, HIGH);
    delay(5000);
    
    digitalWrite(GREEN1, LOW);
    digitalWrite(YELLOW1, HIGH);
    delay(2000);
    
    digitalWrite(YELLOW1, LOW);
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, LOW);
    digitalWrite(GREEN2, HIGH);
    delay(5000);
    
    digitalWrite(GREEN2, LOW);
    digitalWrite(YELLOW2, HIGH);
    delay(2000);
    
    digitalWrite(YELLOW2, LOW);
    digitalWrite(RED2, HIGH);
    digitalWrite(RED1, LOW);
}
