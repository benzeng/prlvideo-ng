
void FUN_100519c90(long param_1)

{
  QMapNodeBase *pQVar1;
  
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100519ce8;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x10);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10051b5a0();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100519ce8:
  QMutex::~QMutex((QMutex *)(param_1 + 8));
  return;
}

