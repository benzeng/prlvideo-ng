
void FUN_100d2c840(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10225b460;
  pQVar1 = (QMapNodeBase *)param_1[6];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d2c89f;
      pQVar1 = (QMapNodeBase *)param_1[6];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100d2c89f:
  FUN_100d2b080(param_1 + 3);
  pQVar2 = (QArrayData *)param_1[2];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d2c8d8;
      pQVar2 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d2c8d8:
  QDomDocument::~QDomDocument((QDomDocument *)(param_1 + 1));
  return;
}

