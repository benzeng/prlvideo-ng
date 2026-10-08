
undefined8 * FUN_1000393a0(undefined8 *param_1,long *param_2,QString *param_3)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar7 = (long *)*param_2;
  if ((*(int *)((long)plVar7 + 0x14) != 0) && (uVar1 = *(uint *)(plVar7 + 4), uVar1 != 0)) {
    uVar6 = qHash(param_3,*(uint *)((long)plVar7 + 0x24));
    uVar2 = (ulong)uVar6 % (ulong)uVar1;
    plVar9 = *(long **)(plVar7[1] + uVar2 * 8);
    if (plVar9 != plVar7) {
      plVar11 = (long *)(plVar7[1] + uVar2 * 8);
      do {
        plVar8 = plVar7;
        plVar10 = plVar9;
        if (*(uint *)(plVar9 + 1) == uVar6) {
          cVar5 = operator==(param_3,(QString *)(plVar9 + 2));
          plVar7 = (long *)*plVar11;
          plVar8 = (long *)*param_2;
          plVar10 = plVar7;
          if (cVar5 != '\0') break;
        }
        plVar7 = plVar8;
        plVar9 = (long *)*plVar10;
        plVar8 = plVar7;
        plVar11 = plVar10;
      } while (plVar9 != plVar7);
      if (plVar7 != plVar8) {
        piVar3 = (int *)plVar7[3];
        lVar4 = plVar7[4];
        *param_1 = piVar3;
        param_1[1] = lVar4;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        return param_1;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}

