
undefined1 FUN_100a04ae0(undefined8 param_1,QString *param_2)

{
  int iVar1;
  undefined1 uVar2;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QRegExp local_38 [8];
  QArrayData *local_30;
  QRegExp local_28 [15];
  undefined1 local_19;
  
  local_30 = (QArrayData *)
             QString::fromAscii_helper("^Version:\\s+.*\\((\\d+)\\.\\d+\\.\\d+\\.\\d+\\)",0x26);
  QRegExp::QRegExp(local_28,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a04b4a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a04b4a:
  QRegExp::setMinimal(SUB81(local_28,0));
  local_40 = (QArrayData *)
             QString::fromAscii_helper("^Version:\\s+.*\\((\\d+)\\.\\d+\\.\\d+\\)",0x21);
  QRegExp::QRegExp(local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a04bb1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a04bb1:
  QRegExp::setMinimal(SUB81(local_38,0));
  iVar1 = QRegExp::indexIn(local_28,param_1,0,0);
  if (iVar1 == -1) {
    iVar1 = QRegExp::indexIn(local_38,param_1,0,0);
    if (iVar1 == -1) {
      uVar2 = 0;
    }
    else {
      QRegExp::cap((int)&local_50);
      QString::operator=(param_2,&local_50);
      uVar2 = 1;
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_19 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100a04ca5;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
    }
  }
  else {
    QRegExp::cap((int)&local_48);
    QString::operator=(param_2,&local_48);
    uVar2 = 1;
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a04ca5;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100a04ca5:
  QRegExp::~QRegExp(local_38);
  QRegExp::~QRegExp(local_28);
  return uVar2;
}

