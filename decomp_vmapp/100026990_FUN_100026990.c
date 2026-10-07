
void FUN_100026990(QObject *param_1)

{
  QMapNodeBase *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_100ba9970;
  FUN_100026aa0();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x1a48) + 0x28))
            (*(long **)(*(long *)(param_1 + 0x10) + 0x1a48),6,FUN_100026960,param_1);
  QMutex::~QMutex((QMutex *)(param_1 + 0x38));
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100026a1b;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x30);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100026a1b:
  QObject::~QObject(param_1);
  return;
}

