
undefined8 FUN_100ddce60(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar3 = 0xffffffea;
  if ((((param_1 != (uint *)0x0) && (param_3 < *param_1)) && (param_2 <= *param_1)) &&
     ((uVar3 = 0, param_2 != 0 && (iVar8 = param_2 - param_3, iVar8 != 0)))) {
    uVar11 = param_3 & 0x7fff;
    param_3 = param_3 >> 0xf;
    do {
      uVar10 = (ulong)param_3;
      puVar5 = *(ulong **)(param_1 + uVar10 * 2 + 2);
      uVar9 = iVar8 + uVar11;
      uVar1 = 0x8000;
      if (uVar9 < 0x8000) {
        uVar1 = uVar9;
      }
      if (puVar5 != (ulong *)0x1) {
        if ((uVar11 == 0) && (uVar1 == 0x8000)) {
          if (puVar5 != (ulong *)0x0) {
            _free(puVar5);
          }
          (param_1 + uVar10 * 2 + 2)[0] = 1;
          (param_1 + uVar10 * 2 + 2)[1] = 0;
        }
        else if (puVar5 == (ulong *)0x0) {
          puVar5 = _valloc(0x1000);
          if (puVar5 == (ulong *)0x0) {
            return 0xfffffff4;
          }
          ___bzero(puVar5,0x1000);
          *(ulong **)(param_1 + uVar10 * 2 + 2) = puVar5;
LAB_100ddcfa8:
          iVar8 = uVar1 - uVar11;
          if (iVar8 != 0) {
            uVar6 = uVar11 & 0x3f;
            uVar11 = uVar11 >> 6;
            do {
              uVar2 = iVar8 + uVar6;
              uVar7 = 0x40;
              if (uVar2 < 0x40) {
                uVar7 = uVar2;
              }
              if ((uVar6 == 0) && (uVar7 == 0x40)) {
                puVar5[uVar11] = 0xffffffffffffffff;
              }
              else {
                puVar5[uVar11] =
                     puVar5[uVar11] |
                     0xffffffffffffffffU >> (0x40U - (char)uVar7 & 0x3f) & -1L << (sbyte)uVar6;
              }
              uVar11 = uVar11 + 1;
              uVar6 = 0;
              iVar8 = uVar2 - uVar7;
            } while (iVar8 != 0);
          }
        }
        else {
          if (uVar11 != 0) {
            puVar4 = puVar5;
            uVar6 = uVar11;
            if (0x3f < uVar11) {
              do {
                if (*puVar4 != 0xffffffffffffffff) goto LAB_100ddcfa8;
                puVar4 = puVar4 + 1;
                uVar6 = uVar6 - 0x40;
              } while (0x3f < uVar6);
              if (uVar6 == 0) goto LAB_100ddd020;
            }
            if ((-1L << ((byte)uVar6 & 0x3f) | *puVar4) != 0xffffffffffffffff) goto LAB_100ddcfa8;
          }
LAB_100ddd020:
          _free(puVar5);
          (param_1 + uVar10 * 2 + 2)[0] = 1;
          (param_1 + uVar10 * 2 + 2)[1] = 0;
        }
      }
      param_3 = param_3 + 1;
      uVar11 = 0;
      iVar8 = uVar9 - uVar1;
      uVar3 = 0;
    } while (iVar8 != 0);
  }
  return uVar3;
}

