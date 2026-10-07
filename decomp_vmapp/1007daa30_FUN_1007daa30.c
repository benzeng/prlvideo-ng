
undefined8 FUN_1007daa30(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  
  uVar8 = 0;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (long)*(int *)((long)param_1 + 0x24);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2 - *param_1;
    uVar6 = SUB168(auVar5 / auVar4,0);
    iVar15 = *(int *)((long)param_1 + 0x2c);
    uVar13 = SUB164(auVar5 / auVar4,0);
    uVar8 = 0xffffffff;
    if ((int)uVar13 <= iVar15) {
      lVar16 = param_1[2];
      lVar10 = (long)(int)uVar13 * 0x10;
      plVar1 = (long *)(lVar16 + lVar10);
      if (*(long **)(lVar16 + lVar10) == plVar1) {
        lVar11 = param_1[1];
        lVar12 = param_1[3];
        lVar14 = (ulong)*(byte *)(lVar11 + (int)uVar13) * 0x10;
        lVar2 = *(long *)(lVar12 + lVar14);
        *(long **)(lVar2 + 8) = plVar1;
        *plVar1 = lVar2;
        *(long *)(lVar16 + 8 + lVar10) = lVar12 + lVar14;
        *(long **)(lVar12 + lVar14) = plVar1;
        uVar7 = 0;
        uVar8 = 0;
        if (-1 < (int)uVar13) {
          lVar10 = (long)(int)uVar13;
          bVar9 = *(byte *)(lVar11 + lVar10);
          uVar8 = uVar7;
          if (((int)uVar13 < iVar15) &&
             (uVar13 = 1 << (bVar9 & 0x1f) ^ uVar13, (int)uVar13 < iVar15)) {
            while ((uint)bVar9 != *(uint *)(param_1 + 5)) {
              lVar12 = (long)(int)uVar13 * 0x10;
              plVar1 = (long *)(lVar16 + lVar12);
              if (*(long **)(lVar16 + lVar12) == plVar1) {
                return 0;
              }
              if (*(byte *)(lVar11 + (int)uVar13) != bVar9) {
                return 0;
              }
              uVar17 = bVar9 + 1;
              lVar10 = lVar10 * 0x10;
              lVar2 = *(long *)(lVar16 + lVar10);
              plVar3 = *(long **)(lVar16 + 8 + lVar10);
              *(long **)(lVar2 + 8) = plVar3;
              *plVar3 = lVar2;
              *(long *)(lVar16 + lVar10) = lVar16 + lVar10;
              *(long *)(lVar16 + 8 + lVar10) = lVar16 + lVar10;
              plVar3 = *(long **)(lVar16 + 8 + lVar12);
              lVar10 = *plVar1;
              *(long **)(lVar10 + 8) = plVar3;
              *plVar3 = lVar10;
              *plVar1 = (long)plVar1;
              *(long **)(lVar16 + 8 + lVar12) = plVar1;
              iVar15 = (int)uVar6;
              uVar6 = uVar6 & 0xffffffff;
              if ((int)uVar13 <= iVar15) {
                uVar6 = (ulong)uVar13;
              }
              uVar13 = (uint)uVar6;
              lVar10 = (long)(int)uVar13;
              *(char *)(lVar11 + lVar10) = (char)uVar17;
              lVar16 = param_1[2];
              lVar12 = param_1[3];
              lVar11 = lVar10 * 0x10;
              lVar14 = (ulong)uVar17 * 0x10;
              lVar2 = *(long *)(lVar12 + lVar14);
              *(long *)(lVar2 + 8) = lVar16 + lVar11;
              *(long *)(lVar16 + lVar11) = lVar2;
              *(long *)(lVar16 + 8 + lVar11) = lVar12 + lVar14;
              *(long *)(lVar12 + lVar14) = lVar16 + lVar11;
              if ((int)uVar13 < 0) {
                return 0;
              }
              lVar11 = param_1[1];
              bVar9 = *(byte *)(lVar11 + lVar10);
              if (*(int *)((long)param_1 + 0x2c) <= (int)uVar13) {
                return 0;
              }
              uVar13 = 1 << (bVar9 & 0x1f) ^ uVar13;
              if (*(int *)((long)param_1 + 0x2c) <= (int)uVar13) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return uVar8;
}

