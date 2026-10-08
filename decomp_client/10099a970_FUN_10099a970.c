
void FUN_10099a970(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString *pQVar2;
  char cVar3;
  undefined8 uVar4;
  long local_38;
  long local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = param_1[10].field0_0x0;
  uVar4 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_10099cc90(pQVar1,uVar4);
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Windows_Installation_Files_10227dee8);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10099a9f2;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10099a9f2:
  CProgressIndicator::setVerticalLayout(SUB81(*(undefined8 *)(param_1[10].field0_0x0 + 0x80),0));
  CProgressIndicator::setElidingEnabled(SUB81(*(undefined8 *)(param_1[10].field0_0x0 + 0x80),0));
  CPrlFileDevSelectorWidget::setCustomWidgetType(*(undefined8 *)(param_1[10].field0_0x0 + 0x70),1);
  CPrlFileDevSelectorWidget::setDisplayShortNames
            (SUB81(*(undefined8 *)(param_1[10].field0_0x0 + 0x70),0));
  pQVar2 = *(QString **)(param_1[10].field0_0x0 + 0x70);
  uVar4 = FUN_1009983a0(param_1);
  FUN_100990b00(uVar4);
  QWidget::setStyleSheet(pQVar2);
  QObject::connect(&local_30,*(undefined8 *)(param_1[10].field0_0x0 + 0x48),"2toggled(bool)",param_1
                   ,"1OnTypeChanged(bool)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1[10].field0_0x0 + 0x58),"2toggled(bool)",
                     param_1,"1OnTypeChanged(bool)",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1[10].field0_0x0 + 0x58),"2toggled(bool)",
                     param_1,"1OnTypeChanged(bool)",0);
    if ((cVar3 != '\0') && (local_38 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

