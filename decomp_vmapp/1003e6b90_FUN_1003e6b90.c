
void FUN_1003e6b90(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  undefined8 local_28;
  ulong local_20;
  
  local_20 = 0;
  local_28 = 0;
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar4 = (*pcVar1)(param_1,uVar3,param_1[0xb],2,&local_28,8,param_1[0xc],0x12,&local_20);
  if (iVar4 < 0) {
    pbVar2 = (byte *)param_1[0xc];
    if ((*pbVar2 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar2[0xd] | (uint)pbVar2[0xc] << 8 | (uint)pbVar2[2] << 0x10);
    }
    else {
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  else {
    if (8 < local_20) {
      local_20 = 8;
    }
    sVar5 = 8;
    if ((ulong)*(uint *)(param_1 + 0x19) < 9) {
      sVar5 = (ulong)*(uint *)(param_1 + 0x19);
    }
    _memcpy((void *)param_1[9],&local_28,sVar5);
    (**(code **)(*param_1 + 0x278))(param_1,local_20 & 0xffffffff,8);
  }
  return;
}

