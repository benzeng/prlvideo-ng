
void FUN_1004e2850(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CVmEdHardwareSection","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e28c0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004e28c0:
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate((char *)&local_38,"CVmEdHardwareSection","Restore Defaults",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e2921;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004e2921:
  puVar2 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e2969;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1004e2969:
  QAbstractButton::setText(*(QString **)(param_1 + 0x40));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e29aa;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1004e29aa:
  QAbstractButton::setText(*(QString **)(param_1 + 0x48));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e29eb;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1004e29eb:
  QAbstractButton::setText(*(QString **)(param_1 + 0x50));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e2a2c;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1004e2a2c:
  QAbstractButton::setText(*(QString **)(param_1 + 0x58));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
  return;
}

