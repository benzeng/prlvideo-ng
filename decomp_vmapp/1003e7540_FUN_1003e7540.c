
void FUN_1003e7540(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0xc;
  if ((*(byte *)((long)param_1 + 0x6c) & 2) == 0) {
    iVar4 = 0xc;
    if ((int)param_1[0x19] != -1) {
      iVar4 = (int)param_1[0x19];
    }
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar4 = (*pcVar1)(param_1,uVar3,param_1[0xb],1,param_1[10],iVar4,param_1[0xc],0x12,0);
  if (iVar4 < 0) {
    pbVar2 = (byte *)param_1[0xc];
    if ((*pbVar2 & 0x70) != 0x70) {
                    /* WARNING: Could not recover jumptable at 0x0001003e763a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400);
      return;
    }
    if (pbVar2[0xd] != 0 || (pbVar2[0xc] != 0 || pbVar2[2] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001003e7606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x270))(param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e7618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}

