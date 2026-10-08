
undefined8 FUN_10014aa40(undefined8 param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 8;
  if (((param_2 != 0) && (uVar2 = 7, (int)param_2 < 0)) && (param_2 < 0xfffffff9)) {
    uVar3 = 0x20;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 - 1;
      if ((param_2 >> (uVar3 & 0x1f) & 1) == 0) {
        uVar4 = uVar4 - 1;
        goto LAB_10014aa77;
      }
    } while (1 < (int)uVar3);
    uVar4 = uVar4 - 2;
LAB_10014aa77:
    if ((int)uVar4 < 1) {
      return 0;
    }
    while ((param_2 >> (uVar4 & 0x1f) & 1) == 0) {
      bVar1 = (int)uVar4 < 2;
      uVar4 = uVar4 - 1;
      if (bVar1) {
        return 0;
      }
    }
  }
  return uVar2;
}

