
undefined8 FUN_10002e720(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(long *)(*param_1 + 0x10) + 8 + *param_1);
  if (iVar1 == 2) {
    FUN_10002f0f0(2,param_1,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffb;
    if (iVar1 == 1) {
      uVar2 = FUN_10002ea40(param_3);
      return uVar2;
    }
  }
  return uVar2;
}

