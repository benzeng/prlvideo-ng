
void FUN_1009ba620(long param_1,QString *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_shared_null_1021e1288;
  QWidget::setWindowTitle(param_2);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_1009ba678;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1009ba678:
  QLabel::setText(*(QString **)(param_1 + 0x10));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_1009ba6b9;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1009ba6b9:
  QLabel::setText(*(QString **)(param_1 + 0x20));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_1009ba6fa;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1009ba6fa:
  QLabel::setText(*(QString **)(param_1 + 0x28));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
  return;
}

