
void FUN_1005a5f70(long param_1,undefined1 param_2)

{
  QObject *pQVar1;
  int *piVar2;
  char cVar3;
  CTaskGenericId *pCVar4;
  void *pvVar5;
  int *piVar6;
  undefined8 uVar7;
  QObject *pQVar8;
  long local_d0;
  int *local_c8;
  QObject *pQStack_c0;
  QTypedArrayData<unsigned_short> *local_b8;
  int *local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [16];
  QString local_90;
  int *local_88;
  QObject *pQStack_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_64;
  undefined *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_10015aab0(&local_50,uVar7);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100291a00(local_48,&local_50,&local_58,0);
  cVar3 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a603e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005a603e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a606e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005a606e:
  if (cVar3 != '\0') {
    return;
  }
  local_88 = (int *)0x0;
  pQStack_80 = (QObject *)0x0;
  local_78._8_4_ = (int)PTR_shared_null_1021e1288;
  local_78._0_8_ = PTR_shared_null_1021e1288;
  local_78._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_60 = PTR_shared_null_1021e15e8;
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
  }
  local_64 = param_2;
  FUN_10015aab0(&local_90,uVar7);
  QString::operator=((QString *)local_78,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_29 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a610a;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1005a610a:
  local_68 = 0;
  pQVar1 = *(QObject **)(*(long *)(param_1 + 8) + 0x10);
  piVar6 = (int *)0x0;
  pQVar8 = (QObject *)0x0;
  if (pQVar1 != (QObject *)0x0) {
    piVar6 = (int *)0x0;
    pQVar8 = (QObject *)0x0;
    if ((*(byte *)(*(long *)(pQVar1 + 8) + 0x20) & 1) != 0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
      pQVar8 = pQVar1;
    }
  }
  piVar2 = local_88;
  pQVar1 = pQStack_80;
  if (local_88 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_29 = *piVar6 != 0;
      UNLOCK();
    }
    piVar2 = piVar6;
    pQVar1 = pQVar8;
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_29 = *local_88 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
  }
  pQStack_80 = pQVar1;
  local_88 = piVar2;
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_29 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar6);
    }
  }
  pvVar5 = operator_new(0x68);
  local_c8 = local_88;
  pQStack_c0 = pQStack_80;
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + 1;
    local_29 = *local_88 != 0;
    UNLOCK();
  }
  local_b8 = (QTypedArrayData<unsigned_short> *)local_78._0_8_;
  if (1 < *(int *)local_78._0_8_ + 1U) {
    LOCK();
    *(int *)local_78._0_8_ = *(int *)local_78._0_8_ + 1;
    local_29 = *(int *)local_78._0_8_ != 0;
    UNLOCK();
  }
  local_b0 = (int *)local_78._8_8_;
  if (1 < *(int *)local_78._8_8_ + 1U) {
    LOCK();
    *(int *)local_78._8_8_ = *(int *)local_78._8_8_ + 1;
    local_29 = *(int *)local_78._8_8_ != 0;
    UNLOCK();
  }
  local_a4 = local_64;
  local_a8 = local_68;
  FUN_100036740(local_a0,&local_60);
  FUN_100291650(pvVar5,&local_c8);
  FUN_100291b30(&local_c8);
  CAbstractTask::execute();
  QObject::connect(&local_d0,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                   "1onChangeLockStateTaskFinished(PRL_RESULT)",0);
  if (local_d0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_d0);
  FUN_100291b30(&local_88);
  return;
}

