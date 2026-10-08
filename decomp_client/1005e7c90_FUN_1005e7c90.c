
void FUN_1005e7c90(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f47c0;
  pQVar1 = *(QArrayData **)(param_1 + 0x30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005e7cd8;
      pQVar1 = *(QArrayData **)(param_1 + 0x30);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005e7cd8:
  pQVar1 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005e7d08;
      pQVar1 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005e7d08:
  QObject::~QObject(param_1);
  return;
}

