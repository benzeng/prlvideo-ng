
void FUN_1000c63c0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_metaObject_100ba8eb0;
  FUN_1000d1220();
  if (*(int *)((long)param_1 + 500) == 0) {
    *(undefined4 *)((long)param_1 + 500) = 0x80000275;
  }
  FUN_10008fa70(param_1,8);
  QThread::wait((ulong)param_1);
  FUN_1000c6990(param_1);
  DAT_1011c3740 = 0;
  plVar2 = (long *)param_1[0x8a];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  pQVar4 = (QArrayData *)param_1[0x88];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c648a;
      pQVar4 = (QArrayData *)param_1[0x88];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c648a:
  FUN_1005a5300(param_1 + 0x6e);
  plVar2 = (long *)param_1[0x6d];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  pQVar4 = (QArrayData *)param_1[0x6b];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c64f4;
      pQVar4 = (QArrayData *)param_1[0x6b];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c64f4:
  QFileInfo::~QFileInfo((QFileInfo *)(param_1 + 0x66));
  pQVar4 = (QArrayData *)param_1[0x65];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c6539;
      pQVar4 = (QArrayData *)param_1[0x65];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c6539:
  FUN_1000d65e0(param_1 + 0x57);
  FUN_1000d32e0(param_1 + 0x41);
  pQVar4 = (QArrayData *)param_1[0x3d];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c658b;
      pQVar4 = (QArrayData *)param_1[0x3d];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c658b:
  pQVar4 = (QArrayData *)param_1[0x3c];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c65d7;
      pQVar4 = (QArrayData *)param_1[0x3c];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c65d7:
  pQVar4 = (QArrayData *)param_1[0x3b];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c6618;
      pQVar4 = (QArrayData *)param_1[0x3b];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c6618:
  pQVar4 = (QArrayData *)param_1[0x3a];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000c6651;
      pQVar4 = (QArrayData *)param_1[0x3a];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000c6651:
  FUN_10008ea40(param_1);
  return;
}

