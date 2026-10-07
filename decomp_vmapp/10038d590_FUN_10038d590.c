
void FUN_10038d590(undefined4 *param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5
                  ,ulong param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = param_1[3];
  if (iVar1 == 0x8893) {
    (*DAT_1011c5770)(0);
    iVar1 = param_1[3];
  }
  (*DAT_1011c5708)(iVar1,*param_1);
  uVar2 = param_5 + param_4;
  if ((uint)param_1[1] < uVar2) {
    param_1[1] = uVar2;
    uVar2 = (uVar2 - 1) + param_1[4];
    (*DAT_1011c57d8)(param_1[3],uVar2 - uVar2 % (uint)param_1[4],0,param_1[2]);
  }
  uVar2 = 0x2a;
  if (param_4 == 0) {
    if (((param_6 & 0x2000) != 0) || (param_1[1] == param_5)) goto LAB_10038d62e;
  }
  else if ((param_6 & 0x2000) != 0) goto LAB_10038d62e;
  uVar2 = (uint)((param_6 & 0xffffffff) >> 7) & 0x20 | 2;
LAB_10038d62e:
  lVar3 = (*DAT_1011c64b0)(param_1[3],param_4,param_5,uVar2);
  if (lVar3 == 0) {
    return;
  }
  FUN_1002fcbe0(param_2,param_3,param_5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010038d66e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c6ed0)(param_1[3]);
  return;
}

