
void FUN_1003e86e0(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)((long)param_1 + 0x2c) == 0) {
    FUN_1003e2e40(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1[0xb] + 4);
  pcVar2 = *(code **)(*param_1 + 0xb0);
  uVar4 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar5 = (*pcVar2)(param_1,uVar4,param_1[0xb],0,0,0,param_1[0xc],0x12,0);
  if (iVar5 < 0) {
    pbVar3 = (byte *)param_1[0xc];
    if ((*pbVar3 & 0x70) == 0x70) {
                    /* WARNING: Could not recover jumptable at 0x0001003e87cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar3[0xd] | (uint)pbVar3[0xc] << 8 | (uint)pbVar3[2] << 0x10);
      return;
    }
  }
  else if ((bVar1 & 3) == 2) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 1;
    *(undefined4 *)((long)param_1 + 0x7c) = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e87dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}

