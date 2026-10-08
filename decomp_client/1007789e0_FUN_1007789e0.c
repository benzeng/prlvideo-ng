
void FUN_1007789e0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  CTaskGenericId *pCVar4;
  void *pvVar5;
  Connection local_40 [8];
  undefined **local_38 [3];
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 != 0) {
    uVar2 = FUN_10016f500(lVar3);
    cVar1 = FUN_10061b500(uVar2,2);
    if (cVar1 == '\0') {
      uVar2 = FUN_10016f500(lVar3);
      cVar1 = FUN_10061c2b0(uVar2,0xa0);
      if (((cVar1 == '\0') && (cVar1 = MessageUtils::isMessageHidden(0x3c76), cVar1 == '\0')) &&
         (cVar1 = FUN_100d80630(1), cVar1 == '\0')) {
        pCVar4 = (CTaskGenericId *)CTaskManager::instance();
        CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_38,0x87);
        local_38[0] = &PTR_FUN_102272e00;
        pvVar5 = (void *)CTaskManager::getTaskById(pCVar4);
        CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_38);
        if ((pvVar5 == (void *)0x0) || (cVar1 = CAbstractTask::isFinished(), cVar1 != '\0')) {
          pvVar5 = operator_new(0x28);
          FUN_1002c53f0(pvVar5);
        }
        *(undefined1 *)(param_1 + 0x19) = 0;
        QObject::connect(local_40,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                         "1onDataRequested(PRL_RESULT)",0x80);
        QMetaObject::Connection::~Connection(local_40);
        CAbstractTask::execute();
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

