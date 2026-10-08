
void FUN_1001e5450(QObject *param_1)

{
  void *pvVar1;
  QMapNodeBase *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ef1c0;
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 == (void *)0x0) goto LAB_1001e54c2;
  pQVar2 = *(QMapNodeBase **)((long)pvVar1 + 0x10);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1001e54b1;
      pQVar2 = *(QMapNodeBase **)((long)pvVar1 + 0x10);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1001e54b1:
  QMutex::~QMutex((QMutex *)((long)pvVar1 + 8));
  operator_delete(pvVar1);
LAB_1001e54c2:
  QObject::~QObject(param_1);
  return;
}

