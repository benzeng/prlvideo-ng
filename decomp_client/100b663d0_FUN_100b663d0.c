
void FUN_100b663d0(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_10223f8a0;
  pQVar2 = (QArrayData *)param_1[0x23];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b6641d;
      pQVar2 = (QArrayData *)param_1[0x23];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b6641d:
  pQVar2 = (QArrayData *)param_1[0x21];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b66453;
      pQVar2 = (QArrayData *)param_1[0x21];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b66453:
  pQVar2 = (QArrayData *)param_1[0x1f];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b66489;
      pQVar2 = (QArrayData *)param_1[0x1f];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b66489:
  pQVar2 = (QArrayData *)param_1[0x1e];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b664bf;
      pQVar2 = (QArrayData *)param_1[0x1e];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b664bf:
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x1c));
  pQVar2 = (QArrayData *)param_1[0x18];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b66501;
      pQVar2 = (QArrayData *)param_1[0x18];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b66501:
  pQVar2 = (QArrayData *)param_1[0x15];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b66537;
      pQVar2 = (QArrayData *)param_1[0x15];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b66537:
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0xe));
  pQVar2 = (QArrayData *)param_1[0xd];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b66570;
      pQVar2 = (QArrayData *)param_1[0xd];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b66570:
  pQVar2 = (QArrayData *)param_1[0xc];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b665a0;
      pQVar2 = (QArrayData *)param_1[0xc];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b665a0:
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0xb));
  QDateTime::~QDateTime((QDateTime *)(param_1 + 10));
  pQVar2 = (QArrayData *)param_1[8];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b665e2;
      pQVar2 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b665e2:
  pQVar2 = (QArrayData *)param_1[7];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b66612;
      pQVar2 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b66612:
  pQVar2 = (QArrayData *)param_1[6];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b66642;
      pQVar2 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100b66642:
  pQVar1 = (QMapNodeBase *)param_1[4];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100b6668a;
      pQVar1 = (QMapNodeBase *)param_1[4];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100b6668a:
  pQVar1 = (QMapNodeBase *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100b666d2;
      pQVar1 = (QMapNodeBase *)param_1[3];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_100b666d2:
  pQVar2 = (QArrayData *)param_1[1];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
      pQVar2 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

