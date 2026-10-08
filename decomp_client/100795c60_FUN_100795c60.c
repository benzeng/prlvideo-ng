
void FUN_100795c60(undefined8 param_1,long param_2,undefined8 param_3)

{
  CTaskGenericId *pCVar1;
  long lVar2;
  void *pvVar3;
  Connection local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  CTaskGenericId local_58 [24];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    CAppliance::getApplianceId();
    param_2 = FUN_100795f20(param_1,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100795ccc;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100795ccc:
    if (param_2 == 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: Cannot start appliance install, related server instance not found.");
      return;
    }
  }
  CAppliance::getApplianceId();
  FUN_10007eec0(local_58,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100795d23;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100795d23:
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  lVar2 = CTaskManager::getTaskById(pCVar1);
  if (lVar2 != 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: appliance is already downloading");
    goto LAB_100795e0a;
  }
  CAppliance::getApplianceId();
  lVar2 = FUN_100795470(param_1,param_2,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100795dae;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100795dae:
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x188) = 0;
  }
  pvVar3 = operator_new(0x48);
  FUN_100215510(pvVar3,param_2,param_3);
  CAbstractTask::execute();
  QObject::connect(local_70,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onInstallTaskFinished(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_70);
LAB_100795e0a:
  CTaskGenericId::~CTaskGenericId(local_58);
  return;
}

