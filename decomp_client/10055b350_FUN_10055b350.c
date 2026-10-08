
void FUN_10055b350(undefined8 param_1,QString *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  QKeySequence local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  bVar2 = SUB81(param_2,0);
  QObject::blockSignals(bVar2);
  iVar1 = FUN_10071bf00(param_1);
  QKeySequence::QKeySequence(local_48,iVar1,0,0,0);
  FUN_1007170a0(&local_40,local_48,0);
  QLineEdit::setText(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055b3e4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10055b3e4:
  QKeySequence::~QKeySequence(local_48);
  QObject::blockSignals(bVar2);
  FUN_10071bea0(param_1);
  QObject::blockSignals(param_3);
  QAbstractButton::setChecked(param_3);
  QObject::blockSignals(param_3);
  QWidget::setEnabled(bVar2);
  QWidget::setEnabled(param_4);
  return;
}

