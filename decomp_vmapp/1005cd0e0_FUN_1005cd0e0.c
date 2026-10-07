
undefined8 FUN_1005cd0e0(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  QString *pQVar5;
  QArrayData *local_80;
  QRegExp local_78 [8];
  QArrayData *local_70;
  QRegExp local_68 [8];
  QArrayData *local_60;
  QRegExp local_58 [8];
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  uVar1 = *param_3;
  *param_3 = *param_4;
  *param_4 = uVar1;
  (**(code **)(*param_1 + 0x128))(param_1,param_3);
  (**(code **)(*param_1 + 0x128))(param_1,param_4);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_40 = *(QArrayData **)(param_4 + 2);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_3 + 2);
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  cVar2 = FUN_100778a30(&local_40);
  if (cVar2 == '\0') {
    cVar2 = FUN_100778a30(&local_48);
    if (cVar2 == '\0') {
      QString::operator=(&local_38,&local_48);
    }
    else {
      local_80 = (QArrayData *)QString::fromAscii_helper("/|\\\\",4);
      QRegExp::QRegExp(local_78,&local_80,1,0);
      QString::lastIndexOf((QRegExp *)&local_48,(int)local_78);
      pQVar5 = (QString *)QString::remove((int)&local_48,0);
      QString::operator=(&local_38,pQVar5);
      QRegExp::~QRegExp(local_78);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005cd399;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
  }
  else {
    local_60 = (QArrayData *)QString::fromAscii_helper("/|\\\\",4);
    QRegExp::QRegExp(local_58,&local_60,1,0);
    iVar3 = QString::lastIndexOf((QRegExp *)&local_40,(int)local_58);
    puVar4 = (undefined8 *)QString::remove((int)&local_40,iVar3 + 1);
    local_70 = (QArrayData *)QString::fromAscii_helper("/|\\\\",4);
    QRegExp::QRegExp(local_68,&local_70,1,0);
    QString::lastIndexOf((QRegExp *)&local_48,(int)local_68);
    QString::remove((int)&local_48,0);
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar4;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_50);
    QString::operator=(&local_38,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_29 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005cd26b;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1005cd26b:
    QRegExp::~QRegExp(local_68);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005cd2a4;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005cd2a4:
    QRegExp::~QRegExp(local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005cd399;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1005cd399:
  cVar2 = operator==((QString *)(param_3 + 2),&local_38);
  if (cVar2 == '\0') {
    QString::operator=((QString *)(param_3 + 2),&local_38);
    (**(code **)(*param_1 + 0x120))(param_1,param_3);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cd3fc;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005cd3fc:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cd42c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005cd42c:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

