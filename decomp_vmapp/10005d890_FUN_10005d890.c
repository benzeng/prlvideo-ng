
void FUN_10005d890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  QDateTime local_88 [8];
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar1 = FUN_10005e010();
  if (cVar1 == '\0') {
    return;
  }
  if (2 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("","vm",3,"adding app kind {%s}",local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10005d922;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_10005d922:
  local_58 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.%4",0xb);
  QString::arg(&local_50,&local_58,*param_4,0,10,0x20);
  QString::arg(&local_48,&local_50,param_4[1],0,10,0x20);
  QString::arg(&local_40,&local_48,param_4[2],0,10,0x20);
  QString::arg(&local_38,&local_40,param_4[3],0,10,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005d9e2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10005d9e2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005da12;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10005da12:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005da42;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10005da42:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005da72;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10005da72:
  local_78 = (QArrayData *)QString::fromAscii_helper("%1GuestAppAction:Launch:%2:%3",0x1d);
  QDateTime::currentDateTime();
  pQVar3 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_80);
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  QString::arg(&local_68,&local_70,param_3,0,0x20);
  QString::arg(&local_60,&local_68,&local_38,0,0x20);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005db36;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10005db36:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005db66;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10005db66:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_19 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005db96;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10005db96:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005dbcc;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10005dbcc:
  QDateTime::~QDateTime(local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005dc05;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10005dc05:
  iVar2 = FUN_100430a30(*(undefined8 *)(DAT_1011c3698 + 0xf0));
  if (iVar2 != 0) {
    QString::fromUtf8_helper((char *)&local_28,0x9e400a);
    QString::append(&local_60);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10005dc71;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
LAB_10005dc71:
  FUN_10005c750(&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10005dcaa;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10005dcaa:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

