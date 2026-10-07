
void FUN_1003e7640(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 local_30;
  
  uVar1 = *(uint *)(param_1[0xb] + 2);
  local_30 = 0;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) || (iVar7 = (int)param_1[0x19], iVar7 == -1)) {
    bVar6 = *(byte *)((long)param_1 + 0xec) & 0xf;
    iVar7 = 0x800;
    if (bVar6 < 0xe) {
      iVar7 = *(int *)(&DAT_100b405e0 + (ulong)bVar6 * 4);
    }
    iVar7 = iVar7 * (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                                   (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
    iVar4 = FUN_1003e1900(*(undefined4 *)((long)param_1 + 0x6c),iVar7,*(undefined1 *)param_1[0xb]);
    if (iVar4 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e7782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  pcVar2 = *(code **)(*param_1 + 0xb0);
  uVar5 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar4 = (*pcVar2)(param_1,uVar5,param_1[0xb],1,param_1[10],iVar7,param_1[0xc],0x12,&local_30);
  if (iVar4 < 0) {
    pbVar3 = (byte *)param_1[0xc];
    if ((*pbVar3 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar3[0xd] | (uint)pbVar3[0xc] << 8 | (uint)pbVar3[2] << 0x10);
    }
    else {
      FUN_1008e3970("","DVDImage",0,"[DVD] Write10 failed! LBA = %x Bytes = %u Error=%d",
                    uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                    iVar7,*(undefined4 *)((long)param_1 + 0xc4));
      (**(code **)(*param_1 + 0x268))(param_1,0x30300,param_1[0xc]);
    }
  }
  else {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}

