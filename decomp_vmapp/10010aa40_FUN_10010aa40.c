
undefined8 FUN_10010aa40(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *local_30;
  
  plVar3 = operator_new(0x58);
  lVar7 = *param_2;
  plVar3[1] = param_2[1];
  *plVar3 = lVar7;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[2] = *plVar3 * 2;
  lVar6 = *plVar3 * 2 * plVar3[1];
  plVar3[3] = lVar6;
  plVar3[4] = 0x118;
  plVar3[5] = lVar6 + 0x118;
  lVar7 = lVar6 * 2 + 0x118;
  plVar3[6] = lVar7;
  plVar3[7] = lVar6 + lVar7;
  plVar3 = (long *)FUN_10010b540(plVar3,0);
  lVar7 = 0;
  if (plVar3 != (long *)0x0) {
    lVar7 = plVar3[2];
  }
  local_30 = plVar3;
  FUN_100109fa0(lVar7,param_1);
  pvVar4 = operator_new(0x70);
  FUN_10010a630(pvVar4,&local_30);
  plVar5 = (long *)FUN_10010b690(pvVar4,0);
  lVar7 = 0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[2];
  }
  FUN_10010ac60(param_1,lVar7);
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar2 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar5;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return 0;
}

