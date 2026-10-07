
void FUN_10049bc80(QThread *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined ***)param_1 = &PTR_metaObject_10111c840;
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
  QThread::~QThread(param_1);
  operator_delete(param_1);
  return;
}

