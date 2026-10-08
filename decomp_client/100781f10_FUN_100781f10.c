
void FUN_100781f10(QObject *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f7080;
  pDVar1 = *(Data **)(param_1 + 0x18);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_100781f4e;
      pDVar1 = *(Data **)(param_1 + 0x18);
    }
    QListData::dispose(pDVar1);
  }
LAB_100781f4e:
  QObject::~QObject(param_1);
  return;
}

