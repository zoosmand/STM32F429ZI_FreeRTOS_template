/*
 * dot10x14.c
 *
 * Created: 18.12.2019 0:04:37
 *  Author: zoosman
 */ 

#include "fonts.h"

////////////////////////////////////////////////////////////////////////////
const uint8_t font_10x14[(96 * 24)] = {
  0x00, 0x00, 0x00, 0x00, // [space]  #32 (0x20)
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // !        #33 (0x21)
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0xcc, 0xff, 0xcc, 0xff,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // "        #34 (0x22)
  0x00, 0x00, 0x00, 0x00,
  0x00, 0xfc, 0x00, 0xfc,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0xfc, 0x00, 0xfc,
  0x00, 0x00, 0x00, 0x00,
  
  0xc0, 0x30, 0xc0, 0x30, // #        #35 (0x23)
  0xfe, 0xff, 0xfe, 0xff,
  0xc0, 0x30, 0xc0, 0x30,
  0xfe, 0xff, 0xfe, 0xff,
  0xc0, 0x30, 0xc0, 0x30,
  0x00, 0x00, 0x00, 0x00,

  0x30, 0x0c, 0x30, 0x0c, // $        #36 (0x24)
  0x30, 0x33, 0x30, 0x33,
  0xfe, 0xff, 0xfe, 0xff,
  0x30, 0x33, 0x30, 0x33,
  0xc0, 0x30, 0xc0, 0x30,
  0x00, 0x00, 0x00, 0x00,
  
  0x3c, 0xfc, 0x3c, 0xfc, // %        #37 (0x25)
  0xc0, 0xcc, 0xc0, 0xcc,
  0x3c, 0xff, 0x3c, 0xff,
  0xcc, 0x0c, 0xcc, 0x0c,
  0xfc, 0xf0, 0xfc, 0xf0,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3c, 0xf0, 0x3c, // &        #38 (0x26)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x0c, 0x03, 0x0c, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // '        #39 (0x27)
  0x00, 0x00, 0x00, 0x00,
  0x00, 0xf0, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // (        #40 (0x28)
  0x00, 0x00, 0x00, 0x00,
  0xfc, 0x3f, 0xfc, 0x3f,
  0x03, 0xc0, 0x03, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // )        #41 (0x29)
  0x03, 0xc0, 0x03, 0xc0,
  0xfc, 0x3f, 0xfc, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // *        #42 (0x2a)
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x33, 0x00, 0x33,
  0x00, 0xfc, 0x00, 0xfc,
  0x00, 0x33, 0x00, 0x33,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x03, 0x00, 0x03, // +        #43 (0x2b)
  0x00, 0x03, 0x00, 0x03,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // ,        #44 (0x2c)
  0x33, 0x00, 0x33, 0x00,
  0x3c, 0x00, 0x3c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // -        #45 (0x2d)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // .        #46 (0x2e)
  0x0c, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x3c, 0x00, 0x3c, 0x00, // /        #47 (0x2f)
  0xc0, 0x00, 0xc0, 0x00,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0xf0, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3f, 0xf0, 0x3f, // 0        #48 (0x30)
  0xcc, 0xc0, 0xcc, 0xc0,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xcc, 0x0c, 0xcc,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // 1        #49 (0x31)
  0x0c, 0xc0, 0x0c, 0xc0,
  0xfc, 0xff, 0xfc, 0xff,
  0x0c, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0x30, 0xfc, 0x30, // 2        #50 (0x32)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0x3c, 0x0c, 0x3c,
  0x00, 0x00, 0x00, 0x00,
  
  0x30, 0x30, 0x30, 0x30, // 3        #51 (0x33)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0x3c, 0xf0, 0x3c,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0xff, 0x00, 0xff, // 4        #52 (0x34)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0xff, 0x0c, 0xff, // 5        #53 (0x35)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0xc0, 0xf0, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3f, 0xf0, 0x3f, // 6        #54 (0x36)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0xc0, 0xf0, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0xc0, 0x00, 0xc0, // 7        #55 (0x37)
  0xfc, 0xc0, 0xfc, 0xc0,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xfc, 0x00, 0xfc,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3c, 0xf0, 0x3c, // 8        #56 (0x38)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0x3c, 0xf0, 0x3c,
  0x00, 0x00, 0x00, 0x00,
  
  0x30, 0x3c, 0x30, 0x3c, // 9        #57 (0x39)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // :        #58 (0x3a)
  0x00, 0x00, 0x00, 0x00,
  0x30, 0x0c, 0x30, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // ;        #59 (0x3b)
  0x0c, 0x00, 0x0c, 0x00,
  0x3c, 0x0c, 0x3c, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // <        #60 (0x3c)
  0x00, 0x03, 0x00, 0x03,
  0xc0, 0x0c, 0xc0, 0x0c,
  0x30, 0x30, 0x30, 0x30,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // =        #61 (0x3d)
  0xc0, 0x0c, 0xc0, 0x0c,
  0xc0, 0x0c, 0xc0, 0x0c,
  0xc0, 0x0c, 0xc0, 0x0c,
  0xc0, 0x0c, 0xc0, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // >        #62 (0x3e)
  0x30, 0x30, 0x30, 0x30,
  0xc0, 0x0c, 0xc0, 0x0c,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x30, 0x00, 0x30, // ?        #63 (0x3f)
  0x00, 0xc0, 0x00, 0xc0,
  0xcc, 0xc3, 0xcc, 0xc3,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0x3c, 0x00, 0x3c,
  0x00, 0x00, 0x00, 0x00,
  
  0x3c, 0x30, 0x3c, 0x30, // @        #64 (0x40)
  0x0c, 0xc3, 0x0c, 0xc3,
  0xcc, 0xcc, 0xcc, 0xcc,
  0xcc, 0xcc, 0xcc, 0xcc,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0x3f, 0xfc, 0x3f, // A        #65 (0x41)
  0xc0, 0xc0, 0xc0, 0xc0,
  0xc0, 0xc0, 0xc0, 0xc0,
  0xc0, 0xc0, 0xc0, 0xc0,
  0xfc, 0x3f, 0xfc, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // B        #66 (0x42)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0x3c, 0xf0, 0x3c,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3f, 0xf0, 0x3f, // C        #67 (0x43)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x30, 0x30, 0x30, 0x30,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // D        #68 (0x44)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // E        #69 (0x45)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // F        #70 (0x46)
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3f, 0xf0, 0x3f, // G        #71 (0x47)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0x33, 0xf0, 0x33,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // H        #72 (0x48)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0xc0, 0x0c, 0xc0, // I        #73 (0x49)
  0x0c, 0xc0, 0x0c, 0xc0,
  0xfc, 0xff, 0xfc, 0xff,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0xc0, 0xf0, 0xc0, // J        #74 (0x4a)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0xf0, 0xff, 0xf0, 0xff,
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // K        #75 (0x4b)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0xc0, 0x0c, 0xc0, 0x0c,
  0x3c, 0xf0, 0x3c, 0xf0,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // L        #76 (0x4c)
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // M        #77 (0x4d)
  0x00, 0x30, 0x00, 0x30,
  0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x30, 0x00, 0x30,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x00, 0x00, 0x00,

  0xfc, 0xff, 0xfc, 0xff, // N        #78 (0x4e)
  0x00, 0x30, 0x00, 0x30,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x03, 0x00, 0x03,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x00, 0x00, 0x00,

  0xf0, 0x3f, 0xf0, 0x3f, // O        #79 (0x4f)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // P        #80 (0x50)
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0x3c, 0x00, 0x3c,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3f, 0xf0, 0x3f, // Q        #81 (0x51)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x3c, 0xc0, 0x3c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // R        #82 (0x52)
  0xc0, 0xc0, 0xc0, 0xc0,
  0xc0, 0xc0, 0xc0, 0xc0,
  0xc0, 0xc0, 0xc0, 0xc0,
  0x3c, 0x3f, 0x3c, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0x3c, 0x0c, 0x3c, // S        #83 (0x53)
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xc3, 0x0c, 0xc3,
  0xf0, 0xc0, 0xf0, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0xc0, 0x00, 0xc0, // T        #84 (0x54)
  0x00, 0xc0, 0x00, 0xc0,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0xff, 0xf0, 0xff, // U        #85 (0x55)
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0xf0, 0xff, 0xf0, 0xff,
  0x00, 0x00, 0x00, 0x00,
  
  0xc0, 0xff, 0xc0, 0xff, // V        #86 (0x56)
  0x30, 0x00, 0x30, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x30, 0x00, 0x30, 0x00,
  0xc0, 0xff, 0xc0, 0xff,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // W        #87 (0x57)
  0x30, 0x00, 0x30, 0x00,
  0xc0, 0x03, 0xc0, 0x03,
  0x30, 0x00, 0x30, 0x00,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x00, 0x00, 0x00,
  
  0x3c, 0xf0, 0x3c, 0xf0, // X        #88 (0x58)
  0xc0, 0x0c, 0xc0, 0x0c,
  0x00, 0x03, 0x00, 0x03,
  0xc0, 0x0c, 0xc0, 0x0c,
  0x3c, 0xf0, 0x3c, 0xf0,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0xfc, 0x00, 0xfc, // Y        #89 (0x59)
  0x00, 0x03, 0x00, 0x03,
  0xfc, 0x00, 0xfc, 0x00,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0xfc, 0x00, 0xfc,
  0x00, 0x00, 0x00, 0x00,
  
  0x3c, 0xc0, 0x3c, 0xc0, // Z        #90 (0x5a)
  0xcc, 0xc0, 0xcc, 0xc0,
  0x0c, 0xc3, 0x0c, 0xc3,
  0x0c, 0xcc, 0x0c, 0xcc,
  0x0c, 0xf0, 0x0c, 0xf0,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // [        #91 (0x5b)
  0x00, 0x00, 0x00, 0x00,
  0xfc, 0xff, 0xfc, 0xff,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0xf0, 0x00, 0xf0, // \        #92 (0x5c)
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x03, 0x00, 0x03,
  0xc0, 0x00, 0xc0, 0x00,
  0x3c, 0x00, 0x3c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // ]        #93 (0x5d)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x0c, 0x00, 0x0c, // ^        #94 (0x5e)
  0x00, 0x30, 0x00, 0x30,
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0x30, 0x00, 0x30,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0x00, 0x0c, 0x00, // _        #95 (0x5f)
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // `        #96 (0x60)
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x30, 0x0c, 0x30, 0x0c, // a        #97 (0x61)
  0xcc, 0x0c, 0xcc, 0x0c,
  0xcc, 0x0c, 0xcc, 0x0c,
  0xcc, 0x0c, 0xcc, 0x0c,
  0xfc, 0x03, 0xfc, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // b        #98 (0x62)
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0xf0, 0x03, 0xf0, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x03, 0xf0, 0x03, // c        #99 (0x63)
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x03, 0x0c, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x03, 0xf0, 0x03, // d        #100 (0x64)
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x03, 0xf0, 0x03, // e        #101 (0x65)
  0xcc, 0x0c, 0xcc, 0x0c,
  0xcc, 0x0c, 0xcc, 0x0c,
  0xcc, 0x0c, 0xcc, 0x0c,
  0xcc, 0x03, 0xcc, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x03, 0x00, 0x03, // f        #102 (0x66)
  0xfc, 0x3f, 0xfc, 0x3f,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xc3, 0x00, 0xc3,
  0x00, 0xc0, 0x00, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x3c, 0xf0, 0x3c, // g        #103 (0x67)
  0x0c, 0xcf, 0x0c, 0xcf,
  0xcc, 0xcc, 0xcc, 0xcc,
  0xcc, 0xfc, 0xcc, 0xfc,
  0xf0, 0xc0, 0xf0, 0xc0,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // h        #104 (0x68)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x0c, 0x00, 0x0c,
  0xfc, 0x03, 0xfc, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // i        #105 (0x69)
  0x0c, 0x0c, 0x0c, 0x0c,
  0xfc, 0xcf, 0xfc, 0xcf,
  0x0c, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0x30, 0x00, 0x30, 0x00, // j        #106 (0x6a)
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0xf0, 0xcf, 0xf0, 0xcf,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0xff, 0xfc, 0xff, // k        #107 (0x6b)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x03, 0x00, 0x03,
  0xc0, 0x0c, 0xc0, 0x0c,
  0x3c, 0x30, 0x3c, 0x30,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // l        #108 (0x6c)
  0x0c, 0xc0, 0x0c, 0xc0,
  0xfc, 0xff, 0xfc, 0xff,
  0x0c, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0x0f, 0xfc, 0x0f, // m        #109 (0x6d)
  0x00, 0x0c, 0x00, 0x0c,
  0xfc, 0x03, 0xfc, 0x03,
  0x00, 0x0c, 0x00, 0x0c,
  0xfc, 0x0f, 0xfc, 0x0f,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0x0f, 0xfc, 0x0f, // n        #110 (0x6e)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x0c, 0x00, 0x0c,
  0xfc, 0x03, 0xfc, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x03, 0xf0, 0x03, // o        #111 (0x6f)
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0xf0, 0x03, 0xf0, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0xfc, 0x3f, 0xfc, 0x3f, // p        #112 (0x70)
  0xcc, 0x30, 0xcc, 0x30,
  0xc0, 0x30, 0xc0, 0x30,
  0xc0, 0x30, 0xc0, 0x30,
  0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x0f, 0x00, 0x0f, // q        #113 (0x71)
  0xc0, 0x30, 0xc0, 0x30,
  0xc0, 0x30, 0xc0, 0x30,
  0xcc, 0x30, 0xcc, 0x30,
  0xfc, 0x3f, 0xfc, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0x00, 0x0c, 0x00, // r        #114 (0x72)
  0xfc, 0x0f, 0xfc, 0x0f,
  0x0c, 0x03, 0x0c, 0x03,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0x03, 0x0c, 0x03, // s        #115 (0x73)
  0xcc, 0x0c, 0xcc, 0x0c,
  0xcc, 0x0c, 0xcc, 0x0c,
  0xcc, 0x0c, 0xcc, 0x0c,
  0x30, 0x0c, 0x30, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // t        #116 (0x74)
  0xf0, 0xff, 0xf0, 0xff,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x30, 0x00, 0x30, 0x00,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x0f, 0xf0, 0x0f, // u        #117 (0x75)
  0x0c, 0x00, 0x0c, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x30, 0x00, 0x30, 0x00,
  0xfc, 0x0f, 0xfc, 0x0f,
  0x00, 0x00, 0x00, 0x00,
  
  0xc0, 0x0f, 0xc0, 0x0f, // v        #118 (0x76)
  0x30, 0x00, 0x30, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0x30, 0x00, 0x30, 0x00,
  0xc0, 0x0f, 0xc0, 0x0f,
  0x00, 0x00, 0x00, 0x00,
  
  0xf0, 0x0f, 0xf0, 0x0f, // w        #119 (0x77)
  0x0c, 0x00, 0x0c, 0x00,
  0xf0, 0x00, 0xf0, 0x00,
  0x0c, 0x00, 0x0c, 0x00,
  0xf0, 0x0f, 0xf0, 0x0f,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0x0c, 0x0c, 0x0c, // x        #120 (0x78)
  0x30, 0x03, 0x30, 0x03,
  0xc0, 0x00, 0xc0, 0x00,
  0x30, 0x03, 0x30, 0x03,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  
  0xcc, 0x3f, 0xcc, 0x3f, // y        #121 (0x79)
  0xcc, 0x00, 0xcc, 0x00,
  0xcc, 0x00, 0xcc, 0x00,
  0xcc, 0x00, 0xcc, 0x00,
  0xf0, 0x3f, 0xf0, 0x3f,
  0x00, 0x00, 0x00, 0x00,
  
  0x0c, 0x0c, 0x0c, 0x0c, // z        #122 (0x7a)
  0x3c, 0x0c, 0x3c, 0x0c,
  0xcc, 0x0c, 0xcc, 0x0c,
  0x0c, 0x0f, 0x0c, 0x0f,
  0x0c, 0x0c, 0x0c, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x03, 0x00, 0x03, // {        #123 (0x7b)
  0xf0, 0x3c, 0xf0, 0x3c,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0x30, 0x30, 0x30, 0x30,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // |        #124 (0x7c)
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0xfc, 0xff, 0xfc, 0xff,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
    
  0x30, 0x30, 0x30, 0x30, // }        #125 (0x7d)
  0x0c, 0xc0, 0x0c, 0xc0,
  0x0c, 0xc0, 0x0c, 0xc0,
  0xf0, 0x3c, 0xf0, 0x3c,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x00, 0x00, 0x00,

  0x00, 0x00, 0x00, 0x00, // ~        #126 (0x7e)
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x03, 0x00, 0x03,
  0x00, 0x0c, 0x00, 0x0c,
  0x00, 0x00, 0x00, 0x00,
  
  0x00, 0x00, 0x00, 0x00, // ???        #176 (0xb0)
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x10,
  0x00, 0x28, 0x00, 0x10,
  0x00, 0x00, 0x00, 0x00
};
