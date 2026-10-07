
undefined8 * FUN_1005eade0(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  QMutex::lock();
  plVar5 = (long *)(param_2 + 0x28);
  plVar2 = *(long **)(param_2 + 0x28);
  plVar7 = plVar5;
  if (*(long **)(param_2 + 0x28) != (long *)0x0) {
    do {
      while (plVar6 = plVar2, iVar3 = FUN_1007ea6f0(plVar6 + 4,param_3), iVar3 < 0) {
        plVar2 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) goto LAB_1005eae60;
      }
      plVar7 = plVar6;
      plVar2 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
LAB_1005eae60:
    if ((plVar7 != plVar5) && (iVar3 = FUN_1007ea6f0(param_3,plVar7 + 4), -1 < iVar3))
    goto LAB_1005eae7c;
  }
  plVar7 = plVar5;
LAB_1005eae7c:
  if (plVar5 == plVar7) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    FUN_1007d6870(param_1);
  }
  else {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
    lVar4 = 0;
    if (plVar7[6] != 0) {
      lVar4 = *(long *)(plVar7[6] + 0x10);
    }
    uVar1 = *(undefined8 *)(lVar4 + 0x228);
    param_1[1] = *(undefined8 *)(lVar4 + 0x230);
    *param_1 = uVar1;
  }
  QMutex::unlock();
  return param_1;
}

