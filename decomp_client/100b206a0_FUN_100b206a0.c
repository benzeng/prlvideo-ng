
void FUN_100b206a0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  (**(code **)(*param_1 + 0x40))();
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  if (param_1[0x301e] != 0) {
    lVar1 = param_1[0x301c];
    plVar2 = (long *)param_1[0x301d];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[0x301e] = 0;
    while (plVar2 != param_1 + 0x301c) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 3));
  QMutex::~QMutex((QMutex *)(param_1 + 2));
  return;
}

