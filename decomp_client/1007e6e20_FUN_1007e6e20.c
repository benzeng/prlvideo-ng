
void FUN_1007e6e20(CBaseDialog *param_1,undefined8 param_2,QObject *param_3)

{
  CBaseDialog *pCVar1;
  QString *pQVar2;
  QPixmap *pQVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_c8;
  long local_c0;
  QPixmap local_b8 [32];
  QPixmap local_98 [32];
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QLocale local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0xe0);
  *(undefined ***)param_1 = &PTR_FUN_10222f6c0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222f8b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222f900;
  pvVar5 = operator_new(0xd0);
  pCVar1 = param_1 + 0x60;
  *(void **)(param_1 + 0x60) = pvVar5;
  if (param_3 == (QObject *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
    pvVar5 = *(void **)pCVar1;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  *(QObject **)(param_1 + 0x78) = param_3;
  *(undefined **)(param_1 + 0x80) = PTR_shared_null_1021e1288;
  FUN_1007e7870(pvVar5,param_1);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x78);
  }
  FUN_10018d830(&local_38,uVar6);
  QWidget::setWindowTitle((QString *)param_1);
  QLocale::QLocale(local_48);
  QLocale::quoteString(&local_40,local_48,&local_38,0);
  QLocale::~QLocale(local_48);
  pQVar2 = *(QString **)(*(long *)pCVar1 + 0x48);
  QMetaObject::tr((char *)&local_50,(char *)&PTR_staticMetaObject_10222f680,0x1e197ff);
  local_58 = (QArrayData *)QString::fromAscii_helper("@VM_NAME",8);
  QString::replace(&local_50,&local_58,&local_40,1);
  CProgressIndicator::setText(pQVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e6f8e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007e6f8e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e6fbe;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007e6fbe:
  CProgressIndicator::setElidingEnabled(SUB81(*(undefined8 *)(*(long *)pCVar1 + 0x48),0));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)pCVar1 + 0x48),0));
  pQVar2 = *(QString **)(*(long *)pCVar1 + 0x80);
  QLabel::text();
  local_68 = (QArrayData *)QString::fromAscii_helper("@VM_NAME",8);
  QString::replace(&local_60,&local_68,&local_40,1);
  QLabel::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e7059;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007e7059:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e7089;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007e7089:
  pQVar2 = *(QString **)(*(long *)pCVar1 + 200);
  QLabel::text();
  local_78 = (QArrayData *)QString::fromAscii_helper("@VM_NAME",8);
  QString::replace(&local_70,&local_78,&local_40,1);
  QLabel::setText(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e7105;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007e7105:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e7135;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007e7135:
  pQVar3 = *(QPixmap **)(*(long *)pCVar1 + 0xa8);
  plVar7 = (long *)QApplication::style();
  (**(code **)(*plVar7 + 0xf8))(local_98,plVar7,9,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_98);
  pQVar3 = *(QPixmap **)(*(long *)pCVar1 + 0x68);
  plVar7 = (long *)QApplication::style();
  (**(code **)(*plVar7 + 0xf8))(local_b8,plVar7,0xb,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_b8);
  QObject::connect(&local_c0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),"2clicked()",param_1,
                   "1onShowInFinderClicked()",0);
  if (local_c0 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c0);
  QObject::connect(&local_c8,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),"2clicked()",param_1,
                   "1accept()",0);
  if ((cVar4 != '\0') && (local_c8 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e72a8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007e72a8:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

