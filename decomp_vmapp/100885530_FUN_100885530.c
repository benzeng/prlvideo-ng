
undefined8 FUN_100885530(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar2 = 0;
    if (0 < (long)iVar1) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + -8 + (long)iVar1 * 8);
      *param_1 = iVar1 + -1;
    }
  }
  return uVar2;
}

