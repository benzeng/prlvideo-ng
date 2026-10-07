
void FUN_10038d780(undefined4 *param_1,long param_2,uint param_3,uint param_4,int param_5,
                  uint param_6)

{
  long lVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  if (iVar2 == 0x8893) {
    (*DAT_1011c5770)(0);
    iVar2 = param_1[3];
  }
  (*DAT_1011c5708)(iVar2,*param_1);
  if (-1 < (int)param_3) {
    lVar1 = (ulong)param_3 + *(long *)(param_2 + 0x920);
    if (param_4 == 0) {
      iVar2 = param_1[1];
      if (((param_6 & 0x2000) == 0) && (iVar2 != param_5)) goto LAB_10038d80d;
    }
    else {
      if ((param_6 & 0x2000) == 0) {
LAB_10038d80d:
                    /* WARNING: Could not recover jumptable at 0x00010038d831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_1011c57e8)(param_1[3],(ulong)param_4,param_5,lVar1,DAT_1011c57e8);
        return;
      }
      iVar2 = param_1[1];
    }
                    /* WARNING: Could not recover jumptable at 0x00010038d857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c57d8)(param_1[3],iVar2,lVar1,param_1[2],DAT_1011c57d8);
    return;
  }
  if (param_4 == 0) {
    iVar2 = param_1[1];
    if (((param_6 & 0x2000) == 0) && (iVar2 != param_5)) goto LAB_10038d87e;
  }
  else {
    if ((param_6 & 0x2000) == 0) goto LAB_10038d87e;
    iVar2 = param_1[1];
  }
  (*DAT_1011c57d8)(param_1[3],iVar2,0,param_1[2]);
LAB_10038d87e:
  lVar1 = (*DAT_1011c64a0)(param_1[3],0x88b9);
  if (lVar1 != 0) {
    FUN_1002fcbe0(param_2,param_3,param_5,lVar1 + (ulong)param_4);
                    /* WARNING: Could not recover jumptable at 0x00010038d8c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c6ed0)(param_1[3]);
    return;
  }
  return;
}

