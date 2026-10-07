
void FUN_1002aa950(long param_1,uint param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint local_48;
  
  if (*(uint *)(param_1 + 0x950) < *(uint *)(param_1 + 0x958)) {
    uVar4 = (uint)(*(uint *)(param_1 + 0x954) < *(uint *)(param_1 + 0x95c));
  }
  else {
    uVar4 = 0;
  }
  uVar12 = *(uint *)(param_1 + 0x93c);
  uVar5 = (ulong)uVar12 / (ulong)param_3;
  lVar11 = *(long *)(param_1 + 0x910);
  if ((*(byte *)(lVar11 + 0x3d86) & 0x40) == 0) {
    iVar21 = (uint)*(byte *)(lVar11 + 0x3d85) <<
             (2U - (char)((*(byte *)(lVar11 + 0x3d89) & 0x40) >> 6) & 0x1f);
  }
  else {
    iVar21 = (uint)*(byte *)(lVar11 + 0x3d85) << 3;
  }
  cVar1 = *(char *)(lVar11 + 0x41e8);
  uVar22 = (uint)uVar5;
  local_48 = uVar22;
  if (cVar1 == '\0') {
    if (uVar12 == 0) {
      return;
    }
    uVar12 = (*(byte *)(lVar11 + 0x3d7b) & 0x40) << 3 |
             (*(byte *)(lVar11 + 0x3d79) & 0x10) << 4 | (uint)*(byte *)(lVar11 + 0x3d8a);
    uVar18 = 0;
    uVar5 = 0;
    uVar10 = 0;
    iVar27 = 0;
    while( true ) {
      uVar16 = (uint)uVar10;
      if ((*(byte *)(lVar11 + 0x3d89) & 1) == 0) {
        uVar22 = (int)(uVar10 >> 1) * iVar21 + (uVar16 & 1) * 0x2000;
      }
      else if (uVar12 < uVar16) {
        uVar22 = (uVar16 + ~uVar12) * iVar21;
      }
      else {
        uVar22 = uVar16 * iVar21 +
                 (uint)CONCAT11(*(undefined1 *)(lVar11 + 0x3d7e),*(undefined1 *)(lVar11 + 0x3d7f));
      }
      uVar19 = uVar22 - (uVar22 & 0x3f);
      uVar17 = (uVar22 & 0x3f) * param_2 * -8;
      while( true ) {
        uVar7 = (ulong)(uVar19 >> 6 & 0x3ff);
        if (*(char *)(lVar11 + 0x4228 + uVar7) != '\0') {
          *(undefined1 *)(lVar11 + 0x4228 + uVar7) = 0;
          iVar27 = 3;
        }
        uVar23 = *(uint *)(param_1 + 0x938);
        uVar17 = uVar17 + param_2 * 0x200;
        if (uVar23 <= uVar17) break;
        uVar19 = uVar19 + 0x40;
        lVar11 = *(long *)(param_1 + 0x910);
      }
      if (iVar27 + uVar4 == 0) {
        iVar27 = 0;
      }
      else {
        if (uVar16 < local_48) {
          local_48 = uVar16;
        }
        if ((uint)uVar5 < uVar16) {
          uVar5 = uVar10;
        }
        uVar17 = 0;
        if (uVar23 != 0) {
          puVar6 = (uint *)((ulong)(uVar23 * uVar18) * 4 + *(long *)(param_1 + 0x920));
          lVar11 = *(long *)(param_1 + 0x910);
          iVar26 = 0;
          do {
            uVar22 = uVar22 & 0xffff;
            lVar3 = *(long *)(param_1 + 0x918);
            uVar17 = *(int *)((long)&PTR___mh_execute_header_100b37ca0 +
                             (ulong)*(byte *)(lVar3 + (ulong)(uVar22 + 0x30000)) * 4) << 3 |
                     *(int *)((long)&PTR___mh_execute_header_100b37ca0 +
                             (ulong)*(byte *)(lVar3 + (ulong)(uVar22 + 0x20000)) * 4) << 2 |
                     *(int *)((long)&PTR___mh_execute_header_100b37ca0 +
                             (ulong)*(byte *)(lVar3 + (ulong)(uVar22 + 0x10000)) * 4) * 2 |
                     *(uint *)((long)&PTR___mh_execute_header_100b37ca0 +
                              (ulong)*(byte *)(lVar3 + (ulong)uVar22) * 4);
            iVar13 = 8;
            do {
              uVar19 = (uint)*(byte *)(lVar11 + 0x3d98 + (ulong)(uVar17 >> 0x1c));
              if (*(int *)(lVar11 + 0x3dc0) == 0) {
                uVar19 = uVar19 & 0x3f;
                uVar23 = *(byte *)(lVar11 + 0x3dc7) & 0xc;
              }
              else {
                uVar19 = uVar19 & 0xf;
                uVar23 = *(byte *)(lVar11 + 0x3dc7) & 0xf;
              }
              uVar19 = *(uint *)(*(long *)(param_1 + 0x948) + (ulong)(uVar23 << 4 | uVar19) * 4) |
                       0xff000000;
              *puVar6 = uVar19;
              if (param_2 < 2) {
                puVar6 = puVar6 + 1;
              }
              else {
                puVar6[1] = uVar19;
                puVar6 = puVar6 + 2;
              }
              uVar17 = uVar17 << 4;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            uVar22 = uVar22 + 1;
            iVar26 = iVar26 + 8;
            uVar17 = *(uint *)(param_1 + 0x938);
          } while (iVar26 * param_2 < uVar17);
        }
        iVar27 = iVar27 + uVar4 + -1;
        if (1 < param_3) {
          _memcpy((void *)(*(long *)(param_1 + 0x920) +
                          ((ulong)(uVar18 * uVar17) + (ulong)uVar17) * 4),
                  (void *)(*(long *)(param_1 + 0x920) + (ulong)(uVar18 * uVar17) * 4),
                  (ulong)uVar17 << 2);
        }
      }
      uVar22 = (uint)uVar5;
      uVar10 = (ulong)(uVar16 + 1);
      uVar18 = (uVar16 + 1) * param_3;
      if (*(uint *)(param_1 + 0x93c) <= uVar18) break;
      lVar11 = *(long *)(param_1 + 0x910);
    }
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(lVar11 + 0x4224) == 0) {
      if (uVar12 == 0) {
        return;
      }
      iVar27 = 0;
      uVar18 = 0;
      uVar12 = 0;
      iVar26 = 0;
      uVar22 = 0;
      while( true ) {
        uVar16 = (uint)CONCAT11(*(undefined1 *)(lVar11 + 0x3d7e),*(undefined1 *)(lVar11 + 0x3d7f));
        uVar17 = uVar16 + iVar27;
        uVar19 = uVar17 & 0x3f;
        uVar17 = uVar17 - uVar19;
        uVar19 = uVar19 * -param_2;
        while( true ) {
          uVar5 = (ulong)(uVar17 >> 6 & 0x3ff);
          if (*(char *)(lVar11 + 0x4228 + uVar5) != '\0') {
            *(undefined1 *)(lVar11 + 0x4228 + uVar5) = 0;
            iVar26 = 2;
          }
          uVar23 = *(uint *)(param_1 + 0x938);
          uVar19 = uVar19 + param_2 * 0x40;
          if (uVar23 <= uVar19) break;
          uVar17 = uVar17 + 0x40;
          lVar11 = *(long *)(param_1 + 0x910);
        }
        if (iVar26 + uVar4 == 0) {
          iVar26 = 0;
        }
        else {
          if (uVar12 < local_48) {
            local_48 = uVar12;
          }
          if (uVar22 < uVar12) {
            uVar22 = uVar12;
          }
          uVar17 = 0;
          if (uVar23 != 0) {
            uVar16 = uVar12 * iVar21 + uVar16 & 0xffff;
            puVar6 = (uint *)((ulong)(uVar23 * uVar18) * 4 + *(long *)(param_1 + 0x920));
            uVar19 = 0;
            do {
              uVar17 = *(uint *)(*(long *)(param_1 + 0x948) +
                                (ulong)*(byte *)(*(long *)(param_1 + 0x918) + (ulong)uVar16) * 4) |
                       0xff000000;
              *puVar6 = uVar17;
              if (param_2 < 2) {
                puVar6 = puVar6 + 1;
              }
              else {
                puVar6[1] = uVar17;
                puVar6 = puVar6 + 2;
              }
              uVar16 = (uVar16 + 0x10000 >> 0x12) + (uVar16 + 0x10000 & 0x3ffff);
              uVar17 = *(uint *)(param_1 + 0x938);
              uVar19 = uVar19 + param_2;
            } while (uVar19 < uVar17);
          }
          iVar26 = iVar26 + uVar4 + -1;
          if (1 < param_3) {
            _memcpy((void *)(*(long *)(param_1 + 0x920) +
                            ((ulong)(uVar18 * uVar17) + (ulong)uVar17) * 4),
                    (void *)(*(long *)(param_1 + 0x920) + (ulong)(uVar18 * uVar17) * 4),
                    (ulong)uVar17 << 2);
          }
        }
        uVar12 = uVar12 + 1;
        uVar18 = uVar12 * param_3;
        if (*(uint *)(param_1 + 0x93c) <= uVar18) break;
        lVar11 = *(long *)(param_1 + 0x910);
        iVar27 = iVar27 + iVar21;
      }
    }
    else {
      if (uVar12 != 0) {
        uVar4 = 0;
        iVar27 = 0;
        do {
          uVar12 = 0;
          if (*(int *)(param_1 + 0x938) != 0) {
            pbVar9 = (byte *)((ulong)(uint)(iVar27 * iVar21) + *(long *)(param_1 + 0x918));
            puVar6 = (uint *)((ulong)(*(int *)(param_1 + 0x938) * uVar4) * 4 +
                             *(long *)(param_1 + 0x920));
            lVar11 = *(long *)(param_1 + 0x948);
            uVar18 = 0;
            do {
              uVar12 = *(uint *)(lVar11 + (ulong)*pbVar9 * 4) | 0xff000000;
              *puVar6 = uVar12;
              if (param_2 < 2) {
                puVar6 = puVar6 + 1;
              }
              else {
                puVar6[1] = uVar12;
                puVar6 = puVar6 + 2;
              }
              pbVar9 = pbVar9 + 1;
              uVar12 = *(uint *)(param_1 + 0x938);
              uVar18 = uVar18 + param_2;
            } while (uVar18 < uVar12);
          }
          if (1 < param_3) {
            _memcpy((void *)(*(long *)(param_1 + 0x920) +
                            ((ulong)(uVar4 * uVar12) + (ulong)uVar12) * 4),
                    (void *)(*(long *)(param_1 + 0x920) + (ulong)(uVar4 * uVar12) * 4),
                    (ulong)uVar12 << 2);
          }
          iVar27 = iVar27 + 1;
          uVar4 = iVar27 * param_3;
        } while (uVar4 < *(uint *)(param_1 + 0x93c));
      }
      local_48 = 0;
    }
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    if (uVar12 == 0) {
      return;
    }
    uVar18 = 0;
    uVar12 = 0;
    uVar22 = 0;
    uVar16 = 0;
    iVar27 = 0;
    do {
      iVar26 = (uVar16 >> 1) * iVar21;
      uVar19 = (uVar18 & 0x2000) + iVar26;
      uVar17 = uVar19 >> 1 & 0x1f;
      uVar19 = uVar19 + uVar17 * -2;
      uVar17 = uVar17 * param_2 * -8;
      uVar23 = (uVar16 & 1) * 0x2000 + iVar26;
      do {
        uVar10 = (ulong)(uVar19 >> 6 & 0x3ff);
        if (*(char *)(*(long *)(param_1 + 0x910) + 0x4228 + uVar10) != '\0') {
          *(undefined1 *)(*(long *)(param_1 + 0x910) + 0x4228 + uVar10) = 0;
          iVar27 = 3;
        }
        uVar28 = *(uint *)(param_1 + 0x938);
        uVar19 = uVar19 + 0x40;
        uVar17 = uVar17 + param_2 * 0x100;
      } while (uVar17 < uVar28);
      if (iVar27 + uVar4 == 0) {
        iVar27 = 0;
      }
      else {
        uVar17 = (uint)uVar5;
        if (uVar16 < (uint)uVar5) {
          uVar17 = uVar16;
        }
        if (uVar22 < uVar16) {
          uVar22 = uVar16;
        }
        uVar19 = 0;
        if (uVar28 != 0) {
          puVar6 = (uint *)((ulong)(uVar28 * uVar12) * 4 + *(long *)(param_1 + 0x920));
          lVar11 = *(long *)(param_1 + 0x910);
          lVar3 = *(long *)(param_1 + 0x948);
          uVar28 = 0;
          do {
            bVar2 = *(byte *)(*(long *)(param_1 + 0x918) + (ulong)uVar23);
            uVar19 = *(uint *)(lVar3 + (ulong)*(byte *)(lVar11 + 0x3d98 +
                                                       (ulong)(*(int *)(lVar11 + 0x3db0) << 2 |
                                                              (uint)(bVar2 >> 6))) * 4) | 0xff000000
            ;
            *puVar6 = uVar19;
            if (param_2 < 2) {
              puVar24 = puVar6 + 1;
              lVar14 = 2;
              lVar8 = 3;
            }
            else {
              puVar24 = puVar6 + 2;
              puVar6[1] = uVar19;
              lVar14 = 3;
              lVar8 = 4;
            }
            uVar19 = *(uint *)(lVar3 + (ulong)*(byte *)(lVar11 + 0x3d98 +
                                                       (ulong)(*(int *)(lVar11 + 0x3db0) << 2 |
                                                              bVar2 >> 4 & 3)) * 4) | 0xff000000;
            puVar20 = puVar6 + lVar14;
            *puVar24 = uVar19;
            if (1 < param_2) {
              *puVar20 = uVar19;
              puVar20 = puVar6 + lVar8;
              lVar14 = lVar8;
            }
            uVar19 = *(uint *)(lVar3 + (ulong)*(byte *)(lVar11 + 0x3d98 +
                                                       (ulong)(*(int *)(lVar11 + 0x3db0) << 2 |
                                                              bVar2 >> 2 & 3)) * 4) | 0xff000000;
            *puVar20 = uVar19;
            if (param_2 < 2) {
              lVar8 = lVar14 + 1;
              lVar15 = 2;
              lVar25 = 3;
            }
            else {
              lVar8 = lVar14 + 2;
              puVar6[lVar14 + 1] = uVar19;
              lVar15 = 3;
              lVar25 = 4;
            }
            uVar19 = *(uint *)(lVar3 + (ulong)*(byte *)(lVar11 + 0x3d98 +
                                                       (ulong)(*(int *)(lVar11 + 0x3db0) << 2 |
                                                              bVar2 & 3)) * 4) | 0xff000000;
            puVar6[lVar8] = uVar19;
            puVar24 = puVar6 + lVar15 + lVar14;
            if (1 < param_2) {
              puVar6[lVar15 + lVar14] = uVar19;
              puVar24 = puVar6 + lVar14 + lVar25;
            }
            puVar6 = puVar24;
            uVar23 = uVar23 + 1;
            uVar19 = *(uint *)(param_1 + 0x938);
            uVar28 = uVar28 + param_2 * 4;
          } while (uVar28 < uVar19);
        }
        iVar27 = iVar27 + uVar4 + -1;
        if (1 < param_3) {
          _memcpy((void *)(*(long *)(param_1 + 0x920) +
                          ((ulong)(uVar12 * uVar19) + (ulong)uVar19) * 4),
                  (void *)(*(long *)(param_1 + 0x920) + (ulong)(uVar12 * uVar19) * 4),
                  (ulong)uVar19 << 2);
        }
        uVar5 = (ulong)uVar17;
      }
      local_48 = (uint)uVar5;
      uVar16 = uVar16 + 1;
      uVar12 = uVar16 * param_3;
      uVar18 = uVar18 + 0x2000;
    } while (uVar12 < *(uint *)(param_1 + 0x93c));
  }
  if (local_48 < uVar22) {
    if (*(int *)(param_1 + 0x950) != 0) {
      *(undefined4 *)(param_1 + 0x950) = 0;
    }
    if (local_48 * param_3 < *(uint *)(param_1 + 0x954)) {
      *(uint *)(param_1 + 0x954) = local_48 * param_3;
    }
    param_3 = (uVar22 + 1) * param_3;
    if (*(uint *)(param_1 + 0x958) < *(uint *)(param_1 + 0x938)) {
      *(uint *)(param_1 + 0x958) = *(uint *)(param_1 + 0x938);
    }
    if (*(uint *)(param_1 + 0x95c) < param_3) {
      *(uint *)(param_1 + 0x95c) = param_3;
    }
  }
  return;
}

