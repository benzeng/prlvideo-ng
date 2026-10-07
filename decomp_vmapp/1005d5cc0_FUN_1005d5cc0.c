
long * FUN_1005d5cc0(long param_1,long *param_2,long *param_3)

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
      if (param_2[10] != 0) {
        lVar1 = param_2[8];
        plVar4 = (long *)param_2[9];
        lVar2 = *plVar4;
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
        **(long **)(lVar1 + 8) = lVar2;
        param_2[10] = 0;
        while (plVar4 != param_2 + 8) {
          plVar5 = (long *)plVar4[1];
          FUN_1005d5e30(plVar4 + 8);
          QDateTime::~QDateTime((QDateTime *)(plVar4 + 7));
          FUN_100013180(plVar4 + 4);
          operator_delete(plVar4);
          plVar4 = plVar5;
        }
      }
      QDateTime::~QDateTime((QDateTime *)(param_2 + 7));
      FUN_100013180(param_2 + 4);
      operator_delete(param_2);
      param_2 = plVar3;
    } while (plVar3 != param_3);
  }
  return param_3;
}

