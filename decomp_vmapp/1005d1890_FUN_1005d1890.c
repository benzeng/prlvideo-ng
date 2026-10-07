
undefined8 FUN_1005d1890(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  QString local_40;
  undefined1 local_32;
  
  FUN_1007d6a70(&local_40,param_3);
  plVar5 = (long *)(param_2 + 0x78);
  if (*(long **)(param_2 + 0x78) == (long *)0x0) {
LAB_1005d192d:
    plVar4 = plVar5;
  }
  else {
    plVar1 = *(long **)(param_2 + 0x78);
    plVar4 = plVar5;
    do {
      while (plVar3 = plVar1, cVar2 = operator<((QString *)(plVar3 + 4),&local_40), cVar2 != '\0') {
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) goto LAB_1005d1910;
      }
      plVar4 = plVar3;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_1005d1910:
    if ((plVar4 == plVar5) || (cVar2 = operator<(&local_40,(QString *)(plVar4 + 4)), cVar2 != '\0'))
    goto LAB_1005d192d;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1005d1960;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005d1960:
  if (param_4 != 0) {
    *(bool *)param_4 = plVar4 != plVar5;
  }
  if (plVar4 == plVar5) {
    FUN_1007d6870(param_1);
  }
  else {
    FUN_1007d6920(param_1,plVar4 + 5);
  }
  return param_1;
}

