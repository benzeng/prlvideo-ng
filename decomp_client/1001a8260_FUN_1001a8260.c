
void FUN_1001a8260(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CAuthorizationDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a82d0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001a82d0:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_38,"CAuthorizationDialog",
             "Parallels Desktop requires that you type your password.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a8331;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001a8331:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_40,"CAuthorizationDialog","Name:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a8392;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a8392:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_48,"CAuthorizationDialog","Password:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a83f3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001a83f3:
  puVar2 = PTR_shared_null_1021e1288;
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

