
undefined8 * FUN_10002c180(undefined8 *param_1,long *param_2,QString *param_3)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar6 = (long *)*param_2;
  if ((*(int *)((long)plVar6 + 0x14) != 0) && (uVar1 = *(uint *)(plVar6 + 4), uVar1 != 0)) {
    uVar5 = qHash(param_3,*(uint *)((long)plVar6 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar1;
    plVar8 = *(long **)(plVar6[1] + uVar3 * 8);
    if (plVar8 != plVar6) {
      plVar10 = (long *)(plVar6[1] + uVar3 * 8);
      do {
        plVar7 = plVar6;
        plVar9 = plVar8;
        if (*(uint *)(plVar8 + 1) == uVar5) {
          cVar4 = operator==(param_3,(QString *)(plVar8 + 2));
          plVar6 = (long *)*plVar10;
          plVar7 = (long *)*param_2;
          plVar9 = plVar6;
          if (cVar4 != '\0') break;
        }
        plVar6 = plVar7;
        plVar8 = (long *)*plVar9;
        plVar7 = plVar6;
        plVar10 = plVar9;
      } while (plVar8 != plVar6);
      if (plVar6 != plVar7) {
        piVar2 = (int *)plVar6[3];
        *param_1 = piVar2;
        if (*piVar2 + 1U < 2) {
          return param_1;
        }
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        return param_1;
      }
    }
  }
  *param_1 = PTR_shared_null_1021e1288;
  return param_1;
}

