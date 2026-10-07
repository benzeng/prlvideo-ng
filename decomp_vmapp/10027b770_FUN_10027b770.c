
undefined8 FUN_10027b770(int *param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  ushort uVar10;
  undefined8 local_38;
  
  lVar8 = *param_2;
  uVar7 = 0;
  if (lVar8 != 0) {
    uVar7 = *(uint *)(param_2 + 1);
    if ((uVar7 & 0x20000000) == 0) {
      uVar7 = uVar7 & 0xffff;
    }
    else {
      uVar7 = (int)(uVar7 << 0xb) >> 0x1f & uVar7 & 0xfffff;
    }
  }
  if (*(char *)((long)param_1 + 10) != '\0') {
    if ((*(byte *)((long)param_2 + 0xb) & 1) != 0) {
      *(undefined1 *)((long)param_1 + 10) = 0;
    }
    param_1[4] = param_3;
    return 0;
  }
  if (*(ushort *)(param_1 + 2) + uVar7 < 0x10000) {
    *(short *)(param_1 + 2) = (short)(*(ushort *)(param_1 + 2) + uVar7);
    iVar3 = *param_1;
    local_38 = 0;
    iVar6 = iVar3;
    if (uVar7 != 0) {
      uVar2 = FUN_10008d820(param_1 + 8,lVar8,uVar7,&local_38);
      if (uVar2 != uVar7) {
        iVar3 = FUN_1008e38f0(&DAT_101115c94);
        if (iVar3 != 0) {
          FUN_1008e3970("","LocalDevices",0,"_sg.map(0x%llx %d) failed",*param_2,uVar7);
        }
        *(long *)(*(long *)(param_1 + 6) + 0xf4) = *(long *)(*(long *)(param_1 + 6) + 0xf4) + 1;
        *param_1 = param_1[1];
        *(undefined2 *)(param_1 + 2) = 0;
        param_1[4] = param_3;
        if ((*(byte *)((long)param_2 + 0xb) & 1) != 0) {
          return 0;
        }
        goto LAB_10027b9c7;
      }
      lVar8 = *param_2;
      iVar6 = *param_1;
    }
    lVar4 = (long)iVar3;
    param_1[3] = param_1[3] + 1;
    *param_1 = iVar6 + 1;
    uVar7 = *(uint *)(param_2 + 1);
    uVar2 = uVar7 & 0x20000000;
    uVar10 = 0;
    if (lVar8 != 0) {
      uVar10 = (ushort)uVar7;
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar10 = (ushort)((int)(uVar7 << 0xb) >> 0x1f) & uVar10;
      }
    }
    (param_1 + lVar4 * 4 + 0x212)[0] = 0;
    (param_1 + lVar4 * 4 + 0x212)[1] = 0;
    *(ushort *)((long)param_1 + lVar4 * 0x10 + 0x852) = uVar10;
    *(undefined1 *)((long)param_1 + lVar4 * 0x10 + 0x851) = 0;
    bVar9 = (char)((uVar7 & 0x1000000) >> 0x18) * '\x02';
    *(byte *)(param_1 + lVar4 * 4 + 0x214) = bVar9;
    if (uVar2 != 0) {
      pbVar1 = (byte *)(param_1 + lVar4 * 4 + 0x214);
      if ((uVar7 & 0x4000000) != 0) {
        bVar9 = bVar9 | 0x10;
        *pbVar1 = bVar9;
      }
      uVar2 = *(uint *)((long)param_2 + 0xc);
      if ((uVar2 & 0x100) != 0) {
        bVar9 = bVar9 | 4;
        *pbVar1 = bVar9;
      }
      if ((uVar2 & 0x200) != 0) {
        *pbVar1 = bVar9 | 8;
      }
    }
    *(undefined8 *)(param_1 + lVar4 * 4 + 0x212) = local_38;
    uVar5 = 1;
    if ((uVar7 & 0x1000000) != 0) {
      *(undefined2 *)(param_1 + 2) = 0;
    }
  }
  else {
    iVar3 = FUN_1008e38f0(&DAT_101115c8c);
    if (iVar3 != 0) {
      FUN_1008e3970("","LocalDevices",0,"Oversized packet: (tx_size + len) = %u",
                    *(ushort *)(param_1 + 2) + uVar7);
    }
    *(long *)(*(long *)(param_1 + 6) + 0xf4) = *(long *)(*(long *)(param_1 + 6) + 0xf4) + 1;
    *param_1 = param_1[1];
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[4] = param_3;
    if ((*(byte *)((long)param_2 + 0xb) & 1) != 0) {
      return 0;
    }
LAB_10027b9c7:
    *(undefined1 *)((long)param_1 + 10) = 1;
    uVar5 = 0;
  }
  return uVar5;
}

