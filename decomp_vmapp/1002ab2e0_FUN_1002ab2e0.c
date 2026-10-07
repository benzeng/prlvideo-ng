
undefined1 FUN_1002ab2e0(long param_1,uint *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint local_38;
  int local_34;
  
  iVar2 = *param_3;
  if (iVar2 == 0) {
    pcVar9 = "[TrackVesaRange] invalid size";
    uVar10 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x11850);
    if (lVar1 != 0) {
      uVar14 = *param_2;
      uVar11 = uVar14 & 0xffffffc0;
      uVar17 = uVar14 + 0x3f + iVar2 & 0xffffffc0;
      uVar12 = uVar17 - uVar11;
      if ((0xffff < uVar11) || (0x10000 - uVar11 < uVar12)) {
        FUN_1008e3970("","LocalDevices",0,"[TrackVesaRange] invalid parameters %u +%u (%u)",uVar11,
                      uVar12,0x10000);
        return 0;
      }
      uVar16 = (uVar14 - 1) + iVar2;
      if ((uVar11 == *(uint *)(param_1 + 0x11860)) && (uVar12 == *(uint *)(param_1 + 0x11864))) {
        if (uVar11 < uVar17) {
          puVar13 = (ulong *)(lVar1 + (ulong)(uVar14 >> 6) * 8);
          do {
            if (*puVar13 != 0xffffffffffffffff) {
              uVar8 = ~*puVar13;
              uVar3 = *puVar13;
              do {
                LOCK();
                uVar4 = *puVar13;
                bVar19 = uVar3 == uVar4;
                if (bVar19) {
                  *puVar13 = uVar8 | uVar3;
                  uVar4 = uVar3;
                }
                UNLOCK();
                uVar3 = uVar4;
              } while (!bVar19);
              lVar1 = 0;
              if (uVar8 != 0) {
                for (; (uVar8 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              uVar12 = (int)lVar1 + uVar11;
              lVar1 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                }
              }
              uVar7 = (int)lVar1 + uVar11;
              if (uVar12 < *(uint *)(param_1 + 0x11858)) {
                *(uint *)(param_1 + 0x11858) = uVar12;
              }
              if (*(uint *)(param_1 + 0x1185c) < uVar7) {
                *(uint *)(param_1 + 0x1185c) = uVar7;
              }
            }
            puVar13 = puVar13 + 1;
            uVar11 = uVar11 + 0x40;
          } while (uVar11 < uVar17);
        }
        if (((*(uint *)(param_1 + 0x1185c) < uVar14) ||
            (uVar17 = *(uint *)(param_1 + 0x11858), uVar16 < uVar17)) ||
           (*(uint *)(param_1 + 0x1185c) < uVar17)) {
          *param_3 = 0;
          return 1;
        }
      }
      else {
        *(uint *)(param_1 + 0x11858) = uVar11;
        *(uint *)(param_1 + 0x1185c) = uVar17 - 1;
        uVar7 = uVar12 >> 6;
        uVar17 = uVar11;
        if (uVar7 != 0) {
          uVar18 = uVar14 >> 6;
          uVar3 = (ulong)uVar18;
          uVar17 = (uVar14 + 0x3f + iVar2 & 0xffffffc0) + uVar18 * -0x40 >> 6;
          if ((uVar17 & 7) == 0) {
            puVar6 = (undefined8 *)(lVar1 + uVar3 * 8);
          }
          else {
            lVar15 = 0;
            lVar5 = 0;
            do {
              *(undefined8 *)(lVar1 + uVar3 * 8 + lVar5 * 8) = 0xffffffffffffffff;
              lVar5 = lVar5 + 1;
              lVar15 = lVar15 + -8;
            } while (((uVar14 + 0x3f + iVar2 & 0xffffffc0) + uVar18 * -0x40 >> 6 & 7) != (uint)lVar5
                    );
            uVar7 = ((uVar14 + 0x3f + iVar2 & 0xffffffc0) + uVar18 * -0x40 >> 6) - (uint)lVar5;
            puVar6 = (undefined8 *)((lVar1 + uVar3 * 8) - lVar15);
          }
          if (6 < uVar17 - 1) {
            do {
              *puVar6 = 0xffffffffffffffff;
              puVar6[1] = 0xffffffffffffffff;
              puVar6[2] = 0xffffffffffffffff;
              puVar6[3] = 0xffffffffffffffff;
              puVar6[4] = 0xffffffffffffffff;
              puVar6[5] = 0xffffffffffffffff;
              puVar6[6] = 0xffffffffffffffff;
              puVar6[7] = 0xffffffffffffffff;
              puVar6 = puVar6 + 8;
              uVar7 = uVar7 - 8;
            } while (uVar7 != 0);
          }
          uVar17 = *(uint *)(param_1 + 0x11858);
        }
        *(uint *)(param_1 + 0x11860) = uVar11;
        *(uint *)(param_1 + 0x11864) = uVar12;
      }
      if (uVar14 < uVar17) {
        uVar14 = uVar17;
      }
      *param_2 = uVar14;
      if (*(uint *)(param_1 + 0x1185c) < uVar16) {
        uVar16 = *(uint *)(param_1 + 0x1185c);
      }
      *param_3 = (1 - uVar14) + uVar16;
      local_38 = *(uint *)(param_1 + 0x11858) & 0xffffffc0;
      local_34 = (*(int *)(param_1 + 0x1185c) + 0x40U & 0xffffffc0) - local_38;
      iVar2 = FUN_1000b3df0(*(undefined8 *)(param_1 + 8),&local_38);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x11858) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x1185c) = 0;
        return 1;
      }
      return 0;
    }
    if (DAT_1011b55f8 < 2) {
      return 0;
    }
    pcVar9 = "[TrackVesaRange] invalid track bitmap pointer";
    uVar10 = 2;
  }
  FUN_1008e3970("","LocalDevices",uVar10,pcVar9);
  return 0;
}

