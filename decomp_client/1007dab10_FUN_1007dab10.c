
void FUN_1007dab10(long param_1)

{
  Node *pNVar1;
  CTaskGenericId *pCVar2;
  long lVar3;
  void *pvVar4;
  undefined4 *puVar5;
  Node *pNVar6;
  int iVar7;
  long *plVar8;
  Connection local_70 [8];
  CTaskGenericId local_68 [24];
  code *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  pNVar1 = *(Node **)(param_1 + 0x18);
  iVar7 = *(int *)(pNVar1 + 0x20);
  if (iVar7 != 0) {
    plVar8 = *(long **)(pNVar1 + 8);
    do {
      pNVar6 = (Node *)*plVar8;
      if (pNVar6 != pNVar1) {
        do {
          pCVar2 = (CTaskGenericId *)CTaskManager::instance();
          FUN_10029f110(local_68,pNVar6 + 0x10);
          lVar3 = CTaskManager::getTaskById(pCVar2);
          CTaskGenericId::~CTaskGenericId(local_68);
          if (lVar3 == 0) {
            pvVar4 = operator_new(0x48);
            FUN_10029e150(pvVar4,pNVar6 + 0x18,pNVar6 + 0x10);
            local_40 = PTR_taskFinished_1021e1300;
            local_38 = 0;
            local_50 = FUN_1007dadd0;
            local_48 = 0;
            puVar5 = operator_new(0x20);
            *puVar5 = 1;
            *(code **)(puVar5 + 2) = FUN_1007db880;
            *(code **)(puVar5 + 4) = FUN_1007dadd0;
            *(undefined8 *)(puVar5 + 6) = 0;
            QObject::connectImpl
                      (local_70,pvVar4,&local_40,param_1,&local_50,puVar5,0,0,
                       PTR_staticMetaObject_1021e1308);
            QMetaObject::Connection::~Connection(local_70);
            CAbstractTask::execute();
          }
          pNVar6 = (Node *)QHashData::nextNode(pNVar6);
        } while (pNVar6 != *(Node **)(param_1 + 0x18));
        return;
      }
      iVar7 = iVar7 + -1;
      plVar8 = plVar8 + 1;
    } while (iVar7 != 0);
  }
  return;
}

