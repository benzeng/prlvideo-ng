
void FUN_10017dc50(long param_1,QString *param_2)

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
  
  plVar5 = *(long **)(param_1 + 0x18);
  uVar1 = *(uint *)(plVar5 + 4);
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
          plVar6 = *(long **)(param_1 + 0x18);
          plVar8 = plVar5;
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar6;
        plVar7 = (long *)*plVar8;
        plVar6 = plVar5;
        plVar9 = plVar8;
      } while (plVar7 != plVar5);
      if (plVar5 != plVar6) {
        FUN_10017ebb0((undefined8 *)(param_1 + 0x18),param_2);
        FUN_100802560(param_1,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14));
        return;
      }
    }
  }
  return;
}

