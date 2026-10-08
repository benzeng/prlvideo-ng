
undefined1 FUN_1003b3450(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_1 < 9) {
    if (param_1 != 3) {
      if (param_1 == 4) {
        cVar1 = FUN_100110b70(param_2,param_3);
        if (cVar1 != '\0') {
          return 1;
        }
        uVar2 = FUN_100110b90(param_2,param_3);
        return uVar2;
      }
      goto LAB_1003b34c3;
    }
  }
  else {
    if (param_1 == 9) {
      cVar1 = FUN_100110a80(param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar2 = FUN_100110aa0(param_2,param_3);
      return uVar2;
    }
    if (param_1 != 0x16) goto LAB_1003b34c3;
  }
  cVar1 = FUN_100110a50(param_2,param_3);
  if (cVar1 != '\0') {
    return 1;
  }
LAB_1003b34c3:
  uVar2 = FUN_100110a10(param_2,param_3);
  return uVar2;
}

