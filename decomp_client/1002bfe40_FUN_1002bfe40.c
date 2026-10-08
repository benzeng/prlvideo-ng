
undefined8 FUN_1002bfe40(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  CHostHardwareInfoBase *pCVar3;
  long lVar4;
  CHostHardwareInfoBase *pCVar5;
  undefined8 *puVar6;
  byte bVar7;
  long local_200;
  undefined *local_1f8 [40];
  undefined8 local_b8 [13];
  undefined4 local_50;
  int *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  bVar7 = 0;
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar2 = operator_new(0x2a0);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (((*(long *)(param_1 + 0xa0) == 0) || (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0)) ||
     (*(long *)(param_1 + 0xa8) == 0)) {
    CHostHardwareInfo::CHostHardwareInfo((CHostHardwareInfo *)local_1f8);
  }
  else {
    pCVar3 = (CHostHardwareInfoBase *)FUN_10015a340();
    CHostHardwareInfoBase::CHostHardwareInfoBase((CHostHardwareInfoBase *)local_1f8,pCVar3);
    local_1f8[0] = PTR_vtable_1021e17c8 + 0x10;
    pCVar5 = pCVar3 + 0x140;
    puVar6 = local_b8;
    for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined8 *)pCVar5;
      pCVar5 = pCVar5 + (ulong)bVar7 * -0x10 + 8;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
    local_50 = *(undefined4 *)(pCVar3 + 0x1a8);
    local_48 = *(int **)(pCVar3 + 0x1b0);
    if (1 < *local_48 + 1U) {
      LOCK();
      *local_48 = *local_48 + 1;
      local_29 = *local_48 != 0;
      UNLOCK();
    }
    local_38 = *(undefined4 *)(pCVar3 + 0x1c0);
    local_40 = *(undefined8 *)(pCVar3 + 0x1b8);
  }
  FUN_100285460(pvVar2,param_1 + 0x18,uVar1,local_1f8);
  CHostHardwareInfo::~CHostHardwareInfo((CHostHardwareInfo *)local_1f8);
  QObject::connect(&local_200,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDetectOsFinished(PRL_RESULT)",0);
  if (local_200 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_200);
  CAbstractTask::execute();
  return 0;
}

