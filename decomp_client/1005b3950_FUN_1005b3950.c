
void FUN_1005b3950(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  CTaskGenericId *pCVar6;
  void *pvVar7;
  Connection local_48 [8];
  CTaskGenericId local_40 [24];
  
  uVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar5 = FUN_1005b86c0(uVar4);
  if (lVar5 != 0) {
    pCVar6 = (CTaskGenericId *)CTaskManager::instance();
    FUN_100286270(local_40,param_2,*(undefined4 *)(param_2 + 8));
    pvVar7 = (void *)CTaskManager::getTaskById(pCVar6);
    CTaskGenericId::~CTaskGenericId(local_40);
    if ((pvVar7 == (void *)0x0) || (cVar2 = CAbstractTask::isFinished(), cVar2 != '\0')) {
      pvVar7 = operator_new(0x2a0);
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar4 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      uVar4 = FUN_1005b86c0(uVar4);
      uVar4 = FUN_10015a340(uVar4);
      FUN_100285460(pvVar7,param_2,uVar1,uVar4);
    }
    QObject::connect(local_48,pvVar7,"2taskFinished(PRL_RESULT)",param_1,
                     "1onDetectOsTaskFinished(PRL_RESULT)",0x80);
    QMetaObject::Connection::~Connection(local_48);
    iVar3 = CAbstractTask::state();
    if (iVar3 == 0) {
      CAbstractTask::execute();
    }
    return;
  }
  return;
}

