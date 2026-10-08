
undefined1 FUN_100a045a0(undefined8 param_1,QString *param_2,QString *param_3,QString *param_4)

{
  int iVar1;
  undefined1 uVar2;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QRegExp local_48 [8];
  QArrayData *local_40;
  QRegExp local_38 [15];
  undefined1 local_29;
  
  local_40 = (QArrayData *)
             QString::fromAscii_helper
                       ("^Version:\\s+.*(\\d+)\\.\\d+\\s+.*\\((\\d+)\\.(\\d+)\\)",0x2d);
  QRegExp::QRegExp(local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a04614;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a04614:
  QRegExp::setMinimal(SUB81(local_38,0));
  local_50 = (QArrayData *)
             QString::fromAscii_helper("^Version:\\s+.*(\\d+)\\.\\d+\\.\\d+\\s+.*\\((\\d+)\\)",0x2b)
  ;
  QRegExp::QRegExp(local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a0467b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a0467b:
  QRegExp::setMinimal(SUB81(local_48,0));
  iVar1 = QRegExp::indexIn(local_38,param_1,0,0);
  if (iVar1 == -1) {
    iVar1 = QRegExp::indexIn(local_48,param_1,0,0);
    if (iVar1 == -1) {
      uVar2 = 0;
      goto LAB_100a048ab;
    }
    QRegExp::cap((int)&local_70);
    QString::operator=(param_2,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a04802;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100a04802:
    QRegExp::cap((int)&local_78);
    QString::operator=(param_3,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a04850;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100a04850:
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_4,&local_80);
    uVar2 = 1;
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a048ab;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
    goto LAB_100a048ab;
  }
  QRegExp::cap((int)&local_58);
  QString::operator=(param_2,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a046f0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a046f0:
  QRegExp::cap((int)&local_60);
  QString::operator=(param_3,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a0473e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a0473e:
  QRegExp::cap((int)&local_68);
  QString::operator=(param_4,&local_68);
  uVar2 = 1;
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a048ab;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100a048ab:
  QRegExp::~QRegExp(local_48);
  QRegExp::~QRegExp(local_38);
  return uVar2;
}

