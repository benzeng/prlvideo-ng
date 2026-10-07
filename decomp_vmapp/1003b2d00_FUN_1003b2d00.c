
long FUN_1003b2d00(long *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  long local_50;
  ulong local_48;
  undefined1 local_40;
  byte local_3f;
  
  lVar4 = *(long *)(param_2 + 0x40);
  bVar1 = *(byte *)(lVar4 + 0x75);
  uVar9 = ((ulong)bVar1 & 8) >> 3;
  lVar19 = lVar4 + 0x80;
  lVar5 = lVar4 + 0x40;
  if ((bVar1 & 8) == 0) {
    lVar19 = lVar4 + 0x40;
    lVar5 = lVar4 + 0x80;
  }
  lVar24 = (uVar9 + 1) * 0x40;
  if ((((*(byte *)(lVar4 + 0x39 + lVar24) & 1) == 0) &&
      (lVar23 = (2 - uVar9) * 0x40, (*(byte *)(lVar4 + 0x39 + lVar23) & 1) == 0)) &&
     (((*(byte *)(lVar4 + 0x35 + lVar23) ^ *(byte *)(lVar4 + 0x35 + lVar24)) & 8) != 0)) {
    uVar9 = (ulong)(bVar1 >> 3) & 1;
    uVar25 = 0;
    do {
      if ((*(byte *)(lVar4 + 0x30) >> ((uint)uVar25 & 0x1f) & 1) != 0) {
        bVar1 = *(byte *)(uVar9 * 0x40 + 0x71 + lVar4 + uVar25);
        bVar2 = *(byte *)(lVar4 + 0x31 + (2 - uVar9) * 0x40 + uVar25);
        uVar10 = (ulong)bVar2;
        plVar11 = (long *)FUN_1003b4120();
        if ((plVar11 != (long *)0x0) && (*(short *)(*plVar11 + 0x4c) == 0x22)) {
          lVar24 = *(long *)(*plVar11 + 0x40);
          uVar21 = (ulong)*(byte *)(lVar24 + 0x79) & 1;
          plVar22 = (long *)(lVar24 + 0x80);
          plVar6 = (long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar24 + 0x79) & 1) == 0) {
            plVar22 = (long *)(lVar24 + 0x40);
            plVar6 = (long *)(lVar24 + 0x80);
          }
          lVar23 = (uVar21 + 1) * 0x40;
          if ((((*(byte *)(lVar24 + 0x39 + lVar23) & 1) == 0) &&
              (lVar15 = (2 - uVar21) * 0x40, (*(byte *)(lVar24 + 0x39 + lVar15) & 1) != 0)) &&
             ((*(int *)(lVar15 + lVar24 + 0x28 + (ulong)bVar1 * 4) == 0 &&
              ((plVar12 = (long *)FUN_1003b4120(plVar22,lVar5,uVar10), plVar12 != (long *)0x0 &&
               (*(short *)(*plVar12 + 0x4c) == 0x22)))))) {
            lVar15 = *(long *)(*plVar12 + 0x40);
            uVar21 = (ulong)*(byte *)(lVar15 + 0xb9) & 1;
            plVar20 = (long *)(lVar15 + 0x40);
            if ((*(byte *)(lVar15 + 0xb9) & 1) == 0) {
              plVar20 = (long *)(lVar15 + 0x80);
            }
            lVar16 = (2 - uVar21) * 0x40;
            if ((((((((*(byte *)(lVar15 + 0x39 + lVar16) & 1) == 0) &&
                    (lVar18 = (uVar21 + 1) * 0x40, (*(byte *)(lVar15 + 0x39 + lVar18) & 1) != 0)) &&
                   (*(int *)(lVar18 + lVar15 + 0x28 + uVar10 * 4) == 0)) &&
                  (((int)((ulong)((long)plVar22 - *(long *)(*plVar22 + 0x40)) >> 6) !=
                    (int)((ulong)((long)plVar20 - *(long *)(*plVar20 + 0x40)) >> 6) &&
                   (*(int *)(lVar24 + 0x28 + lVar23) == *(int *)(lVar15 + 0x28 + lVar16))))) &&
                 ((bVar17 = *(byte *)(lVar15 + 0x35 + lVar16) ^ *(byte *)(lVar24 + 0x35 + lVar23),
                  (bVar17 & 8) == 0 &&
                  (((bVar17 & 0x10) == 0 &&
                   (*(int *)(lVar24 + 0x2c + lVar23) == *(int *)(lVar15 + 0x2c + lVar16))))))) &&
                (*(char *)(lVar24 + 0x38 + lVar23) == *(char *)(lVar15 + 0x38 + lVar16))) &&
               (cVar3 = *(char *)((ulong)bVar1 + 0x31 + lVar24 + lVar23),
               cVar3 == *(char *)(uVar10 + 0x31 + lVar15 + lVar16))) {
              plVar7 = plVar22;
              if (*(uint *)(*(long *)(lVar15 + lVar16) + 0x34) <
                  *(uint *)(*(long *)(lVar24 + lVar23) + 0x34)) {
                plVar7 = plVar20;
              }
              puVar13 = (undefined8 *)FUN_1003b44b0(param_1,plVar7,cVar3);
              puVar14 = (undefined8 *)FUN_1003b4120();
              if (puVar13 == puVar14) {
                lVar24 = FUN_1003b4200();
                if (lVar24 == lVar19) {
                  *(byte *)(plVar11 + 6) = *(byte *)(plVar11 + 6) & ~(byte)(1 << (bVar1 & 0x1f));
                }
                lVar24 = FUN_1003b4200();
                if (lVar24 == lVar5) {
                  *(byte *)(plVar12 + 6) = *(byte *)(plVar12 + 6) & ~(byte)(1 << (bVar2 & 0x1f));
                }
                local_78 = 0;
                uStack_70 = 0;
                local_68 = &local_78;
                local_60 = &local_68;
                local_3f = local_3f & 0xfe;
                local_50 = plVar7[5];
                local_48 = plVar7[6];
                local_40 = (undefined1)plVar7[7];
                if ((uint)((ulong)((long)plVar6 - *(long *)(*plVar6 + 0x40)) >> 6) <
                    (uint)((ulong)((long)plVar22 - *(long *)(*plVar22 + 0x40)) >> 6)) {
                  local_48 = local_48 ^ 0x80000000000;
                }
                local_58 = local_60;
                lVar24 = FUN_1003b42e0();
                lVar24 = *(long *)(lVar24 + 0x40);
                *(char *)(lVar24 + 0x30) = (char)(1 << ((byte)uVar25 & 0x1f));
                *(char *)(lVar24 + 0x71 + uVar25) = cVar3;
                FUN_1003aa7f0(lVar24 + 0x40);
                *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) & ~*(byte *)(lVar24 + 0x30);
                FUN_1003b4640();
                FUN_1003b4640();
                param_2 = FUN_1003b4640();
                puVar14 = (undefined8 *)FUN_1003b4120();
                if (puVar13 != puVar14) {
                  FUN_1003b4760(param_1,*puVar13,lVar24 + 0x40);
                }
                ppuVar8 = local_58;
                lVar24 = *param_1;
                lVar23 = *(long *)(lVar24 + 0x38);
                if (lVar23 != 0) {
                  if (*(long *)(lVar23 + 0x30) == lVar24) {
                    *(undefined8 *)(lVar23 + 0x30) = **(undefined8 **)(lVar24 + 8);
                  }
                  if (*(long *)(lVar23 + 0x28) == lVar24) {
                    *(undefined8 *)(lVar23 + 0x28) = **(undefined8 **)(lVar24 + 0x10);
                  }
                }
                lVar23 = *(long *)(lVar24 + 0x10);
                *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar24 + 8);
                *(long *)(*(long *)(lVar24 + 8) + 0x10) = lVar23;
                *(long *)(lVar24 + 8) = lVar24;
                *(long *)(lVar24 + 0x10) = lVar24;
                local_58[1] = local_60;
                local_60[2] = ppuVar8;
              }
              else {
                lVar24 = *param_1;
                lVar23 = *(long *)(lVar24 + 0x38);
                if (lVar23 != 0) {
                  if (*(long *)(lVar23 + 0x30) == lVar24) {
                    *(undefined8 *)(lVar23 + 0x30) = **(undefined8 **)(lVar24 + 8);
                  }
                  if (*(long *)(lVar23 + 0x28) == lVar24) {
                    *(undefined8 *)(lVar23 + 0x28) = **(undefined8 **)(lVar24 + 0x10);
                  }
                }
                lVar23 = *(long *)(lVar24 + 0x10);
                *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar24 + 8);
                *(long *)(*(long *)(lVar24 + 8) + 0x10) = lVar23;
                *(long *)(lVar24 + 8) = lVar24;
                *(long *)(lVar24 + 0x10) = lVar24;
              }
            }
          }
        }
      }
      uVar25 = uVar25 + 1;
    } while ((uVar25 < 4) && (param_2 != 0));
  }
  return param_2;
}

