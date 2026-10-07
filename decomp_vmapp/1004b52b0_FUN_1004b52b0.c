
void FUN_1004b52b0(long *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  long lVar3;
  QArrayData *local_58;
  undefined8 local_50;
  undefined8 local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  if (((int)param_1[3] != -1) || (*(int *)((long)param_1 + 0x1c) != -1)) goto LAB_1004b541e;
  QReadWriteLock::lockForRead();
  if ((DAT_1011bc000 != 0) && (*param_1 == DAT_1011bc000)) {
    QMutex::lock();
    lVar1 = *param_1;
    pQVar2 = *(QArrayData **)(lVar1 + 8);
    lVar3 = lVar1;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      lVar3 = *param_1;
    }
    local_50 = *(undefined8 *)(lVar1 + 0x10);
    local_48 = *(undefined8 *)(lVar1 + 0x18);
    local_58 = pQVar2;
    FUN_1004b6200(lVar3 + 0x20,&local_58);
    lVar1 = *param_1;
    QString::fromUtf8_helper((char *)&local_40,0xa320a0);
    QString::operator=((QString *)(lVar1 + 8),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004b53c0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1004b53c0:
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    QMutex::unlock();
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004b5412;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1004b5412:
  QReadWriteLock::unlock();
LAB_1004b541e:
  _free(param_1);
  return;
}

