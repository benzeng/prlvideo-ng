
void FUN_100559740(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CProfileWidget","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005597b0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005597b0:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_38,"CProfileWidget","Profile:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100559811;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100559811:
  puVar2 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x70));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100559859;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_100559859:
  QAbstractButton::setText(*(QString **)(param_1 + 0x78));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10055989a;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10055989a:
  QAbstractButton::setText(*(QString **)(param_1 + 0x80));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005598de;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1005598de:
  QAbstractButton::setText(*(QString **)(param_1 + 0x88));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100559922;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_100559922:
  QAbstractButton::setText(*(QString **)(param_1 + 0x90));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100559966;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_100559966:
  QAbstractButton::setText(*(QString **)(param_1 + 0x98));
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

