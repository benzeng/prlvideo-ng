
void FUN_10038d2a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = param_4;
  param_1[2] = param_3;
  param_1[3] = param_2;
  param_1[4] = 1;
  (*DAT_1011c5e38)(1,param_1);
  iVar1 = param_1[3];
  if (iVar1 == 0x8893) {
    (*DAT_1011c5770)(0);
    iVar1 = param_1[3];
  }
  (*DAT_1011c5708)(iVar1,*param_1);
  uVar2 = param_1[1] + -1 + param_1[4];
  (*DAT_1011c57d8)(param_1[3],uVar2 - uVar2 % (uint)param_1[4],0,param_1[2]);
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    (*DAT_1011c7490)(param_1[3],0x8a12,0);
                    /* WARNING: Could not recover jumptable at 0x00010038d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c7490)(param_1[3],0x8a13,0);
    return;
  }
  return;
}

