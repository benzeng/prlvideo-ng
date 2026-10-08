
void FUN_100535350(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  Connection local_b8 [8];
  Data_conflict local_b0;
  undefined4 local_a8;
  QString local_a0;
  QVariant local_98;
  Data_conflict local_88;
  undefined4 local_80;
  QString local_78;
  Data_conflict local_70;
  undefined4 local_68;
  Data_conflict local_60;
  QVariant local_58;
  QString local_48;
  undefined1 local_39;
  QVariant local_38;
  
  lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 4) != 0) goto LAB_100535505;
  plVar1 = *(long **)(param_3 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_68 = 0x80000000;
    local_70.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_70,plVar1,param_3,0);
  }
  QVariant::toString();
  QVariant::~QVariant((QVariant *)&local_70);
  plVar1 = *(long **)(param_3 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_80 = 0x80000000;
    local_88.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_88,plVar1,param_3,0x100);
  }
  QVariant::toString();
  QVariant::~QVariant((QVariant *)&local_88);
  if ((*(int *)(local_60.field7 + 4) != 0) && (*(int *)(local_78.field0_0x0 + 4) != 0)) {
    QVariant::QVariant(&local_58,(QString *)&local_60);
    iVar2 = QComboBox::findData(lVar3,&local_58,0,0x10);
    QVariant::~QVariant(&local_58);
    if (iVar2 == -1) {
      QVariant::QVariant(&local_98,&local_78);
      QIcon::QIcon((QIcon *)&local_48);
      QComboBox::insertItem((int)lVar3,(QIcon *)0x0,&local_48,(QVariant *)&local_60);
      QIcon::~QIcon((QIcon *)&local_48);
      QVariant::~QVariant(&local_98);
    }
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_39 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1005354d5;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005354d5:
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_39 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100535505;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_100535505:
  plVar1 = *(long **)(param_3 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_a8 = 0x80000000;
    local_b0.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_b0,plVar1,param_3,0);
  }
  QVariant::toString();
  QVariant::~QVariant((QVariant *)&local_b0);
  QVariant::QVariant(&local_38,&local_a0);
  iVar2 = QComboBox::findData(lVar3,&local_38,0,0x10);
  QVariant::~QVariant(&local_38);
  if (iVar2 != -1) {
    QComboBox::setCurrentIndex((int)lVar3);
  }
  QObject::connect(local_b8,lVar3,"2currentIndexChanged( const QString &)",param_1,
                   "1onEditorStateChanged( const QString & )",0);
  QMetaObject::Connection::~Connection(local_b8);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_a0.field0_0x0 != 0) {
        return;
      }
      local_39 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
  return;
}

