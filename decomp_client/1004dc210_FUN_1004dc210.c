
void FUN_1004dc210(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  QVariant local_80;
  QVariant local_70;
  QArrayData *local_60;
  Data_conflict local_58;
  QArrayData *local_50;
  Data_conflict local_48;
  QString local_40 [2];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
  FUN_1004ddfa0(&local_50,param_1);
  local_48.field15 = (QObject *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_19 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1dfac16);
  QString::append((QString *)&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004dc2a0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004dc2a0:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004dc2d0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004dc2d0:
  FUN_1004ddfa0(&local_60,param_1);
  local_58.field15 = (QObject *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_19 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1dfac21);
  QString::append((QString *)&local_58);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004dc347;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1004dc347:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004dc377;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004dc377:
  (**(code **)(*param_1 + 0x228))(param_1);
  QListWidget::currentRow();
  iVar1 = (**(code **)(*param_1 + 0x228))(param_1);
  lVar2 = QListWidget::item(iVar1);
  iVar1 = 0;
  if ((lVar2 != 0) &&
     (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10), iVar1 = 0,
     lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0x3c);
  }
  QVariant::QVariant(&local_70,iVar1);
  QSettings::setValue(local_40,(QVariant *)&local_48);
  QVariant::~QVariant(&local_70);
  (**(code **)(*param_1 + 0x228))(param_1);
  QListWidget::currentRow();
  iVar1 = (**(code **)(*param_1 + 0x228))(param_1);
  lVar2 = QListWidget::item(iVar1);
  uVar3 = 0;
  if ((lVar2 != 0) &&
     (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10), uVar3 = 0,
     lVar2 != 0)) {
    uVar3 = *(uint *)(lVar2 + 0x40);
  }
  QVariant::QVariant(&local_80,uVar3);
  QSettings::setValue(local_40,(QVariant *)&local_58);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_58.field15 != -1) {
    if (*(int *)local_58.field15 != 0) {
      LOCK();
      *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
      local_19 = *(int *)local_58.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004dc4a9;
    }
    QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
  }
LAB_1004dc4a9:
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_19 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004dc4d9;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1004dc4d9:
  QSettings::~QSettings((QSettings *)local_40);
  return;
}

