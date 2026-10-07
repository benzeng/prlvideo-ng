
undefined8 FUN_1006c21f0(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1006b3dc0();
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = FUN_1006c4b20(param_2 & 0xfffffff);
    if (-1 < (int)uVar2) {
      FUN_1006c4880(param_2 & 0xfffffff);
      uVar2 = 0;
    }
  }
  return uVar2;
}

