
void FUN_1003e5650(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong local_28;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar6 = *(uint *)(param_1 + 0x19), uVar6 == 0xffffffff)) {
    uVar3 = CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                     (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
    uVar6 = 0x10000;
    if (uVar3 != 0) {
      uVar6 = (uint)uVar3;
    }
    iVar4 = FUN_1003e1900(*(undefined4 *)((long)param_1 + 0x6c),uVar6,*(undefined1 *)param_1[0xb]);
    if (iVar4 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e5780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  local_28 = 0;
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar5 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  uVar7 = (ulong)uVar6;
  iVar4 = (*pcVar1)(param_1,uVar5,param_1[0xb],2,param_1[9],uVar7,param_1[0xc],0x12,&local_28);
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
    if (uVar7 < local_28) {
      local_28 = uVar7;
    }
    (**(code **)(*param_1 + 0x278))(param_1,local_28,uVar7);
  }
  return;
}

