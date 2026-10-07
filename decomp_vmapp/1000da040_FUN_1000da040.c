
/* WARNING: Removing unreachable block (ram,0x0001000da2a8) */

void FUN_1000da040(ushort *param_1,long param_2)

{
  byte *pbVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar3 = *(long *)(param_2 + 0xa0d0);
  *(undefined4 *)(param_2 + 0xa0dc + lVar3) = 0x54;
  *(undefined4 *)(param_2 + 0xa0e0 + lVar3) = 0x80;
  *(undefined4 *)(param_2 + 0xa0e4 + lVar3) = 0x40;
  uVar2 = *param_1;
  if ((uVar2 & 0x924) == 0) {
    if ((uVar2 & 0x249) == 0) {
      bVar6 = (uVar2 & 0x492) == 0;
      iVar5 = (uint)bVar6 + (uint)bVar6 * 2;
      *(int *)(lVar3 + 0xa0e8 + param_2) = iVar5;
      iVar4 = 3;
      if ((uVar2 & 0x492) == 0) goto LAB_1000da0e5;
    }
    else {
      *(undefined4 *)(lVar3 + 0xa0e8 + param_2) = 2;
      iVar5 = 2;
    }
    pbVar1 = (byte *)(param_2 + 0xa0d8 + lVar3);
    *pbVar1 = *pbVar1 | 2;
    iVar4 = iVar5;
  }
  else {
    *(undefined4 *)(param_2 + 0xa0e8 + lVar3) = 1;
    pbVar1 = (byte *)(param_2 + 0xa0d8 + lVar3);
    *pbVar1 = *pbVar1 | 1;
    iVar4 = 1;
  }
LAB_1000da0e5:
  local_28 = 0;
  uStack_20 = 0;
  uVar2 = *param_1;
  if ((uVar2 & 7) == 0) {
    if ((uVar2 & 0x38) == 0) {
      if ((uVar2 & 0x1c0) == 0) {
        if ((uVar2 & 0xe00) != 0) {
          uStack_20 = DAT_100b2deb0;
          local_28 = DAT_100b2dea8;
        }
      }
      else {
        uStack_20 = DAT_100b2ded0;
        local_28 = DAT_100b2dec8;
      }
    }
    else {
      uStack_20 = DAT_100b2dec0;
      local_28 = DAT_100b2deb8;
    }
  }
  else {
    uStack_20 = DAT_100b2dea0;
    local_28 = DAT_100b2de98;
  }
  *(undefined8 *)(param_2 + 0xa0f4 + lVar3) = uStack_20;
  *(undefined8 *)(param_2 + 0xa0ec + lVar3) = local_28;
  *(int *)(param_2 + 0xa0fc + lVar3) = iVar4;
  *(undefined2 *)(param_2 + 0xa100 + lVar3) = 0x201;
  *(undefined2 *)(param_2 + 0xa12a + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa122 + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa11a + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa112 + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa10a + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa102 + lVar3) = 0;
  *(undefined4 *)(param_2 + 0xa12c + lVar3) = 0x52454350;
  *(undefined2 *)(param_2 + 0xa130 + lVar3) = 0x101;
  *(undefined4 *)(param_2 + 0xa132 + lVar3) = 0xffffffff;
  *(undefined2 *)(param_2 + 0xa136 + lVar3) = 0;
  *(int *)(param_2 + 0xa138 + lVar3) = iVar4;
  *(undefined4 *)(param_2 + 0xa13c + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa144 + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa184 + lVar3) = DAT_100b2dee0;
  *(undefined8 *)(param_2 + 0xa17c + lVar3) = DAT_100b2ded8;
  *(undefined8 *)(param_2 + 0xa174 + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa16c + lVar3) = 0;
  *(undefined8 *)(param_2 + 0xa164 + lVar3) = *(undefined8 *)(param_2 + 0xa174 + lVar3);
  *(undefined8 *)(param_2 + 0xa15c + lVar3) = *(undefined8 *)(param_2 + 0xa16c + lVar3);
  *(undefined8 *)(param_2 + 0xa154 + lVar3) = *(undefined8 *)(param_2 + 0xa174 + lVar3);
  *(undefined8 *)(param_2 + 0xa14c + lVar3) = *(undefined8 *)(param_2 + 0xa16c + lVar3);
  *(undefined4 *)(param_2 + 0xa140 + lVar3) = 0x80;
  *param_1 = (ushort)(iVar4 != 3);
  return;
}

