
void FUN_1004c0b40(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  lVar2 = FUN_10044e460();
  if (lVar2 == 0) {
    pcVar7 = "(!)Error: Vm instance is null.";
  }
  else {
    lVar2 = FUN_10044e580(param_1);
    if (lVar2 != 0) {
      pCVar3 = (CTaskGenericId *)CTaskManager::instance();
      uVar4 = FUN_10044e580(param_1);
      FUN_10015aab0(&local_48,uVar4);
      FUN_1002925a0(local_40,&local_48);
      cVar1 = CTaskManager::isTaskRunning(pCVar3);
      CTaskGenericId::~CTaskGenericId(local_40);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1004c0be2;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1004c0be2:
      if (cVar1 == '\0') {
        pvVar5 = operator_new(0x58);
        uVar4 = FUN_10044e580(param_1);
        uVar6 = FUN_10044e460(param_1);
        FUN_100188480(&local_50,uVar6);
        FUN_100291eb0(pvVar5,uVar4,0,1,4,&local_50);
        CAbstractTask::execute();
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            UNLOCK();
            if (*(int *)local_50 != 0) {
              return;
            }
            local_21 = 0;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
      return;
    }
    pcVar7 = "(!)Error: Server instance is null.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar7);
  return;
}

