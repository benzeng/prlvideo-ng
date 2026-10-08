
void FUN_1003afd50(long *param_1,QString *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = (long *)*param_1;
  uVar1 = *(uint *)(plVar7 + 4);
  plVar9 = param_1;
  if (uVar1 != 0) {
    uVar6 = qHash(param_2,*(uint *)((long)plVar7 + 0x24));
    uVar3 = (ulong)uVar6 % (ulong)uVar1;
    plVar4 = *(long **)(plVar7[1] + uVar3 * 8);
    plVar9 = (long *)(plVar7[1] + uVar3 * 8);
    while (plVar8 = plVar4, plVar8 != plVar7) {
      if (*(uint *)(plVar8 + 1) == uVar6) {
        cVar5 = operator==(param_2,(QString *)(plVar8 + 2));
        if (cVar5 != '\0') break;
        plVar8 = (long *)*plVar9;
        plVar7 = (long *)*param_1;
      }
      plVar9 = plVar8;
      plVar4 = (long *)*plVar8;
    }
  }
  lVar2 = *plVar9;
  plVar7 = operator_new(8);
  *plVar7 = lVar2;
  *param_3 = plVar7;
  return;
}

