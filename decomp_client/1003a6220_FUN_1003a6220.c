
void FUN_1003a6220(char *param_1,QString *param_2)

{
  QObject *pQVar1;
  undefined8 uVar2;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = operator_new(0x48);
  uVar2 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  CPasswordDialog::CPasswordDialog((CPasswordDialog *)pQVar1,2,uVar2);
  CPasswordDialog::setPasswordValidator(pQVar1,param_1,"1checkHddPassword(const QString&)");
  CPasswordDialog::hideSavePassword();
  QMetaObject::tr((char *)&local_30,"",0x1df171d);
  CPasswordDialog::setTitleText((QString *)pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003a62d7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003a62d7:
  QMetaObject::tr((char *)&local_38,"",0x1df174d);
  CPasswordDialog::setDescriptionText((QString *)pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003a6334;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003a6334:
  QVariant::QVariant(&local_48,param_2);
  QObject::setProperty((char *)pQVar1,(QVariant *)"hddStoragePath");
  QVariant::~QVariant(&local_48);
  FUN_1001c72e0(&local_50);
  QWidget::setWindowTitle((QString *)pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003a63a5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003a63a5:
  (**(code **)(*(long *)pQVar1 + 0x1a0))(pQVar1);
  return;
}

