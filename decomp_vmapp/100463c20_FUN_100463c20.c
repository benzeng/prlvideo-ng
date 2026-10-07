
undefined8 FUN_100463c20(long param_1,QString *param_2)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 local_38 [8];
  
  plVar5 = *(long **)(param_1 + 8);
  uVar1 = *(uint *)(plVar5 + 4);
  if (uVar1 != 0) {
    uVar4 = qHash(param_2,*(uint *)((long)plVar5 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar7 = *(long **)(plVar5[1] + uVar2 * 8);
    if (plVar7 != plVar5) {
      plVar6 = (long *)(plVar5[1] + uVar2 * 8);
      do {
        plVar8 = plVar5;
        if (*(uint *)(plVar7 + 1) == uVar4) {
          cVar3 = operator==(param_2,(QString *)(plVar7 + 2));
          plVar5 = (long *)*plVar6;
          plVar8 = *(long **)(param_1 + 8);
          plVar7 = plVar5;
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar8;
        plVar6 = plVar7;
        plVar7 = (long *)*plVar6;
        plVar8 = plVar5;
      } while (plVar7 != plVar5);
      if (plVar5 != plVar8) {
        return 0;
      }
    }
  }
  FUN_100022e50((undefined8 *)(param_1 + 8),param_2,local_38);
  return 1;
}

