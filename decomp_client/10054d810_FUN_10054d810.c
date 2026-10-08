
void FUN_10054d810(long param_1)

{
  QString *pQVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  CTaskGenericId *pCVar6;
  QObject *pQVar7;
  int *piVar8;
  int *piVar9;
  size_t sVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_b0;
  long local_a8;
  long local_a0;
  QArrayData *local_98;
  undefined **local_90 [3];
  undefined **local_78 [3];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10054eea0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  FontUtils::setNormalFont(*(QWidget **)(*(long *)(param_1 + 0x18) + 8),true);
  FontUtils::setNormalFont(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x60),true);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0xa0) + 0x70))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0xc0) + 0x70))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x100) + 0x70))();
  QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa0));
  QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xc0));
  QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100));
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x30);
  local_38 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12/accessapp-@LOCALE@",0x43);
  CAppStoreButton::setAppUrl(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054d925;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10054d925:
  CAppStoreButton::setStoreType(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x40);
  local_40 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12/googleplayapp",0x3e);
  CAppStoreButton::setAppUrl(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054d98d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10054d98d:
  CAppStoreButton::setStoreType(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),1);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x50);
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12/amazonapp-@LOCALE@",0x43);
  CAppStoreButton::setAppUrl(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054d9f8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10054d9f8:
  CAppStoreButton::setStoreType(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),2);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x20);
  QLabel::text();
  local_60 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-web-console",0x3c);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054da88;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10054da88:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054dab8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10054dab8:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054dae8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10054dae8:
  QLayout::removeWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0xb0));
  QObject::installEventFilter(*(QObject **)(*(long *)(param_1 + 0x18) + 0xb8));
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_78,0x7d);
  local_78[0] = &PTR_FUN_102273580;
  cVar4 = CTaskManager::isTaskRunning(pCVar6);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_78);
  puVar3 = PTR_s_com_parallels_mobile_102271000;
  if (cVar4 == '\0') {
    iVar11 = -1;
    if (PTR_s_com_parallels_mobile_102271000 != (undefined *)0x0) {
      sVar10 = _strlen(PTR_s_com_parallels_mobile_102271000);
      iVar11 = (int)sVar10;
    }
    local_98 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar11);
    FUN_100123a10(&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10054dd14;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10054dd14:
    QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x80));
  }
  else {
    QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x80));
    pCVar6 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_90,0x7d);
    local_90[0] = &PTR_FUN_102273580;
    CTaskManager::getTaskById(pCVar6);
    pQVar7 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220af80);
    piVar8 = (int *)0x0;
    if (pQVar7 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
    }
    piVar9 = *(int **)(param_1 + 0x20);
    if (piVar9 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_29 = *piVar8 != 0;
        UNLOCK();
        piVar9 = *(int **)(param_1 + 0x20);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_29 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
      }
      *(int **)(param_1 + 0x20) = piVar8;
      *(QObject **)(param_1 + 0x28) = pQVar7;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar8);
      }
    }
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_90);
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_10054e120(param_1,uVar12);
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar5 = FUN_1002f2420(uVar12);
    FUN_10054e290(param_1,uVar5);
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8);
    uVar13 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar13 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_1002f34e0(uVar13);
    QProgressBar::setValue((int)uVar12);
  }
  QObject::connect(&local_a0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa0),"2clicked()",param_1,
                   "1installPaxAgent()",2);
  if (local_a0 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    QObject::connect((Connection *)&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xc0),
                     "2clicked()",param_1,"1cancelPaxAgentInstallation()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_a8);
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100);
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    QObject::connect(&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xc0),"2clicked()",
                     param_1,"1cancelPaxAgentInstallation()",0);
    if ((cVar4 != '\0') && (local_a8 != 0)) {
      cVar4 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_a8);
      QObject::connect(&local_b0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100),"2clicked()",
                       param_1,"1openPaxAgent()",0);
      if ((cVar4 != '\0') && (local_b0 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10054deec;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a8);
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100);
  }
  QObject::connect(&local_b0,uVar12,"2clicked()",param_1,"1openPaxAgent()",0);
LAB_10054deec:
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x70))(plVar2);
  QWidget::setFixedHeight((int)plVar2);
  return;
}

