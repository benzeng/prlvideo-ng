
void FUN_10003c890(QObject *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ed350;
  pQVar2 = *(QArrayData **)(param_1 + 0x80);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10003c8e0;
      pQVar2 = *(QArrayData **)(param_1 + 0x80);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10003c8e0:
  FUN_100039a80(param_1 + 0x70);
  pQVar2 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10003c919;
      pQVar2 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10003c919:
  pQVar2 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10003c949;
      pQVar2 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10003c949:
  *(undefined ***)param_1 = &PTR_FUN_1021f7f20;
  FUN_100039a80(param_1 + 0x38);
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10003c99f;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x30);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_10003c99f:
  QObject::~QObject(param_1);
  return;
}

