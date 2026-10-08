
QString * FUN_1005ad7a0(undefined8 param_1,int param_2,long param_3)

{
  char cVar1;
  QString *pQVar2;
  QArrayData *local_80;
  QArrayData *local_78;
  QUrl local_70 [8];
  QString local_68;
  QArrayData *local_60;
  QUrl local_58 [8];
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      return (QString *)0x0;
    }
    pQVar2 = operator_new(0x40);
    FUN_1005aeeb0(pQVar2,param_3,0,0);
    local_60 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/AntivirusSelectPage.qml",0x20);
    QUrl::QUrl(local_58,&local_60,0);
    FUN_1005aeee0(pQVar2,local_58);
    QUrl::~QUrl(local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005ad930;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1005ad930:
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if (*(int *)(param_3 + 0x30) == 1) {
      cVar1 = FUN_1005a89d0(param_3);
      if (cVar1 == '\0') {
        QMetaObject::tr((char *)&local_50,(char *)&PTR_staticMetaObject_10221df20,0x1e03914);
        QString::operator=(&local_68,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_21 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1005adb0b;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_10221df20,0x1e038ed);
        FUN_1005a9e70(&local_48,param_3);
        QString::arg(&local_38,&local_40,&local_48,0,0x20);
        QString::operator=(&local_68,&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_21 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1005ad9d8;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
LAB_1005ad9d8:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_21 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1005ada08;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1005ada08:
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_21 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1005adb0b;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
    }
    else if (*(int *)(param_3 + 0x30) == 0) {
      QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_10221df20,0x1e038b9);
      QString::operator=(&local_68,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          local_21 = *(int *)local_30.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1005adb0b;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
LAB_1005adb0b:
    CAbstractWizardPage::setTitle(pQVar2);
    if (*(int *)local_68.field0_0x0 == -1) {
      return pQVar2;
    }
    local_80 = (QArrayData *)local_68.field0_0x0;
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return pQVar2;
      }
      local_21 = 0;
    }
    goto LAB_1005adb38;
  }
  pQVar2 = operator_new(0x40);
  FUN_1005aeeb0(pQVar2,param_3,1,0);
  local_78 = (QArrayData *)QString::fromAscii_helper("qrc:/qml/AntivirusProgressPage.qml",0x22);
  QUrl::QUrl(local_70,&local_78,0);
  FUN_1005aeee0(pQVar2,local_70);
  QUrl::~QUrl(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ad844;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005ad844:
  QMetaObject::tr((char *)&local_80,(char *)&PTR_staticMetaObject_10221df20,0x1ddc56f);
  CAbstractWizardPage::setTitle(pQVar2);
  if (*(int *)local_80 == -1) {
    return pQVar2;
  }
  if (*(int *)local_80 != 0) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + -1;
    UNLOCK();
    if (*(int *)local_80 != 0) {
      return pQVar2;
    }
    local_21 = 0;
  }
LAB_1005adb38:
  QArrayData::deallocate(local_80,2,8);
  return pQVar2;
}

