
void FUN_1003e7980(long *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined8 local_28;
  
  local_28 = 0;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) || (iVar6 = (int)param_1[0x19], iVar6 == -1)) {
    bVar5 = *(byte *)((long)param_1 + 0xec) & 0xf;
    iVar6 = 0x800;
    if (bVar5 < 0xe) {
      iVar6 = *(int *)(&DAT_100b405e0 + (ulong)bVar5 * 4);
    }
    iVar6 = iVar6 * (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                                   (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
    iVar3 = FUN_1003e1900(*(undefined4 *)((long)param_1 + 0x6c),iVar6,*(undefined1 *)param_1[0xb]);
    if (iVar3 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e7aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  uVar4 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar6 = (*pcVar1)(param_1,uVar4,param_1[0xb],1,param_1[10],iVar6,param_1[0xc],0x12,&local_28);
  if (iVar6 < 0) {
    pbVar2 = (byte *)param_1[0xc];
    if ((*pbVar2 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar2[0xd] | (uint)pbVar2[0xc] << 8 | (uint)pbVar2[2] << 0x10);
    }
    else {
      (**(code **)(*param_1 + 0x268))(param_1,0x30300);
    }
  }
  else {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}

