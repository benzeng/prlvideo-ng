
undefined8 FUN_100754410(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 0x10);
    uVar2 = 0;
    if (param_2 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)param_2) * 8);
    }
  }
  return uVar2;
}

