
void FUN_1003e5d80(long *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  code *pcVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  ulong local_30;
  
  local_30 = 0;
  pcVar1 = (char *)param_1[0xb];
  if (*pcVar1 == -0x47) {
    uVar14 = ((byte)pcVar1[5] - 0x96) +
             (uint)(byte)pcVar1[4] * 0x4b + (uint)(byte)pcVar1[3] * 0x1194;
    uVar5 = ((byte)pcVar1[8] - 0x96) + (uint)(byte)pcVar1[7] * 0x4b + (uint)(byte)pcVar1[6] * 0x1194
    ;
    uVar6 = uVar5 - uVar14;
    if (uVar5 < uVar14) goto LAB_1003e5f9d;
  }
  else {
    uVar6 = *(uint *)(pcVar1 + 2);
    uVar14 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    uVar6 = *(uint *)(param_1[0xb] + 5);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8;
  }
  if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e5e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  if (((*(uint *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar5 = *(uint *)(param_1 + 0x19), uVar5 == 0xffffffff)) {
    puVar2 = (undefined1 *)param_1[0xb];
    bVar13 = puVar2[9];
    bVar10 = puVar2[10] & 7;
    iVar11 = 0;
    if ((bVar13 & 0x10) != 0) {
      iVar11 = 0;
      switch((byte)puVar2[1] >> 2 & 7) {
      case 0:
        bVar8 = *(byte *)((long)param_1 + 0xec) & 0xf;
        iVar11 = 0x800;
        if (bVar8 < 0xe) {
          iVar11 = *(int *)(&DAT_100b405e0 + (ulong)bVar8 * 4);
        }
        break;
      case 1:
        iVar11 = 0x930;
        bVar13 = 0;
        break;
      case 2:
        bVar13 = bVar13 & 0xbf;
        iVar11 = 0x800;
        break;
      case 3:
        bVar13 = bVar13 & 0xbe;
        iVar11 = 0x920;
        break;
      case 4:
        iVar11 = 0x800;
        bVar13 = 0;
        break;
      case 5:
        bVar13 = bVar13 & 0xbe;
        iVar11 = 0x918;
      }
    }
    iVar9 = iVar11 + 0xc;
    if ((bVar13 & 0x80) == 0) {
      iVar9 = iVar11;
    }
    iVar11 = iVar9 + 4;
    if ((bVar13 & 0x40) == 0) {
      iVar11 = iVar9;
    }
    iVar9 = iVar11 + 8;
    if ((bVar13 & 0x20) == 0) {
      iVar9 = iVar11;
    }
    iVar11 = iVar9 + 0x118;
    if ((bVar13 & 8) == 0) {
      iVar11 = iVar9;
    }
    if (((bVar10 == 4) || (bVar10 == 2)) || (bVar10 == 1)) {
      iVar11 = iVar11 + 0x60;
    }
    uVar5 = iVar11 * uVar6;
    iVar11 = FUN_1003e1900(*(uint *)((long)param_1 + 0x6c),uVar5,*puVar2);
    if (iVar11 == -1) {
LAB_1003e5f9d:
                    /* WARNING: Could not recover jumptable at 0x0001003e5fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return;
    }
  }
  pcVar3 = *(code **)(*param_1 + 0xb0);
  uVar7 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  uVar12 = (ulong)uVar5;
  iVar11 = (*pcVar3)(param_1,uVar7,param_1[0xb],2,param_1[9],uVar12,param_1[0xc],0x12,&local_30);
  if ((iVar11 < 0) || (local_30 == 0)) {
    pbVar4 = (byte *)param_1[0xc];
    if ((*pbVar4 & 0x70) == 0x70) {
      (**(code **)(*param_1 + 0x270))
                (param_1,(uint)pbVar4[0xd] | (uint)pbVar4[0xc] << 8 | (uint)pbVar4[2] << 0x10);
    }
    else {
      FUN_1008e3970("","DVDImage",0,"[DVD] ReadCd failed! LBA = %x Bytes = %u Error=%d",uVar14,uVar5
                    ,*(undefined4 *)((long)param_1 + 0xc4));
      (**(code **)(*param_1 + 0x268))(param_1,0x31100,param_1[0xc]);
    }
  }
  else {
    if (uVar12 < local_30) {
      local_30 = uVar12;
    }
    (**(code **)(*param_1 + 0x278))(param_1,local_30,local_30 & 0xffffffff);
  }
  return;
}

