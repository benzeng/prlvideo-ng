
bool FUN_100476d10(long param_1,QString *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  QMutex::lock();
  plVar5 = *(long **)(param_1 + 0x20);
  uVar1 = *(uint *)(plVar5 + 4);
  plVar6 = plVar5;
  if (uVar1 != 0) {
    uVar4 = qHash(param_2,*(uint *)((long)plVar5 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar7 = *(long **)(plVar5[1] + uVar2 * 8);
    if (plVar7 != plVar5) {
      plVar9 = (long *)(plVar5[1] + uVar2 * 8);
      do {
        plVar6 = plVar5;
        plVar8 = plVar7;
        if (*(uint *)(plVar7 + 1) == uVar4) {
          cVar3 = operator==(param_2,(QString *)(plVar7 + 2));
          plVar5 = (long *)*plVar9;
          plVar6 = *(long **)(param_1 + 0x20);
          plVar8 = plVar5;
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar6;
        plVar7 = (long *)*plVar8;
        plVar6 = plVar5;
        plVar9 = plVar8;
      } while (plVar7 != plVar5);
    }
  }
  QMutex::unlock();
  return plVar5 != plVar6;
}

