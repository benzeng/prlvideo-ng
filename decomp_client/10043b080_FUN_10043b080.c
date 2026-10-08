
void FUN_10043b080(QSize *param_1,QSize param_2,undefined8 param_3)

{
  QSize QVar1;
  QArrayData *local_38;
  undefined1 local_29;
  
  CBaseDialog::CBaseDialog((CBaseDialog *)param_1,param_3,0,0);
  *param_1 = (QSize)&PTR_FUN_102211ad0;
  param_1[2] = (QSize)&PTR_FUN_102211cc0;
  param_1[6] = (QSize)&PTR_FUN_102211d10;
  QVar1 = (QSize)operator_new(0x58);
  param_1[0xc] = QVar1;
  param_1[0xd] = param_2;
  QVar1 = (QSize)operator_new(0x10);
  QStandardItemModel::QStandardItemModel((QStandardItemModel *)QVar1,(QObject *)param_1);
  param_1[0xe] = QVar1;
  FUN_10043b450(param_1[0xc],param_1);
  FUN_1001c72e0(&local_38);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10043b14d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10043b14d:
  FUN_100418990(param_1[0xe]);
  FUN_10043ad00(*(undefined8 *)((long)param_1[0xc] + 0x28),param_1[0xe],param_1[0xd]);
  FUN_10043ad00(*(undefined8 *)((long)param_1[0xc] + 0x48),param_1[0xe],param_1[0xd]);
  FUN_10043ad00(*(undefined8 *)((long)param_1[0xc] + 0x18),param_1[0xe],param_1[0xd]);
  FUN_10043ad00(*(undefined8 *)((long)param_1[0xc] + 0x40),param_1[0xe],param_1[0xd]);
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  WidgetUtils::Adjuster::adjustAllLayouts((QWidget *)param_1);
  return;
}

