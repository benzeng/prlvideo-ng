
undefined4 FUN_10027dc80(long param_1,undefined4 *param_2,uint *param_3)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  byte local_5c;
  undefined8 local_50;
  byte *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar4 = param_2[4];
  uVar11 = (ulong)uVar4;
  if (((uVar11 < 2) || (*(uint *)(*(undefined8 **)(param_2 + 2) + 1) < 10)) ||
     (0xffff < (uint)param_2[5])) {
    uVar13 = 0;
    FUN_1008e3970("","LocalDevices",0,
                  "[CNetVirtIo::TxDirectCopy][id:%3d num:%2d len:%5d] Incorrect entry",*param_2,
                  uVar11,param_2[5]);
  }
  else {
    local_48 = (byte *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_10008d2d0(&local_48,**(undefined8 **)(param_2 + 2));
    pbVar2 = local_48;
    uVar5 = *param_3;
    lVar7 = *(long *)(param_3 + 2);
    lVar12 = (ulong)uVar5 * 0x10;
    lVar1 = lVar7 + lVar12;
    ___bzero(lVar1,uVar11 << 4);
    *(undefined1 *)(lVar7 + 8 + lVar12) = 1;
    if ((*pbVar2 & 1) == 0) {
      local_5c = 0;
    }
    else {
      bVar3 = pbVar2[6];
      *(byte *)(lVar1 + 4) = bVar3;
      *(byte *)(lVar1 + 5) = bVar3 + pbVar2[8];
      local_5c = 8;
    }
    bVar3 = pbVar2[1];
    bVar9 = bVar3 & 0x7f;
    if ((byte)(bVar9 - 1) < 4) {
      local_5c = local_5c | 0x10;
      bVar9 = (&DAT_100b36120)[(ulong)bVar9 * 4];
      *(byte *)(lVar7 + 9 + lVar12) = bVar9;
      *(byte *)(lVar7 + 10 + lVar12) = pbVar2[2];
      *(undefined2 *)(lVar7 + 0xe + lVar12) = *(undefined2 *)(pbVar2 + 4);
      if ((char)bVar3 < '\0') {
        *(byte *)(lVar7 + 9 + lVar12) = bVar9 | 0x10;
      }
    }
    *(byte *)(lVar7 + 8 + lVar12) = local_5c | 1;
    if (1 < uVar4) {
      lVar1 = lVar12 + 0x1a + lVar7;
      uVar10 = 1;
      lVar12 = 0;
      do {
        iVar6 = *(int *)(*(long *)(param_2 + 2) + 0x18 + lVar12);
        local_50 = 0;
        iVar8 = FUN_10008d820(param_1 + 0x90c8,
                              *(undefined8 *)(*(long *)(param_2 + 2) + 0x10 + lVar12),iVar6,
                              &local_50);
        if (iVar8 != iVar6) {
          uVar13 = 0;
          FUN_1008e3970("","LocalDevices",0,
                        "[CNetVirtIo::TxDirectCopy] Oversized chunk!  ind:%u  len:%u",uVar10,iVar6);
          goto LAB_10027dea0;
        }
        *(undefined8 *)(lVar1 + -10 + lVar12) = local_50;
        *(short *)(lVar1 + lVar12) = (short)iVar6;
        *(byte *)(lVar1 + -2 + lVar12) = local_5c;
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar10 < uVar4);
    }
    pbVar2 = (byte *)(lVar7 + 8 + ((ulong)uVar5 + (ulong)(uVar4 - 1)) * 0x10);
    *pbVar2 = *pbVar2 | 2;
    *param_3 = *param_3 + uVar4;
    uVar13 = param_2[5];
LAB_10027dea0:
    FUN_10008d3f0(&local_48);
  }
  return uVar13;
}

