
undefined8 FUN_1007dbe40(uint *param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar3 = 0xffffffea;
  if ((((param_1 != (uint *)0x0) && (param_3 < *param_1)) && (param_2 <= *param_1)) &&
     (uVar3 = 0, param_2 != 0)) {
    iVar5 = param_2 - param_3;
    if (iVar5 != 0) {
      uVar9 = (ulong)(param_3 & 0x7fff);
      param_3 = param_3 >> 0xf;
      do {
        lVar1 = *(long *)(param_1 + (ulong)param_3 * 2 + 2);
        uVar8 = (uint)uVar9;
        uVar6 = iVar5 + uVar8;
        uVar7 = 0x8000;
        if (uVar6 < 0x8000) {
          uVar7 = uVar6;
        }
        if (lVar1 != 0) {
          if (lVar1 == 1) {
            return 0;
          }
          if ((uVar8 == 0) && (uVar7 == 0x8000)) {
            return 0;
          }
          uVar2 = uVar9 >> 6;
          if (uVar7 <= uVar8) {
            return 0;
          }
          if (lVar1 == 0) {
            return 0;
          }
          uVar8 = uVar7 - (uVar8 & 0x7fc0);
          if ((uVar9 & 0x3f) == 0) {
            puVar4 = (ulong *)(lVar1 + uVar2 * 8);
joined_r0x0001007dbf2f:
            for (; 0x3f < uVar8; uVar8 = uVar8 - 0x40) {
              if (*puVar4 != 0) {
                return 0;
              }
              puVar4 = puVar4 + 1;
            }
            if (uVar8 == 0) goto LAB_1007dbeae;
            uVar9 = *puVar4;
          }
          else {
            uVar9 = -1L << ((byte)uVar9 & 0x3f) & *(ulong *)(lVar1 + uVar2 * 8);
            if (0x3f < uVar8) {
              if (uVar9 != 0) {
                return 0;
              }
              puVar4 = (ulong *)(lVar1 + 8 + uVar2 * 8);
              uVar8 = uVar8 - 0x40;
              goto joined_r0x0001007dbf2f;
            }
          }
          if ((uVar9 & 0xffffffffffffffffU >> (0x40U - (char)uVar8 & 0x3f)) != 0) {
            return 0;
          }
        }
LAB_1007dbeae:
        param_3 = param_3 + 1;
        uVar9 = 0;
        iVar5 = uVar6 - uVar7;
      } while (iVar5 != 0);
    }
    uVar3 = 1;
  }
  return uVar3;
}

