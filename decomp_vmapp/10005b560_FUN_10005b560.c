
undefined8 FUN_10005b560(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QDateTime local_50 [8];
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = *param_2;
  lVar3 = *(long *)(lVar2 + 0x10);
  local_40 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QDateTime::currentDateTime();
  local_58 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_48);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  pcVar1 = (char *)(lVar3 + 0x10 + lVar2);
  if (*(int *)(*param_2 + 4) == 0xf) {
    _strlen(pcVar1);
  }
  QString::fromUtf8_helper((char *)&local_68,(int)pcVar1);
  QString::normalized(&local_60,&local_68,1,0);
  QString::arg(&local_30,&local_38,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005b65b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10005b65b:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005b68b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10005b68b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005b6bb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10005b6bb:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005b6eb;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10005b6eb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005b71b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10005b71b:
  QDateTime::~QDateTime(local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10005b754;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10005b754:
  FUN_10005c750(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0;
}

