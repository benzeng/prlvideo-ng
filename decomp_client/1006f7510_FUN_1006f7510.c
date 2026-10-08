
void FUN_1006f7510(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f756a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006f756a:
  local_38 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x28));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f75ab;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006f75ab:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_40,"CNewVersionAvailableDialog","Upgrade to New Version",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f760c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006f760c:
  pQVar1 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate
            ((char *)&local_48,"CNewVersionAvailableDialog",
             "@@PRODUCT_NAME %1 for Mac is available!",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006f766d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006f766d:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_50,"CNewVersionAvailableDialog","<a href=\"%1\">Learn More</a>",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

