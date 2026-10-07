
long FUN_1003b2a40(long *param_1,long param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  
  lVar3 = *(long *)(param_2 + 0x40);
  uVar9 = (ulong)*(byte *)(lVar3 + 0x79) & 1;
  lVar13 = lVar3 + 0x80;
  if ((*(byte *)(lVar3 + 0x79) & 1) == 0) {
    lVar13 = lVar3 + 0x40;
  }
  lVar15 = (uVar9 + 1) * 0x40;
  if ((((*(byte *)(lVar3 + 0x39 + lVar15) & 1) == 0) &&
      (lVar16 = (2 - uVar9) * 0x40, (*(byte *)(lVar3 + 0x39 + lVar16) & 1) != 0)) &&
     (uVar18 = (uint)*(byte *)(lVar3 + 0x30), *(byte *)(lVar3 + 0x30) != 0)) {
LAB_1003b2ae0:
    do {
      uVar17 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
        }
      }
      uVar9 = (ulong)uVar17;
      if (uVar18 == 0) {
        uVar9 = 0xffffffff;
      }
      uVar17 = 1 << ((byte)uVar9 & 0x1f);
      uVar18 = ~uVar17 & uVar18;
      if (*(int *)(lVar3 + 0x28 + lVar16 + uVar9 * 4) == 0x7f800000) {
        bVar1 = *(byte *)(uVar9 + 0x31 + lVar15 + lVar3);
        uVar11 = (ulong)bVar1;
        plVar4 = (long *)FUN_1003b4120();
        if ((plVar4 != (long *)0x0) && (*(short *)(*plVar4 + 0x4c) == 1)) {
          lVar6 = *(long *)(*plVar4 + 0x40);
          uVar12 = (ulong)*(byte *)(lVar6 + 0x79) & 1;
          lVar14 = (uVar12 + 1) * 0x40;
          if (((*(byte *)(lVar6 + 0x39 + lVar14) & 1) == 0) &&
             ((lVar10 = (2 - uVar12) * 0x40, (*(byte *)(lVar6 + 0x39 + lVar10) & 1) != 0 &&
              (*(int *)(lVar10 + lVar6 + 0x28 + uVar11 * 4) == 0x7f800000)))) {
            lVar10 = lVar6 + 0x80;
            if ((*(byte *)(lVar6 + 0x79) & 1) == 0) {
              lVar10 = lVar6 + 0x40;
            }
            lVar5 = FUN_1003b4200(lVar6,plVar4,uVar11);
            if (lVar5 == lVar13) {
              *(byte *)(plVar4 + 6) = *(byte *)(plVar4 + 6) & ~(byte)(1 << (bVar1 & 0x1f));
            }
            uVar2 = *(undefined1 *)(uVar11 + 0x31 + lVar6 + lVar14);
            lVar6 = FUN_1003b42e0();
            lVar6 = *(long *)(lVar6 + 0x40);
            *(char *)(lVar6 + 0x30) = (char)uVar17;
            *(undefined1 *)(lVar6 + 0x71 + uVar9) = uVar2;
            FUN_1003aa7f0(lVar6 + 0x40);
            *(byte *)(lVar3 + 0x30) = *(byte *)(lVar3 + 0x30) & ~*(byte *)(lVar6 + 0x30);
            puVar7 = (undefined8 *)FUN_1003b44b0(param_1,lVar10,uVar2);
            FUN_1003b4640();
            param_2 = FUN_1003b4640();
            puVar8 = (undefined8 *)FUN_1003b4120();
            if (puVar7 != puVar8) {
              FUN_1003b4760(param_1,*puVar7,lVar6 + 0x40);
            }
            lVar6 = *param_1;
            lVar14 = *(long *)(lVar6 + 0x38);
            if (lVar14 != 0) {
              if (*(long *)(lVar14 + 0x30) == lVar6) {
                *(undefined8 *)(lVar14 + 0x30) = **(undefined8 **)(lVar6 + 8);
              }
              if (*(long *)(lVar14 + 0x28) == lVar6) {
                *(undefined8 *)(lVar14 + 0x28) = **(undefined8 **)(lVar6 + 0x10);
              }
            }
            lVar14 = *(long *)(lVar6 + 0x10);
            *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(lVar6 + 8);
            *(long *)(*(long *)(lVar6 + 8) + 0x10) = lVar14;
            *(long *)(lVar6 + 8) = lVar6;
            *(long *)(lVar6 + 0x10) = lVar6;
            if (uVar18 == 0) {
              return param_2;
            }
            if (param_2 == 0) {
              return 0;
            }
            goto LAB_1003b2ae0;
          }
        }
      }
    } while (uVar18 != 0);
  }
  return param_2;
}

