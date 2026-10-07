
void FUN_100013220(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_getXml_100ba7b18;
  pQVar1 = (QMapNodeBase *)param_1[0x11];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100013285;
      pQVar1 = (QMapNodeBase *)param_1[0x11];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100013680();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100013285:
  QDomDocument::~QDomDocument((QDomDocument *)(param_1 + 0x10));
  FUN_100013180(param_1 + 0xf);
  pQVar2 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000132ca;
      pQVar2 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000132ca:
  pQVar1 = (QMapNodeBase *)param_1[0xc];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100013312;
      pQVar1 = (QMapNodeBase *)param_1[0xc];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_1000136c0();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100013312:
  pQVar1 = (QMapNodeBase *)param_1[10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10001335a;
      pQVar1 = (QMapNodeBase *)param_1[10];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_10001335a:
  pQVar2 = (QArrayData *)param_1[9];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10001338a;
      pQVar2 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10001338a:
  pQVar2 = (QArrayData *)param_1[8];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000133ba;
      pQVar2 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000133ba:
  FUN_100013180(param_1 + 7);
  pQVar2 = (QArrayData *)param_1[6];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000133f3;
      pQVar2 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000133f3:
  pQVar2 = (QArrayData *)param_1[5];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100013423;
      pQVar2 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100013423:
  pQVar2 = (QArrayData *)param_1[2];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

