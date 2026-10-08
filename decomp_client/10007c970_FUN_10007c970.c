
void FUN_10007c970(long param_1,undefined8 param_2)

{
  QSize QVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  CTaskGenericId *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  CTaskGenericId local_98 [24];
  QArrayData *local_80;
  CTaskGenericId local_78 [24];
  undefined **local_60 [3];
  long local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  lVar6 = FUN_10008b9a0(param_2);
  if (lVar6 != 0) {
    QObject::connect(&local_48,param_2,"2promisedDataResolved()",param_1,"1onPromisedItemResolved()"
                     ,0);
    if (local_48 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    return;
  }
  pCVar7 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_60,0x53);
  local_60[0] = &PTR_FUN_10226c710;
  cVar3 = CTaskManager::isTaskRunning(pCVar7);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_60);
  if (cVar3 != '\0') {
    return;
  }
  uVar8 = FUN_10007c850(param_1);
  local_38 = uVar8;
  FUN_10007c720(param_1,&local_38);
  QVar1 = (*(QSize **)(param_1 + 0x10))[5];
  local_40 = (*(int *)((long)QVar1 + 0x1c) + 1) - *(int *)((long)QVar1 + 0x14);
  local_3c = (undefined4)((ulong)uVar8 >> 0x20);
  QWidget::resize(*(QSize **)(param_1 + 0x10));
  lVar6 = FUN_10008b970(param_2);
  if (lVar6 == 0) {
    bVar4 = 0;
  }
  else {
    pCVar7 = (CTaskGenericId *)CTaskManager::instance();
    FUN_10008ba40(&local_80,param_2);
    FUN_10007eec0(local_78,&local_80);
    bVar4 = CTaskManager::isTaskRunning(pCVar7);
    CTaskGenericId::~CTaskGenericId(local_78);
    bVar4 = bVar4 ^ 1;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        local_38 = CONCAT71(local_38._1_7_,*(int *)local_80 != 0);
        if (*(int *)local_80 != 0) goto LAB_10007cad3;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_10007cad3:
  lVar6 = FUN_10008b940(param_2);
  if (lVar6 == 0) {
    cVar3 = '\0';
  }
  else {
    uVar8 = FUN_10008b940(param_2);
    iVar5 = FUN_10018bce0(uVar8);
    if (iVar5 == 3) {
      pCVar7 = (CTaskGenericId *)CTaskManager::instance();
      CTaskGenericId::CTaskGenericId(local_98,0x24);
      cVar3 = CTaskManager::isTaskRunning(pCVar7);
      CTaskGenericId::~CTaskGenericId(local_98);
    }
    else {
      cVar3 = '\0';
    }
  }
  puVar2 = PTR__objc_msgSend_1021e1c68;
  if (bVar4 == 0 && cVar3 == '\0') {
    uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
    uVar9 = FUN_10008bad0(param_2);
    (*(code *)puVar2)(uVar8,PTR_s_selectItem__102269f08,uVar9);
  }
  return;
}

