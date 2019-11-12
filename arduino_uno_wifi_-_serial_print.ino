#define NUM 5

uint8_t index = 0;
char texts[NUM][50];

void setup() {
	Serial.begin(9600);
	Serial.println("Sa incepem...");

	strcpy(texts[0], "Ana are mere");
	strcpy(texts[1], "Imparatu avea o fata");
	strcpy(texts[2], "Luiza are ceas");
	strcpy(texts[3], "Baba avea o gaina");
	strcpy(texts[4], "Mosu avea un cucos");
}

void loop() {
	Serial.println(texts[index]);

	if (index == (NUM - 1)) {
		Serial.println("******************");
		index = 0;
	} else {
		index++;
	}

	delay(600);
}
