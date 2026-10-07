
void FUN_1000e9030(QThread *param_1)

{
  long *plVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_metaObject_100ba8fb0;
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (plVar1[1] != 0) {
      _CFRelease();
    }
    if (*plVar1 != 0) {
      _CFRelease();
    }
    operator_delete(plVar1);
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x30));
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000e90b1;
      pQVar2 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000e90b1:
  QThread::~QThread(param_1);
  return;
}

