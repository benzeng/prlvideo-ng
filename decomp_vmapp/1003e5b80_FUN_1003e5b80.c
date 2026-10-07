
void FUN_1003e5b80(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  ulong local_38;
  
  uVar5 = *(uint *)(param_1[0xb] + 2);
  uVar3 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8;
  uVar5 = uVar3 | uVar5 << 0x18;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar9 = *(uint *)(param_1 + 0x19), uVar9 == 0xffffffff)) {
    uVar4 = CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                     (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
    uVar9 = (uint)uVar4 << 0xb;
    iVar6 = FUN_1003e1900(*(undefined4 *)((long)param_1 + 0x6c),(ulong)uVar4 << 0xb,
                          *(undefined1 *)param_1[0xb]);
    if (iVar6 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e5ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  local_38 = 0;
  if ((((char)param_1[8] != '\0') && (*(uint *)((long)param_1 + 0x44) != 0)) &&
     ((uVar9 >> 0xb) + uVar5 <= *(uint *)((long)param_1 + 0x44))) {
    _memcpy((void *)param_1[9],(void *)((ulong)(uVar3 << 0xb) + param_1[7]),(ulong)uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001003e5d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))(param_1,uVar9,uVar9);
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar7 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  uVar8 = (ulong)uVar9;
  iVar6 = (*pcVar1)(param_1,uVar7,param_1[0xb],2,param_1[9],uVar8,param_1[0xc],0x12,&local_38);
  if ((iVar6 < 0) || (local_38 == 0)) {
    pbVar2 = (byte *)param_1[0xc];
    if ((*pbVar2 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar2[0xd] | (uint)pbVar2[0xc] << 8 | (uint)pbVar2[2] << 0x10);
    }
    else {
      FUN_1008e3970("","DVDImage",0,"[DVD] Read10 failed! LBA = %x Bytes = %u Error=%d",uVar5,uVar9,
                    *(undefined4 *)((long)param_1 + 0xc4));
      (**(code **)(*param_1 + 0x268))(param_1,0x31100,param_1[0xc]);
    }
  }
  else {
    if (uVar8 < local_38) {
      local_38 = uVar8;
    }
    (**(code **)(*param_1 + 0x278))(param_1,local_38,uVar9);
  }
  return;
}

