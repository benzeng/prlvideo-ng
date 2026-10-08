
undefined8 FUN_100c205c0(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  bool bVar12;
  byte *local_68;
  byte *local_60;
  uint local_50;
  
  uVar8 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar8) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  pcVar4 = *(code **)(param_1 + 0x160);
  pcVar5 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar8;
  if (*(int *)(param_1 + 0x174) != 0) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar6 = *(uint *)(param_1 + 0x170);
  if (uVar6 == 0) {
LAB_100c206ce:
    local_50 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    local_68 = param_2;
    local_60 = param_3;
    if (0xbff < param_4) {
      uVar8 = param_4 - 0xc00;
      uVar10 = uVar8 / 0xc00;
      local_68 = param_2 + uVar10 * 0xc00 + 0xc00;
      iVar9 = (int)uVar10 * 0xc0 + local_50;
      pbVar11 = param_3;
      do {
        local_50 = local_50 + 0xc0;
        (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
        (*param_5)(param_2,pbVar11,0xc0,uVar3,param_1);
        *(uint *)(param_1 + 0xc) =
             local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
             local_50 * 0x1000000;
        pbVar11 = pbVar11 + 0xc00;
        param_2 = param_2 + 0xc00;
        param_4 = param_4 - 0xc00;
      } while (0xbff < param_4);
      param_4 = uVar8 % 0xc00;
      local_60 = param_3 + uVar10 * 0xc00 + 0xc00;
      local_50 = iVar9 + 0xc0;
    }
    uVar8 = param_4 & 0xfffffffffffffff0;
    if (uVar8 != 0) {
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,local_68,uVar8);
      (*param_5)(local_68,local_60,param_4 >> 4,uVar3,param_1);
      local_50 = (int)(param_4 >> 4) + local_50;
      *(uint *)(param_1 + 0xc) =
           local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
           local_50 * 0x1000000;
      local_60 = local_60 + uVar8;
      local_68 = local_68 + uVar8;
      param_4 = param_4 - uVar8;
    }
    uVar7 = 0;
    if (param_4 != 0) {
      (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar3);
      local_50 = local_50 + 1;
      *(uint *)(param_1 + 0xc) =
           local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
           local_50 * 0x1000000;
      uVar8 = 0;
      do {
        uVar10 = uVar8 & 0xffffffff;
        bVar1 = local_68[uVar10];
        pbVar11 = (byte *)(param_1 + 0x40 + uVar10);
        *pbVar11 = *pbVar11 ^ bVar1;
        local_60[uVar10] = bVar1 ^ *(byte *)(param_1 + 0x10 + uVar10);
        uVar8 = uVar8 + 1;
      } while (param_4 != uVar8);
      uVar7 = (undefined4)param_4;
    }
    *(undefined4 *)(param_1 + 0x170) = uVar7;
  }
  else {
    uVar8 = param_4;
    if (param_4 != 0) {
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_3 = *(byte *)(param_1 + 0x10 + (ulong)uVar6) ^ bVar1;
        pbVar11 = (byte *)(param_1 + 0x40 + (ulong)uVar6);
        *pbVar11 = *pbVar11 ^ bVar1;
        param_3 = param_3 + 1;
        param_4 = uVar8 - 1;
        uVar6 = uVar6 + 1 & 0xf;
        if (uVar6 == 0) break;
        bVar12 = uVar8 != 1;
        uVar8 = param_4;
      } while (bVar12);
      if (uVar6 == 0) {
        (*pcVar4)(param_1 + 0x40,param_1 + 0x60);
        goto LAB_100c206ce;
      }
    }
    *(uint *)(param_1 + 0x170) = uVar6;
  }
  return 0;
}

