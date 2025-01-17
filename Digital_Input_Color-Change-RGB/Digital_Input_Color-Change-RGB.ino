//www.elegoo.com
//2016.12.08

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6
int buttonApin = 9;
int buttonBpin = 8;
// define variables
int redValue = 255;
int greenValue = 0;
int blueValue = 0;
bool r = true;
bool g = false;
bool b = false;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
  Serial.begin(9600);
  printRGB();
}

void loop()
{
  //if button A is pressed change the color value by
  //decreasing the first color value and increasing the next one
  if (digitalRead(buttonApin) == LOW)
  {
    if (r == true) {
      changeValue(1, redValue, 10);
    } else if (g == true) {
      changeValue(2, greenValue, 10);
    } else if (b == true) {
      changeValue(3, blueValue, 10);
    }
    //print the index number of the rgb light to keep record
    printRGB();
    //send the value to the pin and wait for 1second
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(1000);
  }
  //if button b is pressed change the color value by
  //increasing the first color value and decresing the next one
  if (digitalRead(buttonBpin) == LOW)
  {
    if (r == true) {
      changeValue(1, redValue, -10);
    } else if (g == true) {
      changeValue(2, greenValue, -10);
    } else if (b == true) {
      changeValue(3, blueValue, -10);
    }
    //print the index number of the rgb light to keep record
    printRGB();
    //send the value to the pin and wait for 1second
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(1000);
  }
}


//print rgb index values
void printRGB() {
  Serial.write("Red index: ");
  Serial.println(redValue);
  Serial.write("Green index: ");
  Serial.println(greenValue);
  Serial.write("Blue index: ");
  Serial.println(blueValue);
}

//change RGB values
void changeValue(int color, int value, int i) {
  int v = value - i;
  switch (color) {
    case 1:
      if (v < 0) {
        redValue == 0;
        greenValue == 255;
        r = false;
        g = true;
      } else if (v > 255) {
        redValue == 255;
        blueValue == 0;
        r = false;
        b = true;
      } else {
        redValue -= i;
        greenValue += i;
      }
      break;
    case 2:
      if (v < 0) {
        greenValue == 0;
        blueValue == 255;
        g = false;
        b = true;
      } else if (v > 255) {
        greenValue == 255;
        redValue == 0;
        g = false;
        r = true;
      } else {
        greenValue -= i;
        blueValue += i;
      }
      break;
    case 3:
      if (v < 0) {
        blueValue == 0;
        redValue == 255;
        b = false;
        r = true;
      } else if (v > 255) {
        blueValue == 255;
        greenValue == 0;
        b = false;
        g = true;
      } else {
        blueValue -= i;
        redValue += i;
      }
      break;
  }
}
