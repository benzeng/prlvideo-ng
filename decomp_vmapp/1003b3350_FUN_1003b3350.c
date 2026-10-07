
long FUN_1003b3350(long *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  byte bVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  long local_50;
  ulong local_48;
  undefined1 local_40;
  byte local_3f;
  
  lVar11 = 0;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x40);
    uVar27 = 0;
    lVar11 = param_2;
    do {
      if ((*(byte *)(lVar5 + 0x30) >> ((uint)uVar27 & 0x1f) & 1) != 0) {
        bVar1 = *(byte *)(lVar5 + 0x71 + uVar27);
        plVar12 = (long *)FUN_1003b4120();
        if ((plVar12 != (long *)0x0) && (*(short *)(*plVar12 + 0x4c) == 0x1e)) {
          lVar6 = *(long *)(*plVar12 + 0x40);
          uVar23 = ((ulong)*(byte *)(lVar6 + 0x75) & 8) >> 3;
          lVar26 = lVar6 + 0x80;
          lVar7 = lVar6 + 0x40;
          if ((*(byte *)(lVar6 + 0x75) & 8) == 0) {
            lVar26 = lVar6 + 0x40;
            lVar7 = lVar6 + 0x80;
          }
          lVar19 = (uVar23 + 1) * 0x40;
          if ((((*(byte *)(lVar6 + 0x39 + lVar19) & 1) == 0) &&
              (lVar24 = (2 - uVar23) * 0x40, (*(byte *)(lVar6 + 0x39 + lVar24) & 1) == 0)) &&
             (((*(byte *)(lVar6 + 0x35 + lVar24) ^ *(byte *)(lVar6 + 0x35 + lVar19)) & 8) != 0)) {
            bVar2 = *(byte *)((ulong)bVar1 + 0x31 + lVar19 + lVar6);
            bVar3 = *(byte *)((ulong)bVar1 + 0x31 + lVar24 + lVar6);
            uVar23 = (ulong)bVar3;
            plVar13 = (long *)FUN_1003b4120(lVar24 + lVar6,lVar26);
            if ((plVar13 != (long *)0x0) && (*(short *)(*plVar13 + 0x4c) == 0x31)) {
              lVar6 = *(long *)(*plVar13 + 0x40);
              uVar21 = (ulong)*(byte *)(lVar6 + 0x79) & 1;
              plVar25 = (long *)(lVar6 + 0x80);
              plVar8 = (long *)(lVar6 + 0x40);
              if ((*(byte *)(lVar6 + 0x79) & 1) == 0) {
                plVar25 = (long *)(lVar6 + 0x40);
                plVar8 = (long *)(lVar6 + 0x80);
              }
              lVar19 = (uVar21 + 1) * 0x40;
              if ((((*(byte *)(lVar6 + 0x39 + lVar19) & 1) == 0) &&
                  (lVar24 = (2 - uVar21) * 0x40, (*(byte *)(lVar6 + 0x39 + lVar24) & 1) != 0)) &&
                 ((*(int *)(lVar24 + lVar6 + 0x28 + (ulong)bVar2 * 4) == 0 &&
                  ((plVar14 = (long *)FUN_1003b4120(plVar25,lVar7,uVar23), plVar14 != (long *)0x0 &&
                   (*(short *)(*plVar14 + 0x4c) == 0x31)))))) {
                lVar24 = *(long *)(*plVar14 + 0x40);
                uVar21 = (ulong)*(byte *)(lVar24 + 0xb9) & 1;
                plVar22 = (long *)(lVar24 + 0x40);
                if ((*(byte *)(lVar24 + 0xb9) & 1) == 0) {
                  plVar22 = (long *)(lVar24 + 0x80);
                }
                lVar17 = (2 - uVar21) * 0x40;
                if ((((((((*(byte *)(lVar24 + 0x39 + lVar17) & 1) == 0) &&
                        (lVar20 = (uVar21 + 1) * 0x40, (*(byte *)(lVar24 + 0x39 + lVar20) & 1) != 0)
                        ) && (*(int *)(lVar20 + lVar24 + 0x28 + uVar23 * 4) == 0)) &&
                      (((int)((ulong)((long)plVar25 - *(long *)(*plVar25 + 0x40)) >> 6) !=
                        (int)((ulong)((long)plVar22 - *(long *)(*plVar22 + 0x40)) >> 6) &&
                       (*(int *)(lVar6 + 0x28 + lVar19) == *(int *)(lVar24 + 0x28 + lVar17))))) &&
                     ((bVar18 = *(byte *)(lVar24 + 0x35 + lVar17) ^ *(byte *)(lVar6 + 0x35 + lVar19)
                      , (bVar18 & 8) == 0 &&
                      (((bVar18 & 0x10) == 0 &&
                       (*(int *)(lVar6 + 0x2c + lVar19) == *(int *)(lVar24 + 0x2c + lVar17))))))) &&
                    (*(char *)(lVar6 + 0x38 + lVar19) == *(char *)(lVar24 + 0x38 + lVar17))) &&
                   (cVar4 = *(char *)((ulong)bVar2 + 0x31 + lVar6 + lVar19),
                   cVar4 == *(char *)(uVar23 + 0x31 + lVar24 + lVar17))) {
                  plVar9 = plVar25;
                  if (*(uint *)(*(long *)(lVar24 + lVar17) + 0x34) <
                      *(uint *)(*(long *)(lVar6 + lVar19) + 0x34)) {
                    plVar9 = plVar22;
                  }
                  puVar15 = (undefined8 *)FUN_1003b44b0(param_1,plVar9,cVar4);
                  puVar16 = (undefined8 *)FUN_1003b4120();
                  if (puVar15 == puVar16) {
                    lVar11 = FUN_1003b4200();
                    if (lVar11 == lVar26) {
                      *(byte *)(plVar13 + 6) = *(byte *)(plVar13 + 6) & ~(byte)(1 << (bVar2 & 0x1f))
                      ;
                    }
                    lVar11 = FUN_1003b4200();
                    if (lVar11 == lVar7) {
                      *(byte *)(plVar14 + 6) = *(byte *)(plVar14 + 6) & ~(byte)(1 << (bVar3 & 0x1f))
                      ;
                    }
                    lVar11 = FUN_1003b4200();
                    if (lVar11 == lVar5 + 0x40) {
                      *(byte *)(plVar12 + 6) = *(byte *)(plVar12 + 6) & ~(byte)(1 << (bVar1 & 0x1f))
                      ;
                    }
                    local_78 = 0;
                    uStack_70 = 0;
                    local_68 = &local_78;
                    local_60 = &local_68;
                    local_3f = local_3f & 0xfe;
                    local_50 = plVar9[5];
                    local_48 = plVar9[6];
                    local_40 = (undefined1)plVar9[7];
                    if ((uint)((ulong)((long)plVar8 - *(long *)(*plVar8 + 0x40)) >> 6) <
                        (uint)((ulong)((long)plVar25 - *(long *)(*plVar25 + 0x40)) >> 6)) {
                      local_48 = local_48 ^ 0x80000000000;
                    }
                    local_58 = local_60;
                    lVar11 = FUN_1003b42e0();
                    lVar6 = *(long *)(lVar11 + 0x40);
                    *(char *)(lVar6 + 0x30) = (char)(1 << ((byte)uVar27 & 0x1f));
                    *(char *)(lVar6 + 0x71 + uVar27) = cVar4;
                    FUN_1003aa7f0(lVar6 + 0x40);
                    *(byte *)(lVar5 + 0x30) = *(byte *)(lVar5 + 0x30) & ~*(byte *)(lVar6 + 0x30);
                    FUN_1003b4640();
                    FUN_1003b4640();
                    FUN_1003b4640();
                    lVar11 = FUN_1003b4640();
                    puVar16 = (undefined8 *)FUN_1003b4120();
                    if (puVar15 != puVar16) {
                      FUN_1003b4760(param_1,*puVar15,lVar6 + 0x40);
                    }
                    ppuVar10 = local_58;
                    lVar6 = *param_1;
                    lVar7 = *(long *)(lVar6 + 0x38);
                    if (lVar7 != 0) {
                      if (*(long *)(lVar7 + 0x30) == lVar6) {
                        *(undefined8 *)(lVar7 + 0x30) = **(undefined8 **)(lVar6 + 8);
                      }
                      if (*(long *)(lVar7 + 0x28) == lVar6) {
                        *(undefined8 *)(lVar7 + 0x28) = **(undefined8 **)(lVar6 + 0x10);
                      }
                    }
                    lVar7 = *(long *)(lVar6 + 0x10);
                    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar6 + 8);
                    *(long *)(*(long *)(lVar6 + 8) + 0x10) = lVar7;
                    *(long *)(lVar6 + 8) = lVar6;
                    *(long *)(lVar6 + 0x10) = lVar6;
                    local_58[1] = local_60;
                    local_60[2] = ppuVar10;
                  }
                  else {
                    lVar6 = *param_1;
                    lVar7 = *(long *)(lVar6 + 0x38);
                    if (lVar7 != 0) {
                      if (*(long *)(lVar7 + 0x30) == lVar6) {
                        *(undefined8 *)(lVar7 + 0x30) = **(undefined8 **)(lVar6 + 8);
                      }
                      if (*(long *)(lVar7 + 0x28) == lVar6) {
                        *(undefined8 *)(lVar7 + 0x28) = **(undefined8 **)(lVar6 + 0x10);
                      }
                    }
                    lVar7 = *(long *)(lVar6 + 0x10);
                    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar6 + 8);
                    *(long *)(*(long *)(lVar6 + 8) + 0x10) = lVar7;
                    *(long *)(lVar6 + 8) = lVar6;
                    *(long *)(lVar6 + 0x10) = lVar6;
                  }
                }
              }
            }
          }
        }
      }
      uVar27 = uVar27 + 1;
    } while ((uVar27 < 4) && (lVar11 != 0));
  }
  return lVar11;
}

