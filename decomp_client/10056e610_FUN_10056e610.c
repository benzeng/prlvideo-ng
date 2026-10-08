
void FUN_10056e610(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CSendKeyToVmWidget","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056e680;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10056e680:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate
            ((char *)&local_38,"CSendKeyToVmWidget",
             "Use the Devices > Keyboard menu to send shortcuts to virtual machines.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056e6e1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10056e6e1:
  puVar2 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x50));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056e729;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10056e729:
  QAbstractButton::setText(*(QString **)(param_1 + 0x58));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056e76a;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10056e76a:
  QAbstractButton::setText(*(QString **)(param_1 + 0x60));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056e7ab;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10056e7ab:
  QAbstractButton::setText(*(QString **)(param_1 + 0x68));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056e7ec;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10056e7ec:
  QAbstractButton::setText(*(QString **)(param_1 + 0x70));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10056e82d;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10056e82d:
  QAbstractButton::setText(*(QString **)(param_1 + 0x78));
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

