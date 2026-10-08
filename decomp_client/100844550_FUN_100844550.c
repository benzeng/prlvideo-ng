
void FUN_100844550(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1022207c0;
  pQVar1 = *(QArrayData **)(param_1 + 0x78);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100844598;
      pQVar1 = *(QArrayData **)(param_1 + 0x78);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100844598:
  FUN_10005e410(param_1 + 0x10);
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

