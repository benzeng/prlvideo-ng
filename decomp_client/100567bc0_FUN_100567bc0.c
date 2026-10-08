
void FUN_100567bc0(long param_1,QString *param_2)

{
  undefined *puVar1;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CAppShortcutsWidget","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100567c30;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100567c30:
  puVar1 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100567c78;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100567c78:
  QAbstractButton::setText(*(QString **)(param_1 + 0x40));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100567cb9;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100567cb9:
  QAbstractButton::setText(*(QString **)(param_1 + 0x48));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100567cfa;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100567cfa:
  QAbstractButton::setText(*(QString **)(param_1 + 0x50));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100567d3b;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100567d3b:
  QAbstractButton::setText(*(QString **)(param_1 + 0x58));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100567d7c;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100567d7c:
  QAbstractButton::setText(*(QString **)(param_1 + 0x60));
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
  return;
}

