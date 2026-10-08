
void FUN_100d78520(QObject *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_10225bd00;
  QObject::disconnect(param_1,"2eventReceived(const SdkHandleWrap)",param_1,
                      "1processEvent(const SdkHandleWrap)");
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_100d77af0(param_1 + 0x48);
  FUN_100d779f0(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
    _PrlHandle_Free();
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  QObject::~QObject(param_1);
  return;
}

