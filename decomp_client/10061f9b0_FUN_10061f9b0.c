
void FUN_10061f9b0(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QCoreApplication::translate((char *)&local_38,"CLicenseKeyEdit","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061fa22;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10061fa22:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_40,"CLicenseKeyEdit","Dashes will be added automatically",0);
  QLineEdit::setPlaceholderText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061fa83;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10061fa83:
  puVar2 = PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061facb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10061facb:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_50,"CLicenseKeyEdit",
             "You have entered an upgrade key.\nPlease confirm it with a key from the previous version."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061fb2c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10061fb2c:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_58,"CLicenseKeyEdit","Dashes will be added automatically",0);
  QLineEdit::setPlaceholderText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061fb8d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10061fb8d:
  QLabel::setText(*(QString **)(param_1 + 0x80));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061fbd1;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_10061fbd1:
  QLabel::setText(*(QString **)(param_1 + 0xa8));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
  return;
}

