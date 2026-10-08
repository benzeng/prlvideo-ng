
void FUN_100861360(QObject *param_1)

{
  QMapNodeBase *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10222c5f0;
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1008613c0;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x10);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100614140();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1008613c0:
  QObject::~QObject(param_1);
  return;
}

