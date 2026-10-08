
undefined8 FUN_100b9b610(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_1023118c8 == 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    lVar1 = FUN_100b93e00();
    if (lVar1 != 0) {
      uVar2 = FUN_100bc1030(DAT_1022cf508);
      if ((int)uVar2 == 0) {
        if ((*(byte *)(lVar1 + 0xee) & 0x10) == 0) {
          *(long *)(lVar1 + 0xe0) = (long)param_2;
        }
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

