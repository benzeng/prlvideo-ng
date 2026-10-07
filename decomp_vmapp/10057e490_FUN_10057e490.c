
void FUN_10057e490(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar4 = (long *)plVar2[1];
      if (plVar2[8] != 0) {
        lVar1 = plVar2[6];
        plVar5 = (long *)plVar2[7];
        lVar3 = *plVar5;
        *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar3;
        plVar2[8] = 0;
        while (plVar5 != plVar2 + 6) {
          plVar6 = (long *)plVar5[1];
          FUN_10057e590(plVar5 + 2);
          operator_delete(plVar5);
          plVar5 = plVar6;
        }
      }
      plVar5 = (long *)plVar2[5];
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar1 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}

