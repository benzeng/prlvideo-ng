
undefined4
FUN_1008d6ee0(long param_1,int param_2,long param_3,int param_4,int param_5,int param_6,int param_7,
             void *param_8,undefined8 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  size_t sVar19;
  bool bVar20;
  void *local_d0;
  int local_bc;
  undefined1 local_60 [48];
  
  FUN_10088a650(local_60);
  uVar1 = FUN_1008946a0(param_9);
  iVar2 = FUN_1008946d0(param_9);
  uVar3 = 0;
  if (-1 < iVar2) {
    pvVar4 = (void *)FUN_10081ddd0(uVar1,"p12_key.c",0x8d);
    pvVar5 = (void *)FUN_10081ddd0(iVar2,"p12_key.c",0x8e);
    puVar6 = (undefined1 *)FUN_10081ddd0(uVar1 + 1,"p12_key.c",0x8f);
    iVar16 = param_4 + -1 + uVar1;
    iVar15 = iVar16 % (int)uVar1;
    iVar16 = iVar16 - iVar15;
    uVar13 = 0;
    if (param_2 != 0) {
      iVar12 = param_2 + -1 + uVar1;
      uVar13 = iVar12 - iVar12 % (int)uVar1;
    }
    iVar12 = uVar13 + iVar16;
    puVar7 = (undefined1 *)FUN_10081ddd0(iVar12,"p12_key.c",0x96);
    lVar8 = FUN_10084b520();
    lVar9 = FUN_10084b520();
    if (((((pvVar4 != (void *)0x0) && (pvVar5 != (void *)0x0)) && (puVar6 != (undefined1 *)0x0)) &&
        ((puVar7 != (undefined1 *)0x0 && (lVar8 != 0)))) && (lVar9 != 0)) {
      if (0 < (int)uVar1) {
        _memset(pvVar4,param_5,(ulong)(uVar1 - 1) + 1);
      }
      puVar17 = puVar7;
      if (0 < iVar16) {
        uVar18 = ((uVar1 - 2) + param_4) - iVar15;
        uVar14 = 0;
        if ((((uVar1 - 1) + param_4) - iVar15 & 3) != 0) {
          uVar14 = 0;
          do {
            puVar7[uVar14] =
                 *(undefined1 *)
                  (param_3 +
                  (int)((long)((ulong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) %
                       (long)param_4));
            uVar14 = uVar14 + 1;
          } while ((((uVar1 - 1) + param_4) - iVar15 & 3) != (uint)uVar14);
          puVar17 = puVar7 + uVar14;
        }
        if (2 < uVar18) {
          do {
            iVar15 = (int)uVar14;
            *puVar17 = *(undefined1 *)
                        (param_3 +
                        (int)((long)((ulong)(uint)(iVar15 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) %
                             (long)param_4));
            puVar17[1] = *(undefined1 *)(param_3 + (iVar15 + 1) % param_4);
            puVar17[2] = *(undefined1 *)(param_3 + (iVar15 + 2) % param_4);
            puVar17[3] = *(undefined1 *)(param_3 + (int)(iVar15 + 3U) % param_4);
            uVar14 = (ulong)(iVar15 + 4);
            puVar17 = puVar17 + 4;
          } while (iVar15 + 3U != uVar18);
        }
        puVar17 = puVar7 + (ulong)uVar18 + 1;
      }
      if (0 < (int)uVar13) {
        uVar14 = 0;
        if ((uVar13 & 3) != 0) {
          uVar14 = 0;
          do {
            puVar17[uVar14] =
                 *(undefined1 *)
                  (param_1 +
                  (int)((long)((ulong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) %
                       (long)param_2));
            uVar14 = uVar14 + 1;
          } while ((uVar13 & 3) != (uint)uVar14);
          puVar17 = puVar17 + uVar14;
        }
        if (2 < uVar13 - 1) {
          do {
            iVar15 = (int)uVar14;
            *puVar17 = *(undefined1 *)
                        (param_1 +
                        (int)((long)((ulong)(uint)(iVar15 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) %
                             (long)param_2));
            puVar17[1] = *(undefined1 *)(param_1 + (iVar15 + 1) % param_2);
            puVar17[2] = *(undefined1 *)(param_1 + (iVar15 + 2) % param_2);
            puVar17[3] = *(undefined1 *)(param_1 + (int)(iVar15 + 3U) % param_2);
            uVar14 = (ulong)(iVar15 + 4);
            puVar17 = puVar17 + 4;
          } while (iVar15 + 3U != uVar13 - 1);
        }
      }
      iVar15 = FUN_10088a720(local_60,param_9,0);
      if (iVar15 != 0) {
        local_d0 = param_8;
        local_bc = param_7;
        sVar19 = (size_t)(int)uVar1;
        while( true ) {
          iVar15 = FUN_10088a910(local_60,pvVar4,sVar19);
          if (((iVar15 == 0) || (iVar15 = FUN_10088a910(local_60,puVar7,(long)iVar12), iVar15 == 0))
             || (iVar15 = FUN_10088a9c0(local_60,pvVar5,0), iVar15 == 0)) break;
          iVar15 = 1;
          if (1 < param_6) {
            do {
              iVar16 = FUN_10088a720(local_60,param_9,0);
              if (((iVar16 == 0) ||
                  (iVar16 = FUN_10088a910(local_60,pvVar5,(long)iVar2), iVar16 == 0)) ||
                 (iVar16 = FUN_10088a9c0(local_60,pvVar5,0), iVar16 == 0)) goto LAB_1008d74e8;
              iVar15 = iVar15 + 1;
            } while (iVar15 < param_6);
          }
          iVar15 = iVar2;
          if (local_bc <= iVar2) {
            iVar15 = local_bc;
          }
          _memcpy(local_d0,pvVar5,(long)iVar15);
          uVar3 = 1;
          if (local_bc - iVar2 == 0 || local_bc < iVar2) goto LAB_1008d750f;
          if (0 < (int)uVar1) {
            bVar20 = (uVar1 & 1) != 0;
            if (bVar20) {
              *puVar6 = *(undefined1 *)((long)pvVar5 + (long)(int)(0 % (long)iVar2));
            }
            uVar14 = (ulong)bVar20;
            if (uVar1 != 1) {
              do {
                puVar6[uVar14] =
                     *(undefined1 *)
                      ((long)pvVar5 +
                      (long)(int)((long)((ulong)(uint)((int)uVar14 >> 0x1f) << 0x20 |
                                        uVar14 & 0xffffffff) % (long)iVar2));
                iVar15 = (int)uVar14 + 1;
                puVar6[uVar14 + 1] = *(undefined1 *)((long)pvVar5 + (long)(iVar15 % iVar2));
                uVar14 = uVar14 + 2;
              } while (iVar15 != uVar1 - 1);
            }
          }
          lVar10 = FUN_10084bc20(puVar6,uVar1,lVar9);
          if ((lVar10 == 0) || (iVar15 = FUN_100850720(lVar9,1), iVar15 == 0)) break;
          lVar10 = 0;
          if (0 < iVar12) {
            do {
              puVar17 = puVar7 + lVar10;
              lVar11 = FUN_10084bc20(puVar17,uVar1,lVar8);
              if (((lVar11 == 0) || (iVar15 = FUN_100847940(lVar8,lVar8,lVar9), iVar15 == 0)) ||
                 (iVar15 = FUN_10084bdf0(lVar8,puVar6), iVar15 == 0)) goto LAB_1008d74e8;
              iVar15 = FUN_10084b410(lVar8);
              iVar15 = (int)(iVar15 + 7 + ((uint)(iVar15 + 7 >> 0x1f) >> 0x1d)) >> 3;
              if ((int)uVar1 < iVar15) {
                iVar15 = FUN_10084bdf0(lVar8,puVar6);
                if (iVar15 == 0) goto LAB_1008d74e8;
                _memcpy(puVar17,puVar6 + 1,sVar19);
              }
              else {
                if (uVar1 - iVar15 != 0 && iVar15 <= (int)uVar1) {
                  ___bzero(puVar17,(long)(int)(uVar1 - iVar15));
                  puVar17 = puVar7 + (lVar10 - iVar15) + sVar19;
                }
                iVar15 = FUN_10084bdf0(lVar8,puVar17);
                if (iVar15 == 0) goto LAB_1008d74e8;
              }
              lVar10 = lVar10 + sVar19;
            } while (lVar10 < iVar12);
          }
          local_d0 = (void *)((long)local_d0 + (long)iVar2);
          iVar15 = FUN_10088a720(local_60,param_9,0);
          local_bc = local_bc - iVar2;
          if (iVar15 == 0) break;
        }
      }
    }
LAB_1008d74e8:
    FUN_100887ce0(0x23,0x6f,0x41,"p12_key.c",0xda);
    uVar3 = 0;
LAB_1008d750f:
    FUN_10081e1a0(pvVar5);
    FUN_10081e1a0(puVar6);
    FUN_10081e1a0(pvVar4);
    FUN_10081e1a0(puVar7);
    FUN_10084b4b0(lVar8);
    FUN_10084b4b0(lVar9);
    FUN_10088aa50(local_60);
  }
  return uVar3;
}

