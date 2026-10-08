
void FUN_10019eef0(long param_1,QString *param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CHddV3ConvertDialogUI","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019ef60;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10019ef60:
  puVar2 = PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x20));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019efa8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10019efa8:
  local_40 = (QArrayData *)puVar2;
  QLabel::setText(*(QString **)(param_1 + 0x38));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019efe9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10019efe9:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate
            ((char *)&local_48,"CHddV3ConvertDialogUI",
             "Please, wait while @ is converting the hard disks of this virtual machine ...",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019f04a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10019f04a:
  pQVar1 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_50,"CHddV3ConvertDialogUI","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019f0ab;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10019f0ab:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_58,"CHddV3ConvertDialogUI","Convert",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

