
ulong FUN_100313e20(int param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 0x3c94) {
    if (param_2 < 0x3c19) {
      uVar2 = param_2 - 0x3b15;
      if (0x1d < uVar2) goto LAB_100313eb2;
      uVar3 = 0x2800000b;
    }
    else {
      if (0x3c5d < param_2) {
        uVar2 = param_2 - 0x3c5e;
        if (uVar2 < 0x28) {
          if ((0x80d4004003U >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
            return 1;
          }
          if ((0x400000004U >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
            uVar1 = FUN_100d80630(1);
            return uVar1 ^ 1;
          }
        }
        goto LAB_100313eb2;
      }
      uVar2 = param_2 - 0x3c19;
      if (0x11 < uVar2) goto LAB_100313eb2;
      uVar3 = 0x3fe01;
    }
  }
  else {
    uVar2 = param_2 - 0x3c94;
    if (6 < uVar2) goto LAB_100313eb2;
    uVar3 = 0x79;
  }
  if ((uVar3 >> (uVar2 & 0x1f) & 1) != 0) {
    return 1;
  }
LAB_100313eb2:
  uVar1 = CMessageDataProvider::isNotificationMessage(param_1);
  return uVar1;
}

