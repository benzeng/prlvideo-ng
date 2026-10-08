
void FUN_10077e170(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f6b10;
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10077e1b8;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10077e1b8:
  QObject::~QObject(param_1);
  return;
}

