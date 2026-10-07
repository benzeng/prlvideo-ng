
undefined8 * FUN_100473b30(undefined8 *param_1,long param_2,QString *param_3)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  QMutex::lock();
  plVar9 = *(long **)(param_2 + 0x18);
  plVar8 = (long *)(param_2 + 0x18);
  uVar1 = *(uint *)(plVar9 + 4);
  plVar10 = plVar8;
  if (uVar1 != 0) {
    uVar6 = qHash(param_3,*(uint *)((long)plVar9 + 0x24));
    uVar3 = (ulong)uVar6 % (ulong)uVar1;
    plVar4 = *(long **)(plVar9[1] + uVar3 * 8);
    plVar10 = (long *)(plVar9[1] + uVar3 * 8);
    while (plVar7 = plVar4, plVar7 != plVar9) {
      if (*(uint *)(plVar7 + 1) == uVar6) {
        cVar5 = operator==(param_3,(QString *)(plVar7 + 2));
        if (cVar5 != '\0') {
          plVar9 = (long *)*plVar8;
          break;
        }
        plVar7 = (long *)*plVar10;
        plVar9 = (long *)*plVar8;
      }
      plVar10 = plVar7;
      plVar4 = (long *)*plVar7;
    }
  }
  if (plVar9 == (long *)*plVar10) {
    FUN_100473c40(param_1,param_3);
  }
  else {
    piVar2 = (int *)((long *)*plVar10)[3];
    *param_1 = piVar2;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  QMutex::unlock();
  return param_1;
}

