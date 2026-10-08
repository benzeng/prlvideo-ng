
long FUN_1000373b0(long param_1,QString *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar6 = *(long **)(param_1 + 0x28);
  lVar5 = 0;
  if (*(int *)((long)plVar6 + 0x14) != 0) {
    uVar1 = *(uint *)(plVar6 + 4);
    lVar5 = 0;
    if (uVar1 != 0) {
      uVar4 = qHash(param_2,*(uint *)((long)plVar6 + 0x24));
      uVar2 = (ulong)uVar4 % (ulong)uVar1;
      plVar8 = *(long **)(plVar6[1] + uVar2 * 8);
      lVar5 = 0;
      if (plVar8 != plVar6) {
        plVar7 = (long *)(plVar6[1] + uVar2 * 8);
        do {
          plVar9 = plVar6;
          if (*(uint *)(plVar8 + 1) == uVar4) {
            cVar3 = operator==(param_2,(QString *)(plVar8 + 2));
            plVar6 = (long *)*plVar7;
            plVar8 = plVar6;
            plVar9 = *(long **)(param_1 + 0x28);
            if (cVar3 != '\0') break;
          }
          plVar6 = plVar9;
          plVar7 = plVar8;
          plVar8 = (long *)*plVar7;
          plVar9 = plVar6;
        } while (plVar8 != plVar6);
        lVar5 = 0;
        if (plVar6 != plVar9) {
          lVar5 = plVar6[3];
        }
      }
    }
  }
  return lVar5;
}

