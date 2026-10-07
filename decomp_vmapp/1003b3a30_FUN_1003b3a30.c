
long FUN_1003b3a30(long *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  uint uVar28;
  
  lVar6 = *(long *)(param_2 + 0x40);
  uVar28 = (uint)*(byte *)(lVar6 + 0x30);
  if ((*(byte *)(lVar6 + 0x30) != 0) && (param_2 != 0)) {
    do {
      uVar21 = 0;
      if (uVar28 != 0) {
        for (; (uVar28 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
        }
      }
      uVar18 = (ulong)uVar21;
      if (uVar28 == 0) {
        uVar18 = 0xffffffff;
      }
      uVar21 = 1 << ((byte)uVar18 & 0x1f);
      uVar28 = ~uVar21 & uVar28;
      bVar1 = *(byte *)(lVar6 + 0x71 + uVar18);
      uVar12 = (ulong)bVar1;
      plVar10 = (long *)FUN_1003b4120();
      if (((((plVar10 != (long *)0x0) && (*(short *)(*plVar10 + 0x4c) == 0x37)) &&
           (lVar9 = *(long *)(*plVar10 + 0x40), (*(byte *)(lVar9 + 0x79) & 1) == 0)) &&
          (((*(byte *)(lVar9 + 0xb9) & 1) == 0 && ((*(byte *)(lVar9 + 0xf9) & 1) != 0)))) &&
         (*(int *)(lVar9 + 0xe8 + uVar12 * 4) == 0)) {
        bVar2 = *(byte *)(lVar9 + 0xb1 + uVar12);
        uVar22 = (ulong)bVar2;
        plVar11 = (long *)FUN_1003b4120();
        if ((((plVar11 != (long *)0x0) && (*(short *)(*plVar10 + 0x4c) == 0x37)) &&
            ((lVar8 = *(long *)(*plVar11 + 0x40), (*(byte *)(lVar8 + 0x79) & 1) == 0 &&
             ((((*(byte *)(lVar8 + 0xf9) & 1) != 0 && (*(int *)(lVar8 + 0xe8 + uVar22 * 4) == 1)) &&
              ((*(byte *)(lVar8 + 0xb9) & 1) != 0)))))) &&
           (*(int *)(lVar8 + 0xa8 + uVar22 * 4) == -1)) {
          bVar3 = *(byte *)(lVar9 + 0x71 + uVar12);
          bVar4 = *(byte *)(lVar8 + 0x71 + uVar22);
          uVar12 = (ulong)bVar4;
          plVar13 = (long *)FUN_1003b4120();
          if ((plVar13 != (long *)0x0) && (*(short *)(*plVar13 + 0x4c) == 1)) {
            lVar7 = *(long *)(*plVar13 + 0x40);
            uVar22 = (ulong)*(byte *)(lVar7 + 0x79) & 1;
            plVar24 = (long *)(lVar7 + 0x80);
            if ((*(byte *)(lVar7 + 0x79) & 1) == 0) {
              plVar24 = (long *)(lVar7 + 0x40);
            }
            lVar26 = (uVar22 + 1) * 0x40;
            if ((((*(byte *)(lVar7 + 0x39 + lVar26) & 1) == 0) &&
                (lVar19 = (2 - uVar22) * 0x40, (*(byte *)(lVar7 + 0x39 + lVar19) & 1) != 0)) &&
               (*(int *)(lVar19 + lVar7 + 0x28 + (ulong)bVar3 * 4) == 0x7fffffff)) {
              plVar14 = (long *)FUN_1003b4120(plVar24,lVar8 + 0x40,uVar12);
              if ((plVar14 != (long *)0x0) && (*(short *)(*plVar14 + 0x4c) == 1)) {
                lVar19 = *(long *)(*plVar14 + 0x40);
                uVar22 = (ulong)*(byte *)(lVar19 + 0x79) & 1;
                plVar15 = (long *)(lVar19 + 0x80);
                if ((*(byte *)(lVar19 + 0x79) & 1) == 0) {
                  plVar15 = (long *)(lVar19 + 0x40);
                }
                lVar25 = (uVar22 + 1) * 0x40;
                if ((((((*(byte *)(lVar19 + 0x39 + lVar25) & 1) == 0) &&
                      (lVar23 = (2 - uVar22) * 0x40, (*(byte *)(lVar19 + 0x39 + lVar23) & 1) != 0))
                     && (*(int *)(lVar23 + lVar19 + 0x28 + uVar12 * 4) == -0x80000000)) &&
                    ((*(int *)(lVar7 + 0x28 + lVar26) == *(int *)(lVar19 + 0x28 + lVar25) &&
                     (bVar20 = *(byte *)(lVar19 + 0x35 + lVar25) ^ *(byte *)(lVar7 + 0x35 + lVar26),
                     (bVar20 & 8) == 0)))) &&
                   ((((bVar20 & 0x10) == 0 &&
                     ((*(int *)(lVar7 + 0x2c + lVar26) == *(int *)(lVar19 + 0x2c + lVar25) &&
                      (*(char *)(lVar7 + 0x38 + lVar26) == *(char *)(lVar19 + 0x38 + lVar25))))) &&
                    (cVar5 = *(char *)((ulong)bVar3 + 0x31 + lVar7 + lVar26),
                    cVar5 == *(char *)(uVar12 + 0x31 + lVar19 + lVar25))))) {
                  plVar27 = plVar15;
                  if (*(uint *)(*(long *)(lVar19 + lVar25) + 0x34) <
                      *(uint *)(*(long *)(lVar7 + lVar26) + 0x34)) {
                    plVar27 = plVar24;
                    plVar24 = plVar15;
                  }
                  puVar16 = (undefined8 *)FUN_1003b44b0(param_1,plVar24,cVar5);
                  if ((*plVar24 == *plVar27) ||
                     (puVar17 = (undefined8 *)FUN_1003b4120(), puVar16 == puVar17)) {
                    lVar7 = FUN_1003b4200();
                    if (lVar7 == lVar8 + 0x40) {
                      *(byte *)(plVar14 + 6) = *(byte *)(plVar14 + 6) & ~(byte)(1 << (bVar4 & 0x1f))
                      ;
                    }
                    lVar8 = FUN_1003b4200();
                    if (lVar8 == lVar9 + 0x40) {
                      *(byte *)(plVar13 + 6) = *(byte *)(plVar13 + 6) & ~(byte)(1 << (bVar3 & 0x1f))
                      ;
                    }
                    lVar8 = FUN_1003b4200();
                    if (lVar8 == lVar9 + 0x80) {
                      *(byte *)(plVar11 + 6) = *(byte *)(plVar11 + 6) & ~(byte)(1 << (bVar2 & 0x1f))
                      ;
                    }
                    lVar9 = FUN_1003b4200();
                    if (lVar9 == lVar6 + 0x40) {
                      *(byte *)(plVar10 + 6) = *(byte *)(plVar10 + 6) & ~(byte)(1 << (bVar1 & 0x1f))
                      ;
                    }
                    lVar9 = FUN_1003b42e0();
                    lVar9 = *(long *)(lVar9 + 0x40);
                    *(char *)(lVar9 + 0x30) = (char)uVar21;
                    *(char *)(lVar9 + 0x71 + uVar18) = cVar5;
                    FUN_1003aa7f0();
                    *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) & ~*(byte *)(lVar9 + 0x30);
                    FUN_1003b4640();
                    if (plVar13 != plVar14) {
                      FUN_1003b4640();
                    }
                    FUN_1003b4640();
                    FUN_1003b4640();
                    param_2 = FUN_1003b4640();
                    puVar17 = (undefined8 *)FUN_1003b4120();
                    if (puVar16 != puVar17) {
                      FUN_1003b4760(param_1,*puVar16,lVar9 + 0x40);
                    }
                    lVar9 = *param_1;
                    lVar8 = *(long *)(lVar9 + 0x38);
                    if (lVar8 != 0) {
                      if (*(long *)(lVar8 + 0x30) == lVar9) {
                        *(undefined8 *)(lVar8 + 0x30) = **(undefined8 **)(lVar9 + 8);
                      }
                      if (*(long *)(lVar8 + 0x28) == lVar9) {
                        *(undefined8 *)(lVar8 + 0x28) = **(undefined8 **)(lVar9 + 0x10);
                      }
                    }
                    lVar8 = *(long *)(lVar9 + 0x10);
                    *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar9 + 8);
                    *(long *)(*(long *)(lVar9 + 8) + 0x10) = lVar8;
                    *(long *)(lVar9 + 8) = lVar9;
                    *(long *)(lVar9 + 0x10) = lVar9;
                  }
                  else {
                    lVar9 = *param_1;
                    lVar8 = *(long *)(lVar9 + 0x38);
                    if (lVar8 != 0) {
                      if (*(long *)(lVar8 + 0x30) == lVar9) {
                        *(undefined8 *)(lVar8 + 0x30) = **(undefined8 **)(lVar9 + 8);
                      }
                      if (*(long *)(lVar8 + 0x28) == lVar9) {
                        *(undefined8 *)(lVar8 + 0x28) = **(undefined8 **)(lVar9 + 0x10);
                      }
                    }
                    lVar8 = *(long *)(lVar9 + 0x10);
                    *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar9 + 8);
                    *(long *)(*(long *)(lVar9 + 8) + 0x10) = lVar8;
                    *(long *)(lVar9 + 8) = lVar9;
                    *(long *)(lVar9 + 0x10) = lVar9;
                  }
                }
              }
            }
          }
        }
      }
    } while ((uVar28 != 0) && (param_2 != 0));
  }
  return param_2;
}

