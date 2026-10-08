
void FUN_10006c6e0(QObject *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ed850;
  FUN_10006c790();
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x30),PTR_s_release_1022699b8);
  pDVar1 = *(Data **)(param_1 + 0x20);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10006c734;
      pDVar1 = *(Data **)(param_1 + 0x20);
    }
    QListData::dispose(pDVar1);
  }
LAB_10006c734:
  QObject::~QObject(param_1);
  return;
}

