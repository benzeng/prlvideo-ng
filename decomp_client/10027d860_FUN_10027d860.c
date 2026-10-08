
undefined8 FUN_10027d860(void)

{
  CTaskGenericId *pCVar1;
  long lVar2;
  undefined8 uVar3;
  CTaskGenericId local_30 [24];
  
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId(local_30,0x5f);
  lVar2 = CTaskManager::getTaskById(pCVar1);
  CTaskGenericId::~CTaskGenericId(local_30);
  uVar3 = 0x3bfa;
  if (lVar2 != 0) {
    FUN_100df99c0("","prl_client_app",0,"Application quit canceled - Bundle Initialization");
    uVar3 = 0x80000275;
  }
  return uVar3;
}

