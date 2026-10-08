
void FUN_1004dbd50(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QVariant local_a8;
  QVariant local_98;
  QVariant local_88;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  FUN_1004ddfa0(&local_58,param_1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1dfac16);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004dbde5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004dbde5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004dbe15;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004dbe15:
  FUN_1004ddfa0(&local_68,param_1);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_21 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1dfac21);
  QString::append(&local_60);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004dbe8c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004dbe8c:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004dbebc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004dbebc:
  iVar1 = (**(code **)(*param_1 + 0x1e8))(param_1);
  QVariant::QVariant(&local_88,iVar1);
  QSettings::value((QString *)&local_78,&local_48);
  uVar2 = QVariant::toUInt((bool *)&local_78);
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant(&local_88);
  QVariant::QVariant(&local_a8,0);
  QSettings::value((QString *)&local_98,&local_48);
  uVar3 = QVariant::toUInt((bool *)&local_98);
  QVariant::~QVariant(&local_98);
  QVariant::~QVariant(&local_a8);
  (**(code **)(*param_1 + 0x1c8))(param_1,uVar2,uVar3);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004dbfa0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004dbfa0:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004dbfd0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004dbfd0:
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

