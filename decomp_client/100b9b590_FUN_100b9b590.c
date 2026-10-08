
undefined8 FUN_100b9b590(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_1023118c8 == 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    lVar1 = FUN_100b93e00();
    if ((param_2 != (undefined4 *)0x0) && (lVar1 != 0)) {
      uVar2 = FUN_100bc1030(DAT_1022cf508);
      if ((int)uVar2 == 0) {
        *param_2 = *(undefined4 *)(lVar1 + 0xe0);
        FUN_100bc10f0(DAT_1022cf508);
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar2 = 0xfffffffd;
  }
  uVar2 = FUN_100b9d470(uVar2,0);
  return uVar2;
}

