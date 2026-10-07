
void FUN_1003e5530(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)((long)param_1 + 0x2c) == 0) {
    FUN_1003e14a0(param_1);
    return;
  }
  bVar3 = *(byte *)(param_1[0xb] + 4) & 3;
  if (((bVar3 != 2) || (*(int *)((long)param_1 + 0xdc) != 0x802)) || ((char)param_1[0x1b] == '\0'))
  {
    pcVar1 = *(code **)(*param_1 + 0xb0);
    uVar4 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
    iVar5 = (*pcVar1)(param_1,uVar4,param_1[0xb],0,0,0,param_1[0xc],0x12,0);
    if (iVar5 < 0) {
      pbVar2 = (byte *)param_1[0xc];
      if ((*pbVar2 & 0x70) == 0x70) {
                    /* WARNING: Could not recover jumptable at 0x0001003e5638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x270))
                  (param_1,(uint)pbVar2[0xd] | (uint)pbVar2[0xc] << 8 | (uint)pbVar2[2] << 0x10);
        return;
      }
    }
    else if (bVar3 == 2) {
      *(undefined4 *)(param_1 + 0x11) = 0;
      *(undefined4 *)((long)param_1 + 0x84) = 1;
      *(undefined4 *)((long)param_1 + 0x7c) = 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e564a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}

