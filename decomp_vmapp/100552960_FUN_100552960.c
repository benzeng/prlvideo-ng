
undefined8 FUN_100552960(long param_1)

{
  long lVar1;
  char cVar2;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  QString::toUtf8();
  lVar1 = *(long *)(local_40 + 0x10);
  QString::toUtf8();
  cVar2 = FUN_1007619a0(local_40 + lVar1,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1005529e3;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1005529e3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100552a13;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100552a13:
  if (cVar2 == '\0') {
    return 3;
  }
  QString::toUtf8();
  lVar1 = *(long *)(local_50 + 0x10);
  QString::toUtf8();
  cVar2 = FUN_1007619a0(local_50 + lVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_100552a8b;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100552a8b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_100552abb;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100552abb:
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 0;
  }
  QString::toUtf8();
  lVar1 = *(long *)(local_60 + 0x10);
  QString::toUtf8();
  FUN_1007619a0(local_60 + lVar1,local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) goto LAB_100552b2f;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100552b2f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) goto LAB_100552b5f;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100552b5f:
  QString::toUtf8();
  FUN_100761940(local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return 3;
      }
    }
    QArrayData::deallocate(local_70,1,8);
  }
  return 3;
}

