
undefined8 FUN_1008450b0(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  int iVar8;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  bool bVar12;
  byte *local_70;
  byte *local_68;
  uint local_50;
  
  uVar7 = *(ulong *)(param_1 + 0x38) + param_4;
  if (0xfffffffe0 < uVar7) {
    return 0xffffffff;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_4)) {
    return 0xffffffff;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  pcVar3 = *(code **)(param_1 + 0x160);
  pcVar4 = *(code **)(param_1 + 0x168);
  *(ulong *)(param_1 + 0x38) = uVar7;
  if (*(int *)(param_1 + 0x174) != 0) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x170);
  local_70 = param_3;
  if (uVar5 == 0) {
LAB_1008451bb:
    local_50 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    local_68 = param_2;
    if (0xbff < param_4) {
      uVar7 = param_4 - 0xc00;
      uVar10 = uVar7 / 0xc00;
      local_68 = param_2 + uVar10 * 0xc00 + 0xc00;
      iVar8 = (int)uVar10 * 0xc0 + local_50;
      pbVar11 = local_70;
      do {
        local_50 = local_50 + 0xc0;
        (*param_5)(param_2,pbVar11,0xc0,uVar2,param_1);
        *(uint *)(param_1 + 0xc) =
             local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
             local_50 * 0x1000000;
        (*pcVar4)(param_1 + 0x40,param_1 + 0x60,pbVar11,0xc00);
        pbVar11 = pbVar11 + 0xc00;
        param_2 = param_2 + 0xc00;
        param_4 = param_4 - 0xc00;
      } while (0xbff < param_4);
      param_4 = uVar7 % 0xc00;
      local_70 = local_70 + uVar10 * 0xc00 + 0xc00;
      local_50 = iVar8 + 0xc0;
    }
    uVar7 = param_4 & 0xfffffffffffffff0;
    if (uVar7 != 0) {
      (*param_5)(local_68,local_70,param_4 >> 4,uVar2,param_1);
      local_50 = (int)(param_4 >> 4) + local_50;
      *(uint *)(param_1 + 0xc) =
           local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
           local_50 * 0x1000000;
      local_68 = local_68 + uVar7;
      param_4 = param_4 - uVar7;
      (*pcVar4)(param_1 + 0x40,param_1 + 0x60,local_70,uVar7);
      local_70 = local_70 + uVar7;
    }
    uVar6 = 0;
    if (param_4 != 0) {
      (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar2);
      local_50 = local_50 + 1;
      *(uint *)(param_1 + 0xc) =
           local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
           local_50 * 0x1000000;
      uVar7 = 0;
      do {
        uVar10 = uVar7 & 0xffffffff;
        bVar9 = *(byte *)(param_1 + 0x10 + uVar10) ^ local_68[uVar10];
        local_70[uVar10] = bVar9;
        pbVar11 = (byte *)(param_1 + 0x40 + uVar10);
        *pbVar11 = *pbVar11 ^ bVar9;
        uVar7 = uVar7 + 1;
      } while (param_4 != uVar7);
      uVar6 = (undefined4)param_4;
    }
    *(undefined4 *)(param_1 + 0x170) = uVar6;
  }
  else {
    uVar7 = param_4;
    if (param_4 != 0) {
      do {
        bVar9 = *(byte *)(param_1 + 0x10 + (ulong)uVar5) ^ *param_2;
        param_2 = param_2 + 1;
        *param_3 = bVar9;
        pbVar11 = (byte *)(param_1 + 0x40 + (ulong)uVar5);
        *pbVar11 = *pbVar11 ^ bVar9;
        param_3 = param_3 + 1;
        param_4 = uVar7 - 1;
        uVar5 = uVar5 + 1 & 0xf;
        if (uVar5 == 0) break;
        bVar12 = uVar7 != 1;
        uVar7 = param_4;
      } while (bVar12);
      if (uVar5 == 0) {
        (*pcVar3)(param_1 + 0x40,param_1 + 0x60);
        local_70 = param_3;
        goto LAB_1008451bb;
      }
    }
    *(uint *)(param_1 + 0x170) = uVar5;
  }
  return 0;
}

