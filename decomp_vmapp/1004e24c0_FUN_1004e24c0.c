
void FUN_1004e24c0(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_100bc3830;
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    FUN_100013180(pvVar1);
    operator_delete(pvVar1);
  }
  pQVar2 = (QArrayData *)param_1[6];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004e2521;
      pQVar2 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004e2521:
  pQVar2 = (QArrayData *)param_1[5];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1004e2551;
      pQVar2 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004e2551:
  QFile::~QFile((QFile *)(param_1 + 3));
  QFileInfo::~QFileInfo((QFileInfo *)(param_1 + 2));
  return;
}

