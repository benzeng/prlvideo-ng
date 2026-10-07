
void FUN_1005d5e30(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar4 = (long *)plVar2[1];
      FUN_1005d5e30(plVar2 + 8);
      QDateTime::~QDateTime((QDateTime *)(plVar2 + 7));
      FUN_100013180(plVar2 + 4);
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}

