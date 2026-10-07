
undefined8 FUN_10059a420(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  
  plVar1 = (long *)param_1[1];
  uVar5 = 0;
  if (plVar1 != (long *)0x0) {
    plVar6 = plVar1;
    plVar3 = param_1 + 1;
    do {
      while (plVar7 = plVar6, *param_2 <= (ulong)plVar7[4]) {
        plVar6 = (long *)*plVar7;
        plVar3 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_10059a480;
      }
      plVar4 = plVar7 + 1;
      plVar7 = plVar3;
      plVar6 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
LAB_10059a480:
    uVar5 = 0;
    if ((plVar7 != param_1 + 1) && (uVar5 = 0, (ulong)plVar7[4] <= *param_2)) {
      plVar6 = plVar7;
      plVar3 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar6[2];
          bVar8 = (long *)*plVar4 != plVar6;
          plVar6 = plVar4;
        } while (bVar8);
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar7) {
        *param_1 = plVar4;
      }
      param_1[2] = param_1[2] + -1;
      FUN_1000e86c0(plVar1,plVar7);
      plVar1 = (long *)plVar7[5];
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar6 = plVar1 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      operator_delete(plVar7);
      uVar5 = 1;
    }
  }
  return uVar5;
}

