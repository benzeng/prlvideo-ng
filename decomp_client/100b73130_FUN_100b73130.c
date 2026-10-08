
undefined8 FUN_100b73130(long param_1)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 2:
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    FUN_100df99c0("","License",3," * Connecting to the KA server %s",*(undefined8 *)(param_1 + 0x40)
                 );
    return 0;
  case 3:
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar1 = " * Sending request";
    break;
  case 4:
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar1 = " * Receive data";
    break;
  case 5:
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    pcVar1 = " * Install updated license";
    break;
  default:
    goto switchD_100b73151_default;
  }
  FUN_100df99c0("","License",3,pcVar1);
switchD_100b73151_default:
  return 0;
}

