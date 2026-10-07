
int FUN_10072ee00(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = 0;
  if ((long)iVar1 != 0) {
    iVar2 = FUN_10072d8e0(*(undefined8 *)(*(long *)(param_1 + 0x68) + -8 + (long)iVar1 * 8));
    iVar2 = iVar2 + (iVar1 + -1) * 0x40;
  }
  return iVar2;
}

