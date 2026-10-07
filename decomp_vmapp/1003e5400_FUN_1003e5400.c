
void FUN_1003e5400(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong local_28;
  
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
       (uVar5 = *(uint *)(param_1 + 0x19), uVar5 == 0xffffffff)) {
      uVar5 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                             (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
    }
    local_28 = 0;
    pcVar1 = *(code **)(*param_1 + 0xb0);
    uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
    uVar6 = (ulong)uVar5;
    iVar4 = (*pcVar1)(param_1,uVar3,param_1[0xb],2,param_1[9],uVar6,param_1[0xc],0x12,&local_28);
    if ((iVar4 < 0) || (local_28 == 0)) {
      pbVar2 = (byte *)param_1[0xc];
      if ((*pbVar2 & 0x70) == 0x70) {
        (**(code **)(*param_1 + 0x270))
                  (param_1,(uint)pbVar2[0xd] | (uint)pbVar2[0xc] << 8 | (uint)pbVar2[2] << 0x10);
      }
      else {
        (**(code **)(*param_1 + 0x268))(param_1,0x52400);
      }
    }
    else {
      if (uVar6 < local_28) {
        local_28 = uVar6;
      }
      (**(code **)(*param_1 + 0x278))(param_1,local_28,uVar6);
    }
    return;
  }
  FUN_1003e2a70(param_1);
  return;
}

