
void FUN_10066bf20(QString *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_b8;
  long local_b0;
  long local_a8;
  QVariant local_a0;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_10066c7b0();
  CAbstractWizardPage::wizardModel();
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  if (param_2 == (char *)0x0) {
    return;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CAbstractWizardPage::wizardModel();
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  uVar3 = FUN_100675e00(uVar3);
  uVar3 = FUN_10016f500(uVar3);
  cVar1 = FUN_10061b4d0(uVar3,0x20);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    CAbstractWizardPage::wizardModel();
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    uVar3 = FUN_100675e00(uVar3);
    uVar3 = FUN_10016f500(uVar3);
    cVar1 = FUN_100627030(uVar3);
  }
  CAbstractWizardPage::wizardModel();
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  if (*(char *)(lVar4 + 0x19a) == '\0') {
    if (cVar1 == '\0') {
      CAbstractWizardPage::wizardModel();
      QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
      QObject::property((char *)&local_70);
      iVar2 = QVariant::toInt((bool *)&local_70);
      QVariant::~QVariant(&local_70);
      if (iVar2 != 8) {
        QMetaObject::tr((char *)&local_88,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c7f1);
        QString::operator=(&local_38,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_29 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10066c2dd;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
LAB_10066c2dd:
        QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c75a);
        QString::operator=(&local_40,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_29 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10066c345;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
        goto LAB_10066c345;
      }
    }
    QMetaObject::tr((char *)&local_78,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c77a);
    QString::operator=(&local_38,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10066c20f;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_10066c20f:
    if (cVar1 != '\0') {
      QMetaObject::tr((char *)&local_80,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c79b);
      QString::operator=(&local_40,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_29 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10066c345;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
    }
  }
  else {
    QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c709);
    QString::operator=(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10066c06b;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10066c06b:
    local_58 = (QArrayData *)
               QString::fromAscii_helper
                         ("<span style=\"font-weight:100; font-size:24pt;\">%1</span>",0x38);
    QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_1022240c0,0x1e0c75a);
    QString::arg(&local_50,&local_58,&local_60,0,0x20);
    QString::operator=(&local_40,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_29 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10066c0f5;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10066c0f5:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10066c125;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10066c125:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10066c345;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_10066c345:
  CAbstractWizardPage::setTitle(param_1);
  QVariant::QVariant(&local_a0,&local_40);
  QObject::setProperty(param_2,(QVariant *)"info");
  QVariant::~QVariant(&local_a0);
  QObject::connect(&local_a8,param_2,"2currentIndexChanged(int)",param_1,"1onSelectionChanged(int)",
                   0x80);
  if (local_a8 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  QObject::connect(&local_b0,param_2,"2itemDoubleClicked(int)",param_1,"1onItemDoubleClicked(int)",
                   0x80);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (local_b0 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  QObject::connect(&local_b8,param_2,"2tryAgainClicked()",param_1,"1onTryAgainClicked()",0x80);
  if ((cVar1 != '\0') && (local_b8 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10066c4cb;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10066c4cb:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

