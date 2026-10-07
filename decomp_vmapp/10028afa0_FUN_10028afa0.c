
void FUN_10028afa0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((lVar1 == 0) || (lVar2 = param_1[7], lVar2 == 0)) {
    return;
  }
  if ((*(byte *)((long)param_1 + 0x31) & 0x10) != 0) {
    FUN_1004033b0(lVar1 + 0x3a148,param_1);
  }
  if (-1 < param_2) {
    FUN_1002886c0(lVar1,lVar2);
    return;
  }
  FUN_100288630(lVar1,*(undefined4 *)(lVar1 + 0x90),lVar2);
  return;
}

