/*
  This file comes from the Rusty Wagner's VTi
*/
/*
  Program name: main/dumprom()
*/

static unsigned char romDump83[]={
    0x2A,0x2A,0x54,0x49,0x38,0x33,0x2A,0x2A,0x1A,0x0A,0x00,0x54,0x68,
    0x69,0x73,0x20,0x66,0x69,0x6C,0x65,0x20,0x77,0x61,0x73,0x20,0x67,
    0x65,0x6E,0x65,0x72,0x61,0x74,0x65,0x64,0x20,0x62,0x79,0x20,0x44,
    0x65,0x76,0x70,0x61,0x63,0x38,0x33,0x20,0x76,0x31,0x2E,0x30,0x00,
    0x00,0xE0,0x01,0x0B,0x00,0xD1,0x01,0x06,0x52,0x4F,0x4D,0x38,0x33,
    0x00,0x00,0x00,0xD1,0x01,0xCF,0x01,0x00,0x18,0x11,0x00,0x00,0x32,
    0x93,0x00,0x00,0x00,0x00,0x52,0x4F,0x4D,0x20,0x44,0x75,0x6D,0x70,
    0x00,0xCD,0x55,0x47,0xF3,0x21,0x03,0x02,0x22,0x0C,0x80,0x21,0xE7,
    0x94,0xCD,0x0D,0x47,0x3E,0x00,0xF5,0x32,0xE6,0x94,0x21,0x00,0x40,
    0xE5,0xCD,0x84,0x93,0xE1,0xFE,0x00,0xCA,0x79,0x93,0x11,0x00,0x04,
    0x19,0x7C,0xFE,0x80,0xC2,0x54,0x93,0xF1,0x3C,0xFE,0x10,0xC2,0x4D,
    0x93,0x3E,0x0C,0xCD,0x29,0x94,0xCD,0x55,0x47,0xFB,0xC9,0x3E,0x0C,
    0xCD,0x29,0x94,0xCD,0x55,0x47,0xFB,0xF1,0xC9,0x11,0x00,0x04,0x3E,
    0x00,0x32,0xF4,0x94,0x32,0xF5,0x94,0x1B,0x7A,0xFE,0xFF,0xCA,0xB9,
    0x93,0x3A,0xE6,0x94,0xCD,0x29,0x94,0x7E,0xE5,0xD5,0x2A,0xF4,0x94,
    0x16,0x00,0x5F,0x19,0x22,0xF4,0x94,0xCD,0xA0,0x94,0xD1,0xE1,0x23,
    0xDB,0x03,0xCB,0x5F,0xCA,0x26,0x94,0xC3,0x8F,0x93,0x3A,0xF5,0x94,
    0xCD,0xA0,0x94,0x3A,0xF4,0x94,0xCD,0xA0,0x94,0x3E,0x00,0xCD,0x3A,
    0x94,0xFE,0xCC,0xCA,0x26,0x94,0xFE,0xDA,0xC2,0x84,0x93,0x3A,0xE5,
    0x94,0x3C,0x32,0xE5,0x94,0xFE,0x0A,0xC2,0x0A,0x94,0x3E,0x00,0x32,
    0xE5,0x94,0x3A,0xE4,0x94,0x3C,0x32,0xE4,0x94,0xFE,0x0A,0xC2,0x02,
    0x94,0x3E,0x00,0x32,0xE4,0x94,0x3A,0xE3,0x94,0x3C,0x32,0xE3,0x94,
    0xC6,0x30,0x32,0xE7,0x94,0x3A,0xE4,0x94,0xC6,0x30,0x32,0xE8,0x94,
    0x3A,0xE5,0x94,0xC6,0x30,0x32,0xE9,0x94,0x21,0x03,0x02,0x22,0x0C,
    0x80,0x21,0xE7,0x94,0x3E,0x0C,0xCD,0x29,0x94,0xCD,0x0D,0x47,0x3E,
    0x01,0xC9,0x3E,0x00,0xC9,0xF5,0xE6,0x07,0xF6,0x88,0xD3,0x02,0xF1,
    0xE6,0x08,0xCB,0x27,0xF6,0xC0,0xD3,0x00,0xC9,0x06,0x08,0x11,0xFF,
    0xFF,0x18,0x12,0xDB,0x00,0xE6,0x0C,0xC8,0xFE,0x0C,0x20,0x0F,0xDB,
    0x00,0xE6,0x0C,0xC8,0xFE,0x0C,0x20,0x06,0x1B,0x7A,0xB3,0x20,0xE9,
    0xC9,0xD6,0x08,0x30,0x2C,0x3E,0xC1,0xD3,0x00,0xCB,0x19,0x11,0xFF,
    0xFF,0xDB,0x00,0xE6,0x0C,0xFE,0x08,0x28,0x06,0x1B,0x7A,0xB3,0x20,
    0xF3,0xC9,0x3E,0xC0,0xD3,0x00,0x16,0x04,0x15,0x28,0x08,0xDB,0x00,
    0xE6,0x0C,0xFE,0x0C,0x20,0xF5,0x10,0xB5,0x79,0xC9,0x3E,0xC2,0xD3,
    0x00,0xCB,0x19,0x11,0xFF,0xFF,0xDB,0x00,0xE6,0x0C,0xFE,0x04,0x28,
    0xDA,0x1B,0x7A,0xB3,0x20,0xF3,0xC9,0x4F,0x06,0x08,0x11,0xFF,0xFF,
    0xCB,0x19,0x30,0x04,0x3E,0xC2,0x18,0x02,0x3E,0xC1,0xD3,0x00,0xDB,
    0x00,0xE6,0x0C,0x28,0x0C,0xDB,0x00,0xE6,0x0C,0x28,0x06,0x1B,0x7A,
    0xB3,0x20,0xEF,0xC9,0x3E,0xC0,0xD3,0x00,0x11,0xFF,0xFF,0x1B,0x7A,
    0xB3,0xC8,0xDB,0x00,0xE6,0x0C,0xFE,0x0C,0x20,0xF4,0x10,0xCA,0xC9,
    0x7E,0xB7,0xC8,0xCD,0xA0,0x94,0x23,0x18,0xF7,0x00,0x00,0x00,0x00,
    0x20,0x20,0x30,0x4B,0x20,0x6F,0x66,0x20,0x32,0x35,0x36,0x4B,0x00,
    0x00,0x00,0x58,0xD3};
static int romDumpSize83=537;
