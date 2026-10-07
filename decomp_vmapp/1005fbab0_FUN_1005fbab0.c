
void FUN_1005fbab0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_100bc7710;
  if (param_1[0x1d] != 0) {
    lVar1 = param_1[0x1b];
    plVar4 = (long *)param_1[0x1c];
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    param_1[0x1d] = 0;
    if (plVar4 != param_1 + 0x1b) {
      do {
        plVar3 = (long *)plVar4[1];
        FUN_1005fc730(param_1 + 0x1d,plVar4 + 2);
        operator_delete(plVar4);
        plVar4 = plVar3;
      } while (plVar3 != param_1 + 0x1b);
    }
  }
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x1a));
  FUN_100013180(param_1 + 0x17);
  if (param_1[0x13] != 0) {
    lVar1 = param_1[0x11];
    plVar4 = (long *)param_1[0x12];
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    param_1[0x13] = 0;
    while (plVar4 != param_1 + 0x11) {
      plVar3 = (long *)plVar4[1];
      operator_delete(plVar4);
      plVar4 = plVar3;
    }
  }
  FUN_1005fa1b0(param_1);
  return;
}

