
void FUN_10028b020(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x31) & 0x10) != 0) {
    FUN_1004033b0(param_1 + 0x3a148);
  }
  if (-1 < param_3) {
    FUN_1002886c0(param_1,lVar1);
    return;
  }
  FUN_100288630(param_1,*(undefined4 *)(param_1 + 0x90),lVar1);
  return;
}

