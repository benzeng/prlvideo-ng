
void FUN_1009f96d0(QFileInfo *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1009f970e;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1009f970e:
  pQVar1 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1009f973e;
      pQVar1 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1009f973e:
  QFileInfo::~QFileInfo(param_1);
  return;
}

