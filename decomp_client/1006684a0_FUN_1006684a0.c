
void FUN_1006684a0(undefined8 param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_78;
  long local_70;
  QVariant local_68;
  QVariant local_58;
  QString local_48;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  QVariant::QVariant(&local_38,"UsualState");
  QObject::setProperty(param_2,(QVariant *)"state");
  QVariant::~QVariant(&local_38);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CAbstractWizardPage::wizardModel();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  if (lVar2 == 0) goto LAB_1006685c8;
  CAbstractWizardPage::wizardModel();
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  lVar2 = FUN_100675e00(uVar3);
  if (lVar2 == 0) goto LAB_1006685c8;
  CAbstractWizardPage::wizardModel();
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  uVar3 = FUN_100675e00(uVar3);
  uVar3 = FUN_10016f500(uVar3);
  FUN_10061abe0(&local_58,uVar3,0x12);
  QVariant::toString();
  QString::operator=(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006685bf;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006685bf:
  QVariant::~QVariant(&local_58);
LAB_1006685c8:
  QVariant::QVariant(&local_68,&local_40);
  QObject::setProperty(param_2,(QVariant *)"mailToConfirm");
  QVariant::~QVariant(&local_68);
  FUN_100668790(param_1,1);
  QObject::connect(&local_70,param_2,"2resendClicked()",param_1,"1onResendClicked()",0);
  if (local_70 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  uVar3 = CAbstractWizardPage::wizardModel();
  QObject::connect(&local_78,uVar3,"2busyChanged(bool)",param_1,"1onBusyChanged(bool)",0);
  if ((cVar1 != '\0') && (local_78 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

