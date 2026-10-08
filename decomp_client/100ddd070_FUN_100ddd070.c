
undefined8 FUN_100ddd070(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar2 = 0xffffffea;
  if ((((param_1 != (uint *)0x0) && (param_3 < *param_1)) && (param_2 <= *param_1)) &&
     ((uVar2 = 0, param_2 != 0 && (iVar8 = param_2 - param_3, iVar8 != 0)))) {
    uVar11 = param_3 & 0x7fff;
    param_3 = param_3 >> 0xf;
    do {
      uVar10 = (ulong)param_3;
      puVar4 = *(ulong **)(param_1 + uVar10 * 2 + 2);
      uVar9 = iVar8 + uVar11;
      uVar7 = 0x8000;
      if (uVar9 < 0x8000) {
        uVar7 = uVar9;
      }
      if (puVar4 != (ulong *)0x0) {
        if ((uVar11 == 0) && (uVar7 == 0x8000)) {
          if (puVar4 == (ulong *)0x1) {
            (param_1 + uVar10 * 2 + 2)[0] = 0;
            (param_1 + uVar10 * 2 + 2)[1] = 0;
          }
          else {
            _free(puVar4);
            (param_1 + uVar10 * 2 + 2)[0] = 1;
            (param_1 + uVar10 * 2 + 2)[1] = 0;
          }
        }
        else {
          if (puVar4 == (ulong *)0x1) {
            puVar4 = _valloc(0x1000);
            if (puVar4 == (ulong *)0x0) {
              return 0xfffffff4;
            }
            _memset(puVar4,0xff,0x1000);
            *(ulong **)(param_1 + uVar10 * 2 + 2) = puVar4;
          }
          else {
            if (uVar11 != 0) {
              puVar3 = puVar4;
              uVar5 = uVar11;
              if (0x3f < uVar11) {
                do {
                  if (*puVar3 != 0) goto LAB_100ddd210;
                  puVar3 = puVar3 + 1;
                  uVar5 = uVar5 - 0x40;
                } while (0x3f < uVar5);
                if (uVar5 == 0) goto joined_r0x000100ddd1ea;
              }
              if ((*puVar3 & 0xffffffffffffffffU >> (0x40U - (char)uVar5 & 0x3f)) != 0)
              goto LAB_100ddd210;
            }
joined_r0x000100ddd1ea:
            if (uVar7 == 0x8000) {
              _free(puVar4);
              (param_1 + uVar10 * 2 + 2)[0] = 0;
              (param_1 + uVar10 * 2 + 2)[1] = 0;
              goto LAB_100ddd2a0;
            }
          }
LAB_100ddd210:
          iVar8 = uVar7 - uVar11;
          if (iVar8 != 0) {
            uVar5 = uVar11 & 0x3f;
            uVar11 = uVar11 >> 6;
            do {
              uVar1 = iVar8 + uVar5;
              uVar6 = 0x40;
              if (uVar1 < 0x40) {
                uVar6 = uVar1;
              }
              if ((uVar5 == 0) && (uVar6 == 0x40)) {
                puVar4[uVar11] = 0;
              }
              else {
                puVar4[uVar11] =
                     puVar4[uVar11] &
                     ~(0xffffffffffffffffU >> (0x40U - (char)uVar6 & 0x3f) & -1L << (sbyte)uVar5);
              }
              uVar11 = uVar11 + 1;
              uVar5 = 0;
              iVar8 = uVar1 - uVar6;
            } while (iVar8 != 0);
          }
        }
      }
LAB_100ddd2a0:
      param_3 = param_3 + 1;
      uVar11 = 0;
      iVar8 = uVar9 - uVar7;
      uVar2 = 0;
    } while (iVar8 != 0);
  }
  return uVar2;
}

