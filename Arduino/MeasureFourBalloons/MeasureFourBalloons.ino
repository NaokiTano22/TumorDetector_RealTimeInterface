//ピンの設定

int val0;    //valを変数として設定
int val1;
int val2;
int val3;

const int SENSOR0 = 0;
const int SENSOR1 = 1;
const int SENSOR2 = 2;
const int SENSOR3 = 3;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
    val0 = analogRead(SENSOR0);  //valの範囲: 0-1023 → 0-5V
    val1 = analogRead(SENSOR1);  //valの範囲: 0-1023 → 0-5V
    val2 = analogRead(SENSOR2);  //valの範囲: 0-1023 → 0-5V
    val3 = analogRead(SENSOR3);  //valの範囲: 0-1023 → 0-5V

    float data;
    char S1[20];
    char s[20];

    sprintf(S1,"%d, %d, %d, %d",val0, val1, val2, val3);

    Serial.println(S1);
    delay(1000);
}
