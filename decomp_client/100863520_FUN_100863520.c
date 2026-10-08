
void FUN_100863520(QAction *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10222d9c8;
  pQVar1 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100863568;
      pQVar1 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100863568:
  pQVar1 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100863598;
      pQVar1 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100863598:
  QAction::~QAction(param_1);
  return;
}

