
long * FUN_1005d6b80(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != param_3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    do {
      plVar3 = (long *)param_2[1];
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
      if (param_2[8] != 0) {
        lVar1 = param_2[6];
        plVar4 = (long *)param_2[7];
        lVar2 = *plVar4;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar2;
        param_2[8] = 0;
        while (plVar4 != param_2 + 6) {
          plVar5 = (long *)plVar4[1];
          FUN_10057e590(plVar4 + 2);
          operator_delete(plVar4);
          plVar4 = plVar5;
        }
      }
      plVar4 = (long *)param_2[5];
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar1 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      operator_delete(param_2);
      param_2 = plVar3;
    } while (plVar3 != param_3);
  }
  return param_3;
}

