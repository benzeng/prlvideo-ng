
void FUN_1001b6cf0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  CTaskGenericId *pCVar4;
  void *pvVar5;
  QArrayData *local_90;
  CTaskGenericId local_88 [24];
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",2,
                  "It is time to check if Host AntiVirus is installed!");
  }
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_60 = (QArrayData *)QString::fromAscii_helper("Antivirus/HavPromoOff",0x15);
  QVariant::QVariant(&local_70,false);
  QSettings::value((QString *)&local_58,&local_48);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b6dc0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001b6dc0:
  QSettings::~QSettings((QSettings *)&local_48);
  if ((cVar1 != '\0') || (cVar1 = FUN_10011d760(0,0), cVar1 != '\0')) {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x10) < 0) {
      return;
    }
    QTimer::stop();
    return;
  }
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    return;
  }
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  FUN_10015aab0(&local_90,lVar3);
  FUN_100178ec0(local_88,&local_90);
  cVar1 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b6e87;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001b6e87:
  if (cVar1 == '\0') {
    cVar1 = FUN_1001b7210(param_1);
    if (cVar1 != '\0') {
      FUN_1001b6fe0();
      pvVar5 = operator_new(0x60);
      FUN_1002aaf20(pvVar5,lVar3,1);
      CAbstractTask::execute();
    }
  }
  else {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("[APP_HAV_PROMO]","prl_client_app",2,
                    "Installation Host AntiVirus is in process!");
    }
    FUN_1001b6fe0();
    if (*(long *)(param_1 + 0x10) != 0) {
      QTimer::start((int)*(long *)(param_1 + 0x10));
    }
  }
  return;
}

