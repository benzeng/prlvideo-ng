
undefined8 FUN_10002ea10(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(long *)(*param_2 + 0x10) + 8 + *param_2);
  if (iVar1 == 2) {
    FUN_10002f0f0();
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffb;
    if (iVar1 == 1) {
      uVar2 = FUN_10002ea40();
      return uVar2;
    }
  }
  return uVar2;
}

