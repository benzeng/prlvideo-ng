
undefined8 FUN_1002bdbd0(long *param_1)

{
  byte bVar1;
  char cVar2;
  QObject *pQVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_60;
  undefined1 local_58 [24];
  long local_40;
  long local_38;
  undefined1 local_29;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar5 = 1;
  if ((int)param_1[9] != 1) {
    lVar4 = 0;
    if ((param_1[5] != 0) && (lVar4 = 0, *(int *)(param_1[5] + 4) != 0)) {
      lVar4 = param_1[6];
    }
    FUN_10018c2b0(lVar4);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmProtection();
    bVar1 = CVmProtection::isEnabled();
    iVar5 = (uint)bVar1 * 2;
  }
  pQVar3 = operator_new(0x48);
  lVar4 = 0;
  if ((param_1[7] != 0) && (lVar4 = 0, *(int *)(param_1[7] + 4) != 0)) {
    lVar4 = param_1[8];
  }
  CPasswordDialog::CPasswordDialog((CPasswordDialog *)pQVar3,iVar5,lVar4);
  QObject::connect(&local_38,pQVar3,"2rejected()",param_1,"1onPasswordDlgCanceled()",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,pQVar3,"2accepted()",param_1,"1onPasswordDlgAccepted()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,pQVar3,"2accepted()",param_1,"1onPasswordDlgAccepted()",0);
    if ((cVar2 != '\0') && (local_40 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  (**(code **)(*param_1 + 200))(local_58,param_1,iVar5);
  CPasswordDialog::setPasswordValidator(pQVar3,(char *)param_1,"1checkPassword(QString)");
  CPasswordDialog::hideSavePassword();
  CPasswordDialog::setTitleText((QString *)pQVar3);
  CPasswordDialog::setWarningText((QString *)pQVar3);
  FUN_1001c72e0(&local_60);
  QWidget::setWindowTitle((QString *)pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002bdda4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002bdda4:
  (**(code **)(*(long *)pQVar3 + 0x1a0))(pQVar3);
  FUN_1002bf070(local_58);
  return 0;
}

