
int FUN_1008a08c0(long *param_1,undefined1 *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = -1;
  if (lVar1 != 0) {
    uVar2 = FUN_10084b410(lVar1);
    if (param_2 != (undefined1 *)0x0) {
      if ((uVar2 & 7) == 0) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
      FUN_10084bdf0(lVar1,param_2);
    }
    iVar3 = FUN_10084b410(lVar1);
    iVar3 = ((int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3) + (uint)((uVar2 & 7) == 0)
    ;
  }
  return iVar3;
}

