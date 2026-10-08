
byte FUN_100313ec0(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if (param_2 < 0x3c60) {
    if (param_2 != 0x3b18) goto LAB_100313f10;
  }
  else {
    if (param_2 < 0x3c7a) {
      if (param_2 != 0x3c60) {
        if (param_2 == 0x3c78) {
          return 1;
        }
LAB_100313f10:
        bVar1 = CMessageDataProvider::isQtNotificationMessage(param_1);
        return bVar1;
      }
    }
    else if ((param_2 != 0x3c7a) && (param_2 != 0x3c80)) goto LAB_100313f10;
    bVar1 = FUN_100d80630(1);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}

