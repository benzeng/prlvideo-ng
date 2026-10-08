
void FUN_100577ae0(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  CTaskGenericId *pCVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  long local_78;
  long local_70;
  long local_68;
  undefined **local_60 [3];
  undefined **local_48 [3];
  undefined1 local_29;
  
  FUN_100578ca0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_48,0xab);
  local_48[0] = &PTR_FUN_102274260;
  cVar2 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_48);
  if (cVar2 == '\0') {
    FUN_1007dc3c0();
    QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x28));
  }
  else {
    QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x28));
    pCVar4 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_60,0xab);
    local_60[0] = &PTR_FUN_102274260;
    CTaskManager::getTaskById(pCVar4);
    pQVar5 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222ee00);
    piVar6 = (int *)0x0;
    if (pQVar5 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    }
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_29 = *piVar6 != 0;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x20);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_29 = *piVar7 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
      }
      *(int **)(param_1 + 0x20) = piVar6;
      *(QObject **)(param_1 + 0x28) = pQVar5;
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar6);
      }
    }
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_60);
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
    }
    FUN_100577e70(param_1,uVar8);
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar3 = FUN_1007e1140(uVar8);
    FUN_100578100(param_1,uVar3);
    QProgressBar::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68));
  }
  QObject::connect(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),"2clicked()",param_1,
                   "1installToolbox()",2);
  if (local_68 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect((Connection *)&local_70,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70),
                     "2clicked()",param_1,"1cancelToolboxInstallation()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70),"2clicked()",
                     param_1,"1cancelToolboxInstallation()",0);
    if ((cVar2 != '\0') && (local_70 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      QObject::connect(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98),"2clicked()",
                       param_1,"1openToolbox()",0);
      if ((cVar2 != '\0') && (local_78 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100577dee;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98);
  }
  QObject::connect(&local_78,uVar8,"2clicked()",param_1,"1openToolbox()",0);
LAB_100577dee:
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x70))(plVar1);
  QWidget::setFixedHeight((int)plVar1);
  return;
}

