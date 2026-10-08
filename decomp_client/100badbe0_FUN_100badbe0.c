
int FUN_100badbe0(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = 0;
  if ((long)iVar1 != 0) {
    iVar2 = FUN_100bac6c0(*(undefined8 *)(*(long *)(param_1 + 0x68) + -8 + (long)iVar1 * 8));
    iVar2 = iVar2 + (iVar1 + -1) * 0x40;
  }
  return iVar2;
}

