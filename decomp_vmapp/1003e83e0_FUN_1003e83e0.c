
void FUN_1003e83e0(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar5 = *(uint *)(param_1 + 0x19), uVar5 == 0xffffffff)) {
    uVar5 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar4 = (*pcVar1)(param_1,uVar3,param_1[0xb],2,param_1[9],uVar5,param_1[0xc],0x12,0);
  if (-1 < iVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001003e8474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  pbVar2 = (byte *)param_1[0xc];
  if ((*pbVar2 & 0x70) == 0x70) {
                    /* WARNING: Could not recover jumptable at 0x0001003e84b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x270))
              (param_1,(uint)pbVar2[0xd] | (uint)pbVar2[0xc] << 8 | (uint)pbVar2[2] << 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e84d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x268))(param_1,0x52600);
  return;
}

