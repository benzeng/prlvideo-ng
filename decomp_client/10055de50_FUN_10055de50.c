
void FUN_10055de50(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 local_c4;
  QVariant local_c0;
  undefined4 local_ac;
  QVariant local_a8;
  Data_conflict local_98;
  undefined4 local_8c;
  QVariant local_88;
  Data_conflict local_78;
  undefined4 local_6c;
  QVariant local_68;
  Data_conflict local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
  QComboBox::clear();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  QMetaObject::tr(&local_58.field0,"",0x1dc86f5);
  local_6c = 0;
  QVariant::QVariant(&local_68,2,&local_6c,0);
  uVar2 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_50);
  QComboBox::insertItem((int)uVar1,(QIcon *)(ulong)uVar2,&local_50,(QVariant *)&local_58);
  QIcon::~QIcon((QIcon *)&local_50);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58.field15 != -1) {
    if (*(int *)local_58.field15 != 0) {
      LOCK();
      *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
      local_31 = *(int *)local_58.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055df3c;
    }
    QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
  }
LAB_10055df3c:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  QMetaObject::tr(&local_78.field0,"",0x1e014bf);
  local_8c = 1;
  QVariant::QVariant(&local_88,2,&local_8c,0);
  uVar2 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_48);
  QComboBox::insertItem((int)uVar1,(QIcon *)(ulong)uVar2,&local_48,(QVariant *)&local_78);
  QIcon::~QIcon((QIcon *)&local_48);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78.field15 != -1) {
    if (*(int *)local_78.field15 != 0) {
      LOCK();
      *(int *)local_78.field15 = *(int *)local_78.field15 + -1;
      local_31 = *(int *)local_78.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055dff0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field15,2,8);
  }
LAB_10055dff0:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  QMetaObject::tr(&local_98.field0,"",0x1dc88e6);
  local_ac = 2;
  QVariant::QVariant(&local_a8,2,&local_ac,0);
  uVar2 = QComboBox::count();
  QIcon::QIcon((QIcon *)&local_40);
  QComboBox::insertItem((int)uVar1,(QIcon *)(ulong)uVar2,&local_40,(QVariant *)&local_98);
  QIcon::~QIcon((QIcon *)&local_40);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98.field15 != -1) {
    if (*(int *)local_98.field15 != 0) {
      LOCK();
      *(int *)local_98.field15 = *(int *)local_98.field15 + -1;
      local_31 = *(int *)local_98.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055e0b9;
    }
    QArrayData::deallocate((QArrayData *)local_98.field15,2,8);
  }
LAB_10055e0b9:
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  local_c4 = param_2;
  QVariant::QVariant(&local_c0,2,&local_c4,0);
  QComboBox::findData(uVar1,&local_c0,0x100,0x10);
  QComboBox::setCurrentIndex((int)uVar1);
  QVariant::~QVariant(&local_c0);
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x20));
  QWidget::setDisabled(SUB81(uVar1,0));
  FUN_10055e2a0(param_1);
  return;
}

