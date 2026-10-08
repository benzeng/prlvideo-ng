
void FUN_10099ea60(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString *pQVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  Connection local_80 [8];
  Connection local_78 [8];
  Connection local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  code *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  
  pQVar1 = param_1[0xc].field0_0x0;
  uVar4 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1009a3520(pQVar1,uVar4);
  uVar4 = FUN_1009983a0(param_1);
  cVar3 = FUN_100990a60(uVar4);
  if (cVar3 == '\0') {
    QMetaObject::tr((char *)&local_60,(char *)&PTR_PTR_102234ca0,0x1e0510a);
    CAbstractWizardPage::setTitle(param_1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        local_38 = (undefined *)CONCAT71(local_38._1_7_,*(int *)local_60 != 0);
        if (*(int *)local_60 != 0) goto LAB_10099ebb8;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10099ebb8:
    pQVar2 = *(QString **)(param_1[0xc].field0_0x0 + 8);
    QMetaObject::tr((char *)&local_68,(char *)&PTR_PTR_102234ca0,0x1e335ce);
    QLabel::setText(pQVar2);
    if (*(int *)local_68 == -1) goto LAB_10099ec1d;
    local_58 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      bVar6 = *(int *)local_68 != 0;
      UNLOCK();
      local_38 = (undefined *)CONCAT71(local_38._1_7_,bVar6);
      goto joined_r0x00010099ec08;
    }
  }
  else {
    QMetaObject::tr((char *)&local_50,(char *)&PTR_PTR_102234ca0,0x1e33565);
    CAbstractWizardPage::setTitle(param_1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        local_38 = (undefined *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
        if (*(int *)local_50 != 0) goto LAB_10099eafb;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10099eafb:
    pQVar2 = *(QString **)(param_1[0xc].field0_0x0 + 8);
    QMetaObject::tr((char *)&local_58,(char *)&PTR_PTR_102234ca0,0x1e33588);
    QLabel::setText(pQVar2);
    if (*(int *)local_58 == -1) goto LAB_10099ec1d;
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      bVar6 = *(int *)local_58 != 0;
      UNLOCK();
      local_38 = (undefined *)CONCAT71(local_38._1_7_,bVar6);
joined_r0x00010099ec08:
      if (bVar6) goto LAB_10099ec1d;
    }
  }
  QArrayData::deallocate(local_58,2,8);
LAB_10099ec1d:
  CPrlFileDevSelectorWidget::setCustomWidgetType(*(undefined8 *)(param_1[0xc].field0_0x0 + 0x30),1);
  CPrlFileDevSelectorWidget::setDisplayShortNames
            (SUB81(*(undefined8 *)(param_1[0xc].field0_0x0 + 0x30),0));
  pQVar2 = *(QString **)(param_1[0xc].field0_0x0 + 0x30);
  uVar4 = FUN_1009983a0(param_1);
  FUN_100990b00(uVar4);
  QWidget::setStyleSheet(pQVar2);
  uVar4 = *(undefined8 *)(param_1[0xc].field0_0x0 + 0x78);
  local_38 = PTR_textChanged_1021e15d8;
  local_30 = 0;
  local_48 = FUN_1009bf300;
  local_40 = 0;
  puVar5 = operator_new(0x20);
  *puVar5 = 1;
  *(code **)(puVar5 + 2) = FUN_1009a58e0;
  *(code **)(puVar5 + 4) = FUN_1009bf300;
  *(undefined8 *)(puVar5 + 6) = 0;
  QObject::connectImpl
            (local_70,uVar4,&local_38,param_1,&local_48,puVar5,0,0,PTR_staticMetaObject_1021e15e0);
  QMetaObject::Connection::~Connection(local_70);
  uVar4 = *(undefined8 *)(param_1[0xc].field0_0x0 + 0x30);
  local_38 = PTR_currentItemChanged_1021e1478;
  local_30 = 0;
  local_48 = FUN_10099f0b0;
  local_40 = 0;
  puVar5 = operator_new(0x20);
  *puVar5 = 1;
  *(code **)(puVar5 + 2) = FUN_1009a5940;
  *(code **)(puVar5 + 4) = FUN_10099f0b0;
  *(undefined8 *)(puVar5 + 6) = 0;
  QObject::connectImpl
            (local_78,uVar4,&local_38,param_1,&local_48,puVar5,0,0,PTR_staticMetaObject_1021e1470);
  QMetaObject::Connection::~Connection(local_78);
  uVar4 = *(undefined8 *)(param_1[0xc].field0_0x0 + 0xb0);
  local_38 = PTR_clicked_1021e1358;
  local_30 = 0;
  local_48 = FUN_10099f0c0;
  local_40 = 0;
  puVar5 = operator_new(0x20);
  *puVar5 = 1;
  *(code **)(puVar5 + 2) = FUN_1009a5940;
  *(code **)(puVar5 + 4) = FUN_10099f0c0;
  *(undefined8 *)(puVar5 + 6) = 0;
  QObject::connectImpl
            (local_80,uVar4,&local_38,param_1,&local_48,puVar5,0,0,PTR_staticMetaObject_1021e1350);
  QMetaObject::Connection::~Connection(local_80);
  return;
}

