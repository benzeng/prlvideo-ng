
void FUN_1006b2470(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  pQVar1 = (QMapNodeBase *)param_1[0x10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006b24cb;
      pQVar1 = (QMapNodeBase *)param_1[0x10];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_1006b25f0();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1006b24cb:
  FUN_1006a6010(param_1 + 0xb);
  FUN_1006a60f0(param_1 + 3);
  pQVar2 = (QArrayData *)param_1[2];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1006b250d;
      pQVar2 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1006b250d:
  QRegExp::~QRegExp((QRegExp *)(param_1 + 1));
  pQVar2 = (QArrayData *)*param_1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

