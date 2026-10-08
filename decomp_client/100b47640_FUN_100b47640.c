
undefined8 FUN_100b47640(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100b3d4d0();
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = FUN_100b49f70(param_2 & 0xfffffff);
    if (-1 < (int)uVar2) {
      FUN_100b49cd0(param_2 & 0xfffffff);
      uVar2 = 0;
    }
  }
  return uVar2;
}

