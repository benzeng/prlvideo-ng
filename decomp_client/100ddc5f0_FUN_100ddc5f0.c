
/* WARNING: Removing unreachable block (ram,0x000100ddc755) */
/* WARNING: Removing unreachable block (ram,0x000100ddc760) */

undefined8 FUN_100ddc5f0(int *param_1,int *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong *puVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  
  uVar9 = 0xffffffea;
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_1 == *param_2)) {
    uVar17 = 0;
    if (param_1[1] == 0) {
      uVar9 = 0;
    }
    else {
      do {
        uVar18 = (ulong)uVar17;
        puVar14 = *(ulong **)(param_2 + uVar18 * 2 + 2);
        if ((puVar14 != (ulong *)0x0) &&
           (puVar1 = *(ulong **)(param_1 + uVar18 * 2 + 2), puVar1 != (ulong *)0x1)) {
          if (puVar14 == (ulong *)0x1) {
            if (puVar1 != (ulong *)0x0) goto LAB_100ddc80b;
          }
          else {
            if (puVar1 == (ulong *)0x0) {
              pvVar10 = _valloc(0x1000);
              if (pvVar10 == (void *)0x0) {
                return 0xfffffff4;
              }
              ___bzero(pvVar10,0x1000);
              *(void **)(param_1 + uVar18 * 2 + 2) = pvVar10;
              _memcpy(pvVar10,*(void **)(param_2 + uVar18 * 2 + 2),0x1000);
              goto LAB_100ddc820;
            }
            if ((puVar14 + 0x1ff < puVar1) || (bVar8 = false, puVar1 + 0x1ff < puVar14)) {
              puVar11 = puVar14 + 0x200;
              puVar13 = puVar1 + 0x200;
              lVar16 = 0;
              do {
                uVar2 = (puVar14 + lVar16)[1];
                uVar4 = puVar14[lVar16 + 2];
                uVar5 = (puVar14 + lVar16 + 2)[1];
                uVar3 = (puVar1 + lVar16)[1];
                uVar6 = puVar1[lVar16 + 2];
                uVar7 = (puVar1 + lVar16 + 2)[1];
                puVar1[lVar16] = puVar1[lVar16] | puVar14[lVar16];
                (puVar1 + lVar16)[1] = uVar3 | uVar2;
                puVar1[lVar16 + 2] = uVar6 | uVar4;
                (puVar1 + lVar16 + 2)[1] = uVar7 | uVar5;
                lVar16 = lVar16 + 4;
              } while (lVar16 != 0x200);
              iVar15 = 0x200;
              bVar8 = true;
            }
            else {
              iVar15 = 0;
              puVar11 = puVar14;
              puVar13 = puVar1;
            }
            uVar12 = 0x8000;
            puVar14 = puVar1;
            if ((!bVar8) && (2 < 0x1ffU - iVar15)) {
              iVar15 = 0x200 - iVar15;
              do {
                *puVar13 = *puVar13 | *puVar11;
                puVar13[1] = puVar13[1] | puVar11[1];
                puVar13[2] = puVar13[2] | puVar11[2];
                puVar13[3] = puVar13[3] | puVar11[3];
                puVar11 = puVar11 + 4;
                puVar13 = puVar13 + 4;
                iVar15 = iVar15 + -4;
              } while (iVar15 != 0);
            }
            do {
              if ((((*puVar14 != 0xffffffffffffffff) || (puVar14[1] != 0xffffffffffffffff)) ||
                  (puVar14[2] != 0xffffffffffffffff)) || (puVar14[3] != 0xffffffffffffffff))
              goto LAB_100ddc820;
              uVar12 = uVar12 - 0x100;
              puVar14 = puVar14 + 4;
            } while (0x3f < uVar12);
LAB_100ddc80b:
            _free(puVar1);
          }
          (param_1 + uVar18 * 2 + 2)[0] = 1;
          (param_1 + uVar18 * 2 + 2)[1] = 0;
        }
LAB_100ddc820:
        uVar17 = uVar17 + 1;
        uVar9 = 0;
      } while (uVar17 < (uint)param_1[1]);
    }
  }
  return uVar9;
}

