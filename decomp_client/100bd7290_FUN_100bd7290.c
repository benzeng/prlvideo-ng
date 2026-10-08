
undefined8 FUN_100bd7290(int param_1)

{
  if (param_1 < 0x2c4) {
    if (param_1 == 0x199) {
      return 0x13;
    }
    if (param_1 == 0x19f) {
      return 0x17;
    }
  }
  else {
    switch(param_1) {
    case 0x2c4:
      return 0xf;
    case 0x2c5:
      return 0x10;
    case 0x2c6:
      return 0x11;
    case 0x2c7:
      return 0x12;
    case 0x2c8:
      return 0x14;
    case 0x2c9:
      return 0x15;
    case 0x2ca:
      return 0x16;
    case 0x2cb:
      return 0x18;
    case 0x2cc:
      return 0x19;
    case 0x2d1:
      return 1;
    case 0x2d2:
      return 2;
    case 0x2d3:
      return 3;
    case 0x2d4:
      return 4;
    case 0x2d5:
      return 5;
    case 0x2d6:
      return 6;
    case 0x2d7:
      return 7;
    case 0x2d8:
      return 8;
    case 0x2d9:
      return 9;
    case 0x2da:
      return 10;
    case 0x2db:
      return 0xb;
    case 0x2dc:
      return 0xc;
    case 0x2dd:
      return 0xd;
    case 0x2de:
      return 0xe;
    }
  }
  return 0;
}

