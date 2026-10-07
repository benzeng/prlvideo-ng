
undefined8 FUN_10034c070(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar10 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar10 = 0;
    if (*(long **)(param_1 + 0x27d8) != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x27d8);
      plVar7 = (long *)(param_1 + 0x27d8);
      do {
        while (plVar8 = plVar6, *(uint *)(param_2 + 8) <= *(uint *)(plVar8 + 4)) {
          plVar6 = (long *)*plVar8;
          plVar7 = plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_10034c0e0;
        }
        plVar4 = plVar8 + 1;
        plVar8 = plVar7;
        plVar6 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
LAB_10034c0e0:
      if ((plVar8 != (long *)(param_1 + 0x27d8)) &&
         (*(uint *)(plVar8 + 4) <= *(uint *)(param_2 + 8))) {
        lVar9 = plVar8[5];
        iVar5 = *(int *)(lVar9 + 0x38);
        lVar3 = 0xb;
        while (iVar5 != 0) {
          lVar1 = *(long *)(param_1 + lVar3 * 8);
          if ((lVar1 == lVar9) && (lVar1 != 0)) {
            *(int *)(lVar9 + 0x38) = iVar5 + -1;
            *(undefined8 *)(param_1 + lVar3 * 8) = 0;
            lVar9 = plVar8[5];
            iVar5 = *(int *)(lVar9 + 0x38);
          }
          if (0x5f < lVar3 - 10U) break;
          lVar3 = lVar3 + 1;
        }
        FUN_100362ab0(*(undefined8 *)(param_1 + 0x2778));
        pvVar2 = (void *)plVar8[5];
        if (pvVar2 != (void *)0x0) {
          FUN_1003dd2d0((long)pvVar2 + 0x3c);
          operator_delete(pvVar2);
        }
        plVar6 = plVar8;
        plVar7 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar6[2];
            bVar11 = (long *)*plVar4 != plVar6;
            plVar6 = plVar4;
          } while (bVar11);
        }
        else {
          do {
            plVar4 = plVar7;
            plVar7 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x27d0) == plVar8) {
          *(long **)(param_1 + 0x27d0) = plVar4;
        }
        *(long *)(param_1 + 0x27e0) = *(long *)(param_1 + 0x27e0) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0x27d8),plVar8);
        operator_delete(plVar8);
        uVar10 = 0;
      }
    }
  }
  return uVar10;
}

