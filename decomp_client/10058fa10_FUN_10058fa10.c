
void FUN_10058fa10(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10221d550;
  pQVar1 = *(QArrayData **)(param_1 + 200);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10058fa62;
      pQVar1 = *(QArrayData **)(param_1 + 200);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10058fa62:
  FUN_100599bf0(param_1 + 0x78);
  FUN_10059e690(param_1 + 0x18);
  QObject::~QObject(param_1);
  return;
}

