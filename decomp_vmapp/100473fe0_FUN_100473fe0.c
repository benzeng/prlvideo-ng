
undefined8 * FUN_100473fe0(undefined8 *param_1,long param_2,QString *param_3)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  QMutex::lock();
  plVar11 = *(long **)(param_2 + 0x18);
  plVar10 = (long *)(param_2 + 0x18);
  uVar1 = *(uint *)(plVar11 + 4);
  plVar12 = plVar10;
  if (uVar1 != 0) {
    uVar6 = qHash(param_3,*(uint *)((long)plVar11 + 0x24));
    uVar3 = (ulong)uVar6 % (ulong)uVar1;
    plVar4 = *(long **)(plVar11[1] + uVar3 * 8);
    plVar12 = (long *)(plVar11[1] + uVar3 * 8);
    while (plVar9 = plVar4, plVar9 != plVar11) {
      if (*(uint *)(plVar9 + 1) == uVar6) {
        cVar5 = operator==(param_3,(QString *)(plVar9 + 2));
        if (cVar5 != '\0') {
          plVar11 = (long *)*plVar10;
          break;
        }
        plVar9 = (long *)*plVar12;
        plVar11 = (long *)*plVar10;
      }
      plVar12 = plVar9;
      plVar4 = (long *)*plVar9;
    }
  }
  plVar12 = (long *)*plVar12;
  if (plVar11 == plVar12) {
    *param_1 = 0;
  }
  else {
    puVar7 = operator_new(8);
    piVar2 = (int *)plVar12[3];
    *puVar7 = piVar2;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    uVar8 = FUN_1004797e0(puVar7);
    *param_1 = uVar8;
  }
  QMutex::unlock();
  return param_1;
}

