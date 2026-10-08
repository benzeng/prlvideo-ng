
QVariant * FUN_1003deba0(QVariant *param_1,long *param_2,QString *param_3)

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
  
  plVar5 = (long *)*param_2;
  if ((*(int *)((long)plVar5 + 0x14) != 0) && (uVar1 = *(uint *)(plVar5 + 4), uVar1 != 0)) {
    uVar4 = qHash(param_3,*(uint *)((long)plVar5 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar7 = *(long **)(plVar5[1] + uVar2 * 8);
    if (plVar7 != plVar5) {
      plVar9 = (long *)(plVar5[1] + uVar2 * 8);
      do {
        plVar6 = plVar5;
        plVar8 = plVar7;
        if (*(uint *)(plVar7 + 1) == uVar4) {
          cVar3 = operator==(param_3,(QString *)(plVar7 + 2));
          plVar5 = (long *)*plVar9;
          plVar6 = (long *)*param_2;
          plVar8 = plVar5;
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar6;
        plVar7 = (long *)*plVar8;
        plVar6 = plVar5;
        plVar9 = plVar8;
      } while (plVar7 != plVar5);
      if (plVar5 != plVar6) {
        QVariant::QVariant(param_1,(QVariant *)(plVar5 + 3));
        return param_1;
      }
    }
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

