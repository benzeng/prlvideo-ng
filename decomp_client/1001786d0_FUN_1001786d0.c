
ulong FUN_1001786d0(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  uint *local_40;
  
  puVar12 = (uint *)*param_1;
  uVar2 = puVar12[2];
  uVar14 = 0;
  if ((int)uVar2 < (int)puVar12[3]) {
    piVar3 = (int *)*param_2;
    lVar4 = param_2[1];
    uVar14 = 0;
    lVar11 = (long)(int)uVar2 * 8;
    do {
      lVar8 = lVar11;
      if ((long)(int)puVar12[3] * 8 == lVar8) goto LAB_100178903;
      plVar5 = *(long **)((long)puVar12 + lVar8 + 0x10);
      lVar11 = *plVar5;
      lVar13 = 0;
      if ((lVar11 != 0) && (lVar13 = 0, *(int *)(lVar11 + 4) != 0)) {
        lVar13 = plVar5[1];
      }
      lVar9 = 0;
      if ((piVar3 != (int *)0x0) && (lVar9 = 0, piVar3[1] != 0)) {
        lVar9 = lVar4;
      }
      lVar11 = lVar8 + 8;
    } while (lVar13 != lVar9);
    uVar10 = lVar8 + (long)(int)uVar2 * -8;
    if ((uVar10 & 0x7fffffff8) != 0x7fffffff8) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        puVar12 = (uint *)*param_1;
      }
      if (1 < *puVar12) {
        FUN_100179750(param_1,puVar12[1]);
        puVar12 = (uint *)*param_1;
      }
      lVar11 = (long)(int)(uVar10 >> 3) + (long)(int)puVar12[2];
      local_40 = puVar12 + lVar11 * 2 + 4;
      uVar2 = puVar12[3];
      puVar6 = *(undefined8 **)(puVar12 + lVar11 * 2 + 4);
      if (puVar6 != (undefined8 *)0x0) {
        piVar7 = (int *)*puVar6;
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if ((*piVar7 == 0) && ((void *)*puVar6 != (void *)0x0)) {
            operator_delete((void *)*puVar6);
          }
        }
        operator_delete(puVar6);
      }
      puVar1 = puVar12 + (long)(int)uVar2 * 2 + 4;
      if (lVar11 + 1 != (long)(int)uVar2) {
        puVar12 = puVar12 + (lVar11 + 1) * 2 + 4;
        do {
          while( true ) {
            puVar6 = *(undefined8 **)puVar12;
            piVar7 = (int *)*puVar6;
            lVar11 = 0;
            if ((piVar7 != (int *)0x0) && (lVar11 = 0, piVar7[1] != 0)) {
              lVar11 = puVar6[1];
            }
            lVar8 = 0;
            if ((piVar3 != (int *)0x0) && (lVar8 = 0, piVar3[1] != 0)) {
              lVar8 = lVar4;
            }
            if (lVar11 != lVar8) break;
            if (puVar6 != (undefined8 *)0x0) {
              if (piVar7 != (int *)0x0) {
                LOCK();
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if ((*piVar7 == 0) && ((void *)*puVar6 != (void *)0x0)) {
                  operator_delete((void *)*puVar6);
                }
              }
              operator_delete(puVar6);
            }
            puVar12 = puVar12 + 2;
            if (puVar1 == puVar12) goto LAB_1001788d3;
          }
          *(undefined8 **)local_40 = puVar6;
          local_40 = local_40 + 2;
          puVar12 = puVar12 + 2;
        } while (puVar12 != puVar1);
      }
LAB_1001788d3:
      uVar14 = (ulong)((long)puVar1 - (long)local_40) >> 3;
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar14;
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          operator_delete(piVar3);
        }
      }
    }
  }
LAB_100178903:
  return uVar14 & 0xffffffff;
}

