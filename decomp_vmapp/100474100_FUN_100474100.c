
undefined8 *
FUN_100474100(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong *param_5)

{
  QString *pQVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  
  QMutex::lock();
  if (param_4 != 0) {
    plVar10 = *(long **)(param_2 + 0x18);
    plVar13 = (long *)(param_2 + 0x18);
    uVar12 = 0;
    do {
      uVar2 = *(uint *)(plVar10 + 4);
      plVar14 = plVar13;
      if (uVar2 != 0) {
        pQVar1 = (QString *)(param_3 + uVar12 * 8);
        uVar7 = qHash(pQVar1,*(uint *)((long)plVar10 + 0x24));
        uVar4 = (ulong)uVar7 % (ulong)uVar2;
        plVar5 = *(long **)(plVar10[1] + uVar4 * 8);
        plVar14 = (long *)(plVar10[1] + uVar4 * 8);
        while (plVar11 = plVar5, plVar11 != plVar10) {
          if (*(uint *)(plVar11 + 1) == uVar7) {
            cVar6 = operator==(pQVar1,(QString *)(plVar11 + 2));
            if (cVar6 != '\0') {
              plVar10 = (long *)*plVar13;
              break;
            }
            plVar11 = (long *)*plVar14;
            plVar10 = (long *)*plVar13;
          }
          plVar14 = plVar11;
          plVar5 = (long *)*plVar11;
        }
      }
      plVar14 = (long *)*plVar14;
      if (plVar10 != plVar14) {
        if (param_5 != (ulong *)0x0) {
          *param_5 = uVar12;
        }
        puVar8 = operator_new(8);
        piVar3 = (int *)plVar14[3];
        *puVar8 = piVar3;
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        uVar9 = FUN_1004797e0(puVar8);
        *param_1 = uVar9;
        goto LAB_10047423b;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_4);
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = param_4;
  }
  *param_1 = 0;
LAB_10047423b:
  QMutex::unlock();
  return param_1;
}

