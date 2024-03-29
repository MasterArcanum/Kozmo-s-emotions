#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

#define ImageWidth1  88
#define ImageHeight1 64


int centerX = (128 - ImageWidth1) / 2;  // Расчет центра по горизонтали
int centerY = (50 - ImageHeight1) / 2;  // Расчет центра по вертикали

int centerX_1 = (110 - ImageWidth1) / 2;  // Расчет центра по горизонтали
int centerY_1 = (30 - ImageHeight1) / 2;  // Расчет центра по вертикали





static const unsigned char PROGMEM ImageArray1[] =
{
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x7f,0xf0,0x0,0xf,0xfe,0x0,0x0,0x0,
0x0,0x0,0x1,0xff,0xff,0x0,0x7f,0xff,0x80,0x0,0x0,
0x0,0x0,0x7,0xff,0xff,0x81,0xff,0xff,0xe0,0x0,0x0,
0x0,0x0,0xf,0xff,0xff,0xc3,0xff,0xff,0xf0,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xe7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xe7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xf7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xe7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xe7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0xf,0xff,0xff,0xe7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x7,0xff,0xff,0xc1,0xff,0xff,0xf0,0x0,0x0,
0x0,0x0,0x3,0xff,0xff,0x0,0xff,0xff,0xe0,0x0,0x0,
0x0,0x0,0x1,0xff,0xfe,0x0,0x3f,0xff,0x80,0x0,0x0,
0x0,0x0,0x0,0x7f,0xfc,0x0,0x1f,0xff,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

static const unsigned char PROGMEM ImageArray2[] =
{
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0xff,0xf8,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0xff,0xfc,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0xff,0xfc,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0xff,0xfe,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,0xff,0xff,0x0,
0x0,0x0,0x0,0x0,0x7,0xff,0xf0,0x3f,0xff,0xff,0x80,
0x0,0x0,0x0,0x0,0x3f,0xff,0xf8,0x3f,0xff,0xff,0x80,
0x0,0x0,0x0,0x0,0xff,0xff,0xfe,0x3f,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0x3f,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0xbf,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0x3f,0xff,0xff,0x80,
0x0,0x0,0x0,0x1,0xff,0xff,0xff,0x3f,0xff,0xff,0x0,
0x0,0x0,0x0,0x0,0xff,0xff,0xfe,0x3f,0xff,0xff,0x0,
0x0,0x0,0x0,0x0,0x7f,0xff,0xfc,0x1f,0xff,0xfe,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0xff,0xfc,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0xff,0xf8,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

static const unsigned char PROGMEM ImageArray3[] =
{
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x1f,0xff,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x3f,0xff,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x3f,0xff,0xf0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x7f,0xff,0xf8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xff,0xff,0xfc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0xff,0xff,0xfc,0xf,0xff,0xe0,0x0,0x0,0x0,0x0,
0x1,0xff,0xff,0xfc,0x1f,0xff,0xfc,0x0,0x0,0x0,0x0,
0x1,0xff,0xff,0xfc,0x7f,0xff,0xff,0x0,0x0,0x0,0x0,
0x1,0xff,0xff,0xfc,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfd,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x1,0xff,0xff,0xfc,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x0,0xff,0xff,0xfc,0xff,0xff,0xff,0x80,0x0,0x0,0x0,
0x0,0xff,0xff,0xfc,0x7f,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x7f,0xff,0xf8,0x3f,0xff,0xfe,0x0,0x0,0x0,0x0,
0x0,0x3f,0xff,0xf0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x1f,0xff,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

static const unsigned char PROGMEM ImageArray4[] =
{
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x7f,0xf8,0x0,0x1f,0xfe,0x0,0x0,0x0,
0x0,0x0,0x1,0xff,0xff,0x0,0x7f,0xff,0x80,0x0,0x0,
0x0,0x0,0x7,0xff,0xff,0x81,0xff,0xff,0xe0,0x0,0x0,
0x0,0x0,0xf,0xff,0xff,0xc3,0xff,0xff,0xf0,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xe7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0x1f,0xff,0xff,0xe7,0xff,0xff,0xf8,0x0,0x0,
0x0,0x0,0xf,0xff,0xff,0xc3,0xff,0xff,0xf0,0x0,0x0,
0x0,0x0,0x7,0x0,0x7,0x81,0xe0,0x1,0xe0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

static const unsigned char PROGMEM ImageArray5[] =
{
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x1,0xc0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xe3,0xff,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xf,0xe3,0xff,0xff,0xf8,0x0,
0x0,0x0,0x0,0x0,0x0,0x3f,0xe3,0xff,0xff,0xfc,0x0,
0x0,0x0,0x0,0x0,0x3,0xff,0xe3,0xff,0xff,0xfc,0x0,
0x0,0x0,0x0,0x3,0xff,0xff,0xe3,0xff,0xff,0xfc,0x0,
0x0,0x0,0x0,0x7,0xff,0xff,0xe3,0xff,0xff,0xfc,0x0,
0x0,0x0,0x0,0x7,0xff,0xff,0xe1,0xff,0xff,0xf8,0x0,
0x0,0x0,0x0,0x7,0xff,0xff,0xc1,0xff,0xff,0xf8,0x0,
0x0,0x0,0x0,0x3,0xff,0xff,0xc0,0xff,0xff,0xf0,0x0,
0x0,0x0,0x0,0x1,0xff,0xff,0x80,0x7f,0xff,0xe0,0x0,
0x0,0x0,0x0,0x0,0x7f,0xfc,0x0,0x1f,0xff,0xc0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

static const unsigned char PROGMEM ImageArray6[] =
{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0x80, 0x00, 0x07, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0x7f, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x03, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  display.clearDisplay();
  delay(4000);
  display.clearDisplay();
  display.drawBitmap(centerX, centerY, ImageArray1, ImageWidth1, ImageHeight1, 1);
  display.display();
}

void loop() {
  display.clearDisplay();
  display.drawBitmap(centerX, centerY, ImageArray1, ImageWidth1, ImageHeight1, 1);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.drawBitmap(centerX, centerY, ImageArray2, ImageWidth1, ImageHeight1, 1);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.drawBitmap(centerX, centerY, ImageArray3, ImageWidth1, ImageHeight1, 1);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.drawBitmap(centerX, centerY, ImageArray4, ImageWidth1, ImageHeight1, 1);
  display.display();
  delay(1000);

   display.clearDisplay();
  display.drawBitmap(centerX_1, centerY_1, ImageArray5, ImageWidth1, ImageHeight1, 1);
  display.display();
  delay(1000);

  
   display.clearDisplay();
  display.drawBitmap(centerX, centerY, ImageArray6, ImageWidth1, ImageHeight1, 1);
  display.display();
  delay(1000);

  


 
}
