
undefined1 FUN_1006f8d30(long *param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  QFileInfo local_58 [8];
  QFileInfo local_50 [8];
  QFileInfo local_48 [8];
  QFileInfo local_40 [8];
  QString local_38;
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if (*(int *)(*param_1 + 4) == 0) {
    return 0;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    return 0;
  }
  FUN_1006f9040(&local_20,param_1);
  FUN_1006f9040(&local_28,param_2);
  QString::toLower();
  QString::toLower();
  cVar1 = operator==(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_11 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006f8dca;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006f8dca:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006f8dfa;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1006f8dfa:
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    QFileInfo::QFileInfo(local_40,&local_20);
    cVar1 = QFileInfo::exists();
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      QFileInfo::QFileInfo(local_48,&local_28);
      cVar1 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_48);
    }
    QFileInfo::~QFileInfo(local_40);
    if (cVar1 == '\0') {
      iVar3 = QString::compare(&local_20,&local_28,0);
      uVar2 = iVar3 == 0;
    }
    else {
      QFileInfo::QFileInfo(local_50,&local_20);
      QFileInfo::QFileInfo(local_58,&local_28);
      uVar2 = QFileInfo::operator==(local_50,local_58);
      QFileInfo::~QFileInfo(local_58);
      QFileInfo::~QFileInfo(local_50);
    }
  }
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006f8eee;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1006f8eee:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return uVar2;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return uVar2;
}

