
void FUN_1005e0740(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f4400;
  pQVar1 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005e0788;
      pQVar1 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005e0788:
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005e07b8;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005e07b8:
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

