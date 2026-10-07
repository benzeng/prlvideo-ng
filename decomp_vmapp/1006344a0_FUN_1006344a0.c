
void FUN_1006344a0(QFileInfo *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006344de;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006344de:
  pQVar1 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10063450e;
      pQVar1 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10063450e:
  QFileInfo::~QFileInfo(param_1);
  return;
}

