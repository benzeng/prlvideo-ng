
bool FUN_10014aaa0(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar3 = 8;
  if (((param_3 != 0) && (uVar3 = 7, (int)param_3 < 0)) && (param_3 < 0xfffffff9)) {
    uVar4 = 0x1f;
    do {
      uVar1 = uVar4;
      if ((param_3 >> (uVar4 & 0x1f) & 1) == 0) break;
      uVar1 = uVar4 - 1;
      bVar2 = 1 < (int)uVar4;
      uVar4 = uVar1;
    } while (bVar2);
    if (0 < (int)uVar1) {
      do {
        if ((param_3 >> (uVar1 & 0x1f) & 1) != 0) {
          return (bool)7;
        }
        bVar2 = 1 < (int)uVar1;
        uVar1 = uVar1 - 1;
      } while (bVar2);
    }
    uVar3 = 2;
    if (param_2 != 0) {
      param_2 = param_2 & ~param_3;
      uVar3 = 1;
      if (param_2 != 0) {
        return param_2 == ~param_3;
      }
    }
  }
  return (bool)uVar3;
}

