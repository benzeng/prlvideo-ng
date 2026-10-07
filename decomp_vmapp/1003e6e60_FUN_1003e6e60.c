
void FUN_1003e6e60(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong local_38;
  
  uVar4 = *(uint *)(param_1[0xb] + 2);
  uVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
  uVar4 = uVar3 | uVar4 << 0x18;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar7 = *(uint *)(param_1 + 0x19), uVar7 == 0xffffffff)) {
    uVar7 = *(uint *)(param_1[0xb] + 6);
    uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8) << 0xb;
    iVar5 = FUN_1003e1900(*(undefined4 *)((long)param_1 + 0x6c),uVar7,*(undefined1 *)param_1[0xb]);
    if (iVar5 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e6fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  local_38 = 0;
  if ((((char)param_1[8] != '\0') && (*(uint *)((long)param_1 + 0x44) != 0)) &&
     ((uVar7 >> 0xb) + uVar4 <= *(uint *)((long)param_1 + 0x44))) {
    _memcpy((void *)param_1[9],(void *)((ulong)(uVar3 << 0xb) + param_1[7]),(ulong)uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001003e6ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))(param_1,uVar7,uVar7);
    return;
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar6 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar5 = (*pcVar1)(param_1,uVar6,param_1[0xb],2,param_1[9],(ulong)uVar7,param_1[0xc],0x12,&local_38
                   );
  if ((iVar5 < 0) || (local_38 == 0)) {
    pbVar2 = (byte *)param_1[0xc];
    if ((*pbVar2 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar2[0xd] | (uint)pbVar2[0xc] << 8 | (uint)pbVar2[2] << 0x10);
    }
    else {
      FUN_1008e3970("","DVDImage",0,"[DVD] Read12 failed! LBA = %x Bytes = %u Error=%d",uVar4,uVar7,
                    *(undefined4 *)((long)param_1 + 0xc4));
      (**(code **)(*param_1 + 0x268))(param_1,0x31100,param_1[0xc]);
    }
  }
  else {
    if (uVar7 < (uint)local_38) {
      local_38 = (ulong)uVar7;
    }
    (**(code **)(*param_1 + 0x278))(param_1,local_38,uVar7);
  }
  return;
}

