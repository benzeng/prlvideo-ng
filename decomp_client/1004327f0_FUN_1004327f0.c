
void FUN_1004327f0(QWidget *param_1,QModelIndex *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  Data_conflict local_48;
  undefined4 local_40;
  QString local_38;
  QVariant local_30;
  undefined1 local_19;
  
  if (*(int *)(param_3 + 4) != 3) {
    QStyledItemDelegate::setEditorData(param_1,param_2);
    return;
  }
  uVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  plVar1 = *(long **)(param_3 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_40 = 0x80000000;
    local_48.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_48,plVar1,param_3,0);
  }
  QVariant::toString();
  QVariant::QVariant(&local_30,&local_38);
  QComboBox::findData(uVar2,&local_30,0,0x10);
  QVariant::~QVariant(&local_30);
  QComboBox::setCurrentIndex((int)uVar2);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004328c1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1004328c1:
  QVariant::~QVariant((QVariant *)&local_48);
  return;
}

