
bool FUN_100473f00(long param_1,QString *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  QMutex::lock();
  plVar6 = *(long **)(param_1 + 0x18);
  plVar8 = (long *)(param_1 + 0x18);
  uVar1 = *(uint *)(plVar6 + 4);
  plVar9 = plVar8;
  if (uVar1 != 0) {
    uVar5 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
    uVar2 = (ulong)uVar5 % (ulong)uVar1;
    plVar3 = *(long **)(plVar6[1] + uVar2 * 8);
    plVar9 = (long *)(plVar6[1] + uVar2 * 8);
    while (plVar7 = plVar3, plVar7 != plVar6) {
      if (*(uint *)(plVar7 + 1) == uVar5) {
        cVar4 = operator==(param_2,(QString *)(plVar7 + 2));
        if (cVar4 != '\0') {
          plVar6 = (long *)*plVar8;
          break;
        }
        plVar7 = (long *)*plVar9;
        plVar6 = (long *)*plVar8;
      }
      plVar9 = plVar7;
      plVar3 = (long *)*plVar7;
    }
  }
  plVar9 = (long *)*plVar9;
  QMutex::unlock();
  return plVar6 != plVar9;
}

