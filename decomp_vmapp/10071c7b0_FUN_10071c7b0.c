
undefined8 FUN_10071c7b0(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_1011ccb40 == 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    lVar1 = FUN_100715020();
    if ((param_2 != (undefined4 *)0x0) && (lVar1 != 0)) {
      uVar2 = FUN_100742250(DAT_10116db38);
      if ((int)uVar2 == 0) {
        *param_2 = *(undefined4 *)(lVar1 + 0xe0);
        FUN_100742310(DAT_10116db38);
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar2 = 0xfffffffd;
  }
  uVar2 = FUN_10071e690(uVar2,0);
  return uVar2;
}

