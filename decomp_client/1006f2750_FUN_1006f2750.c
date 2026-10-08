
void FUN_1006f2750(QSize *param_1)

{
  undefined *puVar1;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1001c72e0(&local_30);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f27a7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006f27a7:
  puVar1 = PTR_s_DynProp_CanShowSheet_102270de0;
  QVariant::QVariant(&local_40,true);
  QObject::setProperty((char *)param_1,(QVariant *)puVar1);
  QVariant::~QVariant(&local_40);
  QDialog::setModal(SUB81(param_1,0));
  FUN_1006ee530(param_1[0xd]);
  FUN_1006ee960(param_1[0xd]);
  FUN_1006efca0(param_1[0xd]);
  (**(code **)((long)*param_1 + 0x70))(param_1);
  QWidget::setFixedSize(param_1);
  return;
}

