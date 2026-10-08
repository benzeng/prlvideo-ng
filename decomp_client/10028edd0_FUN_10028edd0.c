
undefined8 FUN_10028edd0(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  CTaskGenericId *pCVar6;
  void *pvVar7;
  QArrayData *local_70;
  CTaskGenericId local_68 [24];
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get local server");
    return 0x80000009;
  }
  FUN_10015a350(&local_40,lVar5);
  if (local_40 == 0) {
    bVar2 = false;
    bVar1 = false;
LAB_10028ee77:
    pCVar6 = (CTaskGenericId *)CTaskManager::instance();
    FUN_10015aab0(&local_70,lVar5);
    FUN_100228380(local_68,&local_70);
    bVar3 = CTaskManager::isTaskRunning(pCVar6);
    CTaskGenericId::~CTaskGenericId(local_68);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10028eee0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10028eee0:
    bVar3 = bVar3 ^ 1;
    if ((!bVar1) || (local_50 == 0)) goto LAB_10028eef7;
  }
  else {
    FUN_10015aa50(&local_48,lVar5);
    if (local_48 == 0) {
      bVar2 = true;
      bVar1 = false;
      goto LAB_10028ee77;
    }
    FUN_10015aa80(&local_50,lVar5);
    bVar2 = true;
    if (local_50 == 0) {
      bVar1 = true;
      goto LAB_10028ee77;
    }
    bVar3 = 0;
  }
  _PrlHandle_Free();
LAB_10028eef7:
  if ((bVar2) && (local_48 != 0)) {
    _PrlHandle_Free();
  }
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  uVar4 = 0x3bfa;
  if (bVar3 != 0) {
    pvVar7 = operator_new(0x30);
    FUN_1002953b0(pvVar7,lVar5);
    CAbstractTask::execute();
    uVar4 = 0;
  }
  return uVar4;
}

