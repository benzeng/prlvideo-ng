
void FUN_1003e6a40(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong local_30;
  
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
       (uVar6 = *(uint *)(param_1 + 0x19), uVar6 == 0xffffffff)) {
      uVar6 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 3),
                             (char)((ushort)*(undefined2 *)(param_1[0xb] + 3) >> 8));
    }
    bVar1 = *(byte *)(param_1[0xb] + 1);
    local_30 = 0;
    pcVar2 = *(code **)(*param_1 + 0xb0);
    uVar4 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
    uVar7 = (ulong)uVar6;
    iVar5 = (*pcVar2)(param_1,uVar4,param_1[0xb],2,param_1[9],uVar7,param_1[0xc],0x12,&local_30);
    if ((iVar5 < 0) || (local_30 == 0)) {
      pbVar3 = (byte *)param_1[0xc];
      if ((*pbVar3 & 0x70) == 0x70) {
        (**(code **)(*param_1 + 0x270))
                  (param_1,(uint)pbVar3[0xd] | (uint)pbVar3[0xc] << 8 | (uint)pbVar3[2] << 0x10);
      }
      else {
        (**(code **)(*param_1 + 0x268))(param_1,0x52400);
      }
    }
    else {
      if (((bVar1 & 1) == 0) && ((*(byte *)((long)param_1 + 0x29) & 1) != 0)) {
        *(byte *)(param_1[9] + 7) = *(byte *)(param_1[9] + 7) | 2;
      }
      if (uVar7 < local_30) {
        local_30 = uVar7;
      }
      (**(code **)(*param_1 + 0x278))(param_1,local_30,uVar7);
    }
    return;
  }
  FUN_1003e1360(param_1);
  return;
}

