
void FUN_1007eb0c0(long *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  iVar4 = (int)lVar1 +
          ((int)(SUB168(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
          (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f)) * -86400000;
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(SUB168(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
               (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  }
  iVar3 = iVar4 >> 0x1f;
  iVar2 = iVar4 / 3600000 + iVar3;
  iVar4 = iVar4 + (iVar2 - iVar3) * -3600000;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2 - iVar3;
  }
  iVar3 = iVar4 >> 0x1f;
  iVar2 = iVar4 / 60000 + iVar3;
  iVar4 = iVar4 + (iVar2 - iVar3) * -60000;
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2 - iVar3;
  }
  iVar2 = iVar4 >> 0x1f;
  iVar3 = iVar4 / 1000 + iVar2;
  if (param_6 != (int *)0x0) {
    *param_6 = iVar4 + (iVar3 - iVar2) * -1000;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar3 - iVar2;
  }
  return;
}

