
undefined1 FUN_100777980(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  CTaskGenericId *pCVar4;
  undefined **local_30 [3];
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    pCVar4 = (CTaskGenericId *)CTaskManager::instance();
    CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_30,0xac);
    local_30[0] = &PTR_FUN_1022752c0;
    uVar1 = CTaskManager::isTaskRunning(pCVar4);
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_30);
  }
  return uVar1;
}

