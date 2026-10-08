
void FUN_10045f2b0(QObject *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2870;
  pDVar1 = *(Data **)(param_1 + 0x28);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10045f2ee;
      pDVar1 = *(Data **)(param_1 + 0x28);
    }
    QListData::dispose(pDVar1);
  }
LAB_10045f2ee:
  pDVar1 = *(Data **)(param_1 + 0x20);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10045f314;
      pDVar1 = *(Data **)(param_1 + 0x20);
    }
    QListData::dispose(pDVar1);
  }
LAB_10045f314:
  FUN_100461380(param_1 + 0x18);
  QObject::~QObject(param_1);
  return;
}

