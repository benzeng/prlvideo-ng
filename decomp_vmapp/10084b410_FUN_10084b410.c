
int FUN_10084b410(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = 0;
  if ((long)iVar1 != 0) {
    iVar2 = FUN_10084b320(*(undefined8 *)(*param_1 + -8 + (long)iVar1 * 8));
    iVar2 = iVar2 + (iVar1 + -1) * 0x40;
  }
  return iVar2;
}

