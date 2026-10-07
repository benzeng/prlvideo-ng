
undefined8 FUN_1003e6870(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong local_28;
  
  if ((int)param_1[0x15] != 0) {
    uVar4 = FUN_1003e1240(param_1);
    return uVar4;
  }
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar5 = *(uint *)(param_1 + 0x19), uVar5 == 0xffffffff)) {
    uVar5 = (uint)*(byte *)(param_1[0xb] + 4);
  }
  local_28 = 0;
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar2 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  uVar6 = (ulong)uVar5;
  iVar3 = (*pcVar1)(param_1,uVar2,param_1[0xb],2,param_1[9],uVar6,param_1[0xc],0x12,&local_28);
  if ((iVar3 < 0) || (local_28 == 0)) {
    uVar4 = (**(code **)(*param_1 + 0x260))(param_1);
  }
  else {
    if (uVar6 < local_28) {
      local_28 = uVar6;
    }
    (**(code **)(*param_1 + 0x278))(param_1,local_28,uVar6);
    *(undefined4 *)(param_1 + 0x15) = 0;
    ___bzero(param_1[0xc],(int)param_1[0xd]);
    uVar4 = 0;
  }
  return uVar4;
}

