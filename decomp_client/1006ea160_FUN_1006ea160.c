
undefined4 FUN_1006ea160(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  CTaskGenericId *pCVar3;
  long *plVar4;
  void *pvVar5;
  char *pcVar6;
  undefined4 local_e4;
  QArrayData *local_e0;
  char local_d1;
  undefined **local_d0 [3];
  undefined **local_b8 [3];
  undefined **local_a0 [3];
  undefined1 local_88 [20];
  int local_74;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId(local_40,0x3f);
  plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
  CTaskGenericId::~CTaskGenericId(local_40);
  if ((plVar4 == (long *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
    pCVar3 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_a0,0x3c);
    local_a0[0] = &PTR_FUN_102271cc0;
    plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_a0);
    if ((plVar4 == (long *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
      pCVar3 = (CTaskGenericId *)CTaskManager::instance();
      CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_b8,0x3d);
      local_b8[0] = &PTR_FUN_102273600;
      plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
      CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_b8);
      if ((plVar4 == (long *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
        pCVar3 = (CTaskGenericId *)CTaskManager::instance();
        CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_d0,0x3e);
        local_d0[0] = &PTR_FUN_1022735c0;
        plVar4 = (long *)CTaskManager::getTaskById(pCVar3);
        CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_d0);
        if ((plVar4 == (long *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
          cVar1 = FUN_1006e91e0();
          if ((local_d1 != '\0') && (cVar1 == '\x01')) {
            uVar2 = FUN_1006e9990(param_1,0);
            return uVar2;
          }
          local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
          local_e4 = 0;
          if (DAT_1023109d0 == (void *)0x0) {
            pvVar5 = operator_new(0x40);
            FUN_10077f120(pvVar5);
            DAT_102273500 = 1;
            DAT_1023109d0 = pvVar5;
          }
          cVar1 = FUN_10077f890(DAT_1023109d0,&local_e0,&local_e4);
          uVar2 = 0x80000009;
          if (cVar1 != '\0') {
            if (DAT_1023109d0 == (void *)0x0) {
              pvVar5 = operator_new(0x40);
              FUN_10077f120(pvVar5);
              DAT_102273500 = 1;
              DAT_1023109d0 = pvVar5;
            }
            uVar2 = 0x3c2c;
            FUN_10077fe90(DAT_1023109d0,&local_e0,local_e4);
          }
          if (*(int *)local_e0 == -1) {
            return uVar2;
          }
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            UNLOCK();
            if (*(int *)local_e0 != 0) {
              return uVar2;
            }
            local_21 = 0;
          }
          QArrayData::deallocate(local_e0,2,8);
          return uVar2;
        }
        if (DAT_10230ffd0 < 2) goto LAB_1006ea4d5;
        pcVar6 = "A major free upgrade is already running. Bring it to front.";
      }
      else {
        if (DAT_10230ffd0 < 2) goto LAB_1006ea4d5;
        pcVar6 = "A major upgrade purchase is already running. Bring it to front.";
      }
    }
    else {
      if (DAT_10230ffd0 < 2) goto LAB_1006ea4d5;
      pcVar6 = "A major upgrade purchase request is already running. Bring it to front.";
    }
  }
  else {
    CTaskInstallProductUpdate::updateInfo();
    FUN_10024f950(local_88);
    if (local_74 != 1) {
      if (DAT_10230ffd0 < 2) {
        return 0x80000275;
      }
      FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",2,
                    "A minor update task is running when a major upgrade has been requested.");
      return 0x80000275;
    }
    if (DAT_10230ffd0 < 2) goto LAB_1006ea4d5;
    pcVar6 = "A major upgrade task is already running. Bring it to front.";
  }
  FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",2,pcVar6);
LAB_1006ea4d5:
  (**(code **)(*plVar4 + 0x80))(plVar4);
  return 0x3c2c;
}

