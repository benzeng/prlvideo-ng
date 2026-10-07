
void FUN_1003e77e0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  undefined8 local_30;
  
  uVar1 = *(uint *)(param_1[0xb] + 2);
  local_30 = 0;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) || (iVar8 = (int)param_1[0x19], iVar8 == -1)) {
    uVar2 = *(uint *)(param_1[0xb] + 6);
    bVar7 = *(byte *)((long)param_1 + 0xec) & 0xf;
    iVar8 = 0x800;
    if (bVar7 < 0xe) {
      iVar8 = *(int *)(&DAT_100b405e0 + (ulong)bVar7 * 4);
    }
    iVar8 = iVar8 * (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                    );
    iVar5 = FUN_1003e1900(*(undefined4 *)((long)param_1 + 0x6c),iVar8,*(undefined1 *)param_1[0xb]);
    if (iVar5 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e791e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  pcVar3 = *(code **)(*param_1 + 0xb0);
  uVar6 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar5 = (*pcVar3)(param_1,uVar6,param_1[0xb],1,param_1[10],iVar8,param_1[0xc],0x12,&local_30);
  if (iVar5 < 0) {
    pbVar4 = (byte *)param_1[0xc];
    if ((*pbVar4 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar4[0xd] | (uint)pbVar4[0xc] << 8 | (uint)pbVar4[2] << 0x10);
    }
    else {
      FUN_1008e3970("","DVDImage",0,"[DVD] Write12 failed! LBA = %x Bytes = %u Error=%d",
                    uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                    iVar8,*(undefined4 *)((long)param_1 + 0xc4));
      (**(code **)(*param_1 + 0x268))(param_1,0x30300,param_1[0xc]);
    }
  }
  else {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}

