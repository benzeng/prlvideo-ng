
void FUN_100390970(undefined8 param_1,undefined4 param_2,undefined1 *param_3,char *param_4)

{
  switch(param_2) {
  default:
    *param_3 = 0;
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *param_3 = 2;
    break;
  case 3:
    *param_3 = 3;
    break;
  case 4:
    *param_3 = 4;
    break;
  case 5:
    *param_3 = 10;
    break;
  case 6:
    *param_3 = 10;
    *param_4 = '\x01';
    return;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    *param_3 = 5;
    *param_4 = (char)param_2 + -7;
    return;
  case 0xf:
    *param_3 = 0;
    *param_4 = '\x01';
    return;
  case 0x10:
    *param_3 = 3;
    *param_4 = '\x01';
    return;
  }
  *param_4 = '\0';
  return;
}

