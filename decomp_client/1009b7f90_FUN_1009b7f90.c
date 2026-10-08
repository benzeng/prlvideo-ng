
void FUN_1009b7f90(undefined8 param_1,QString *param_2,QString *param_3,QString *param_4)

{
  int iVar1;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QLineEdit::text();
  iVar1 = QString::indexOf(&local_58,0x5c,0,1);
  if (iVar1 == -1) {
    QString::operator=(param_2,&local_58);
    QString::fromUtf8_helper((char *)&local_40,0x1e41978);
    QString::operator=(param_3,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b8167;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else {
    QString::QString(&local_50,0x5c);
    QString::section(&local_60,&local_58,&local_50,1,0xffffffff,0);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b8038;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1009b8038:
    QString::operator=(param_2,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b8074;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1009b8074:
    QString::QString(&local_48,0x5c);
    QString::section(&local_68,&local_58,&local_48,0,0,0);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b80cb;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1009b80cb:
    QString::operator=(param_3,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b8167;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_1009b8167:
  QLineEdit::text();
  QString::operator=(param_4,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b81b1;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1009b81b1:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}

