
void FUN_10064b020(QString *param_1)

{
  QString *pQVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_10063f490();
  FUN_100df99c0("","prl_client_app",0,"[LICENSE_DIALOG] Show Account Sign In Page");
  uVar4 = FUN_10063f730(param_1);
  iVar3 = FUN_100676120(uVar4);
  if (iVar3 == -1) goto LAB_10064b1bf;
  QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_1022232f0,0x1e0ac62);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064b0c9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10064b0c9:
  pQVar1 = *(QString **)(param_1[9].field0_0x0 + 0x18);
  QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_1022232f0,0x1e0ac76);
  local_40 = (QArrayData *)QString::fromAscii_helper("@@PRODUCT_NAME",0xe);
  FUN_1001c72b0(&local_48);
  QString::replace(&local_38,&local_40,&local_48,1);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064b15f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10064b15f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064b18f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10064b18f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10064b1bf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10064b1bf:
  QLineEdit::clear();
  FUN_10064b2e0(param_1);
  bVar2 = (bool)CDeclarativeWizardProxyPage::sourcePage();
  QWidget::setDisabled(bVar2);
  return;
}

