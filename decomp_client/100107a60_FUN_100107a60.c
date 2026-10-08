
void FUN_100107a60(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f95d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f9650;
  FUN_100a4a070(param_1 + 0x10);
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100107ac1;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100107ac1:
  FUN_100a4a040(param_1 + 0x10);
  QObject::~QObject(param_1);
  return;
}

