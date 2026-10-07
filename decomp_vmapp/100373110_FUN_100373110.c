
undefined8 FUN_100373110(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = (ulong)(param_2[0x19] - param_2[0x18]) >> 2;
  uVar4 = (uint)((ulong)(param_1[0x19] - param_1[0x18]) >> 2);
  bVar5 = uVar4 < (uint)uVar3;
  if (uVar4 == (uint)uVar3) {
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        uVar1 = *(uint *)(param_2[0x18] + uVar3 * 4);
        uVar2 = *(uint *)(param_1[0x18] + uVar3 * 4);
        bVar5 = uVar2 < uVar1;
        if (uVar2 != uVar1) goto LAB_1003731a3;
        uVar3 = uVar3 + 1;
      } while ((uint)uVar3 < uVar4);
    }
    uVar3 = (ulong)(param_2[1] - *param_2) >> 2;
    uVar4 = (uint)((ulong)(param_1[1] - *param_1) >> 2);
    bVar5 = uVar4 < (uint)uVar3;
    if (uVar4 == (uint)uVar3) {
      uVar3 = 0;
      if (uVar4 == 0) {
        return 0;
      }
      while (uVar1 = *(uint *)(*param_2 + uVar3 * 4), uVar2 = *(uint *)(*param_1 + uVar3 * 4),
            bVar5 = uVar2 < uVar1, uVar2 == uVar1) {
        uVar3 = uVar3 + 1;
        if (uVar4 <= (uint)uVar3) {
          return 0;
        }
      }
    }
  }
LAB_1003731a3:
  return CONCAT71((int7)(uVar3 >> 8),bVar5);
}

