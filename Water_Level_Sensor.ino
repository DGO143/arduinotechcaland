int blauw = A1;
int groen = A0;
int geel = A2;
int oranje = A3;
int rood = A4;
int wtr_lvl;
void setup() {

wtr_lvl = 0;
Serial.begin(9600);

}
void loop() {

if (rood >= 0.2)
{
  wtr_lvl = 25;
}
else if (oranje >= 0.2)
{
  wtr_lvl = 20;
}
else if (geel >= 0.2)
{
  wtr_lvl = 15;
}
else if (groen >= 0.2)
{
  wtr_lvl = 10;
}
else if (blauw >= 0.2)
{
  wtr_lvl = 5;
}
else;
{
  wtr_lvl = 0;
}
Serial.println(wtr_lvl);
delay(500);
}
