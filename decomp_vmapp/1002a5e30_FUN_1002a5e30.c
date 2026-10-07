
undefined8 FUN_1002a5e30(uint *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0;
  if (param_1[2] != 0) {
    uVar6 = param_1[2] + 0xfff + (*param_1 & 0xfff) >> 0xc;
  }
  uVar1 = (uint)param_2[1] - param_3;
  if ((uint)param_2[1] < param_3) {
    uVar2 = 0;
  }
  else if (uVar1 < uVar6 << 3) {
    uVar2 = 0;
  }
  else {
    uVar5 = (ulong)param_1[5];
    uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if (param_1[5] < uVar6) {
      uVar4 = (ulong)param_3 + (*param_2 & 0xfff) + uVar5 * 8;
      do {
        lVar3 = *(long *)((long)param_2 + (uVar4 >> 8 & 0xfffff0) + 0x20);
        *(long *)(param_1 + uVar5 * 4 + 6) = *(long *)(lVar3 + (uVar4 & 0xfff)) << 0xc;
        uVar5 = *(long *)(lVar3 + (uVar4 & 0xfff)) * 0x1000;
        if ((0xafffffff < uVar5) && (bVar7 = uVar5 < 0x100000000, uVar5 = uVar5 - 0x50000000, bVar7)
           ) {
          uVar5 = 0xffffffffffffffff;
        }
        lVar3 = FUN_10008c320(DAT_1011c3688,uVar5,0x1000,1,1);
        uVar1 = param_1[5];
        *(long *)(param_1 + (ulong)uVar1 * 4 + 8) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        uVar4 = (uVar4 & 0xffffffff) + 8;
        uVar1 = uVar1 + 1;
        uVar5 = (ulong)uVar1;
        param_1[5] = uVar1;
      } while (uVar1 < uVar6);
      uVar2 = 0xffffff01;
    }
  }
  return uVar2;
}

