
void FUN_100371150(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  bool bVar12;
  
  if ((long *)*param_1 != param_1 + 1) {
    piVar6 = (int *)*param_2;
    lVar11 = param_2[1];
    lVar7 = lVar11 - (long)piVar6;
    plVar8 = (long *)*param_1;
LAB_100371190:
    do {
      piVar10 = (int *)plVar8[4];
      piVar3 = piVar6;
      if (plVar8[5] - (long)piVar10 == lVar7) {
        for (; piVar10 != (int *)plVar8[5]; piVar10 = piVar10 + 1) {
          if (*piVar10 != *piVar3) goto LAB_100371210;
          piVar3 = piVar3 + 1;
        }
        pvVar1 = (void *)plVar8[0x34];
        piVar10 = (int *)((long)pvVar1 + 4);
        *piVar10 = *piVar10 + -1;
        if (*piVar10 != 0) goto LAB_100371190;
        if (pvVar1 != (void *)0x0) {
          FUN_100373cc0(pvVar1);
          operator_delete(pvVar1);
        }
        plVar2 = (long *)plVar8[1];
        plVar4 = plVar8;
        plVar5 = plVar2;
        if (plVar2 == (long *)0x0) {
          do {
            plVar9 = (long *)plVar4[2];
            bVar12 = (long *)*plVar9 != plVar4;
            plVar4 = plVar9;
          } while (bVar12);
        }
        else {
          do {
            plVar9 = plVar5;
            plVar5 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        plVar4 = plVar8;
        if (plVar2 == (long *)0x0) {
          do {
            plVar5 = (long *)plVar4[2];
            bVar12 = (long *)*plVar5 != plVar4;
            plVar4 = plVar5;
          } while (bVar12);
        }
        else {
          do {
            plVar5 = plVar2;
            plVar2 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if ((long *)*param_1 == plVar8) {
          *param_1 = (long)plVar5;
        }
        param_1[2] = param_1[2] + -1;
        FUN_1000e86c0(param_1[1],plVar8);
        FUN_100373b80(plVar8 + 4);
        operator_delete(plVar8);
        piVar6 = (int *)*param_2;
        lVar11 = param_2[1];
      }
      else {
LAB_100371210:
        plVar2 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar8[2];
            bVar12 = (long *)*plVar9 != plVar8;
            plVar8 = plVar9;
          } while (bVar12);
        }
        else {
          do {
            plVar9 = plVar2;
            plVar2 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
      lVar7 = lVar11 - (long)piVar6;
      plVar8 = plVar9;
    } while (plVar9 != param_1 + 1);
  }
  return;
}

