
undefined8 FUN_10079e940(long param_1,long *param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = 3;
  if ((param_3 < *(int *)(lVar1 + 4)) &&
     (lVar1 = *(long *)(lVar1 + *(long *)(lVar1 + 0x10) + (long)param_3 * 8),
     param_4 < *(int *)(lVar1 + 4))) {
    lVar1 = *(long *)(lVar1 + *(long *)(lVar1 + 0x10) + (long)param_4 * 8);
    uVar2 = 2;
    if (lVar1 != 0) {
      *param_2 = lVar1;
      uVar2 = 4;
    }
  }
  return uVar2;
}

