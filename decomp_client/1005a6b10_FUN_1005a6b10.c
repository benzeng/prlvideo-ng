
void FUN_1005a6b10(QSize *param_1)

{
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_1005a7040(param_1[0xc],param_1);
  FUN_1001c72e0(&local_28);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005a6b71;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005a6b71:
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  return;
}

