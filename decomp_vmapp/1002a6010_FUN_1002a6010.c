
undefined8 FUN_1002a6010(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = (ulong)*(ushort *)((long)param_1 + 0x14);
  if ((uVar8 != 0) && (param_1[7] == 0)) {
    uVar2 = *param_1;
    iVar1 = *(int *)(param_1 + 2);
    pvVar4 = operator_new__(uVar8,(nothrow_t *)PTR_nothrow_100ba21c8);
    param_1[7] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    puVar3 = (ulong *)param_1[6];
    uVar9 = (ulong)(iVar1 + 0xfff + ((uint)uVar2 & 0xfff) >> 0xc) * 8 + 0x10;
    uVar5 = (uint)puVar3[1] - uVar9;
    if (uVar9 <= (uint)puVar3[1]) {
      uVar6 = uVar5 & 0xffffffff;
      if (uVar8 <= uVar5) {
        uVar6 = uVar8;
      }
      if ((int)uVar6 != 0) {
        uVar9 = (*puVar3 & 0xfff) + uVar9;
        do {
          uVar7 = 0x1000 - (int)(uVar9 & 0xfff);
          uVar8 = (ulong)uVar7;
          if ((uint)uVar6 < uVar7) {
            uVar8 = uVar6;
          }
          _memcpy(pvVar4,(void *)(*(long *)((long)puVar3 + (uVar9 >> 8 & 0xfffffffffffff0) + 0x20) +
                                 (uVar9 & 0xfff)),uVar8);
          uVar9 = uVar9 + uVar8;
          pvVar4 = (void *)((long)pvVar4 + uVar8);
          uVar7 = (uint)uVar6 - (int)uVar8;
          uVar6 = (ulong)uVar7;
        } while (uVar7 != 0);
      }
    }
  }
  return param_1[7];
}

