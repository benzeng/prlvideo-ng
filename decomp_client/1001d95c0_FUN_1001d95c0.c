
void FUN_1001d95c0(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  CTaskGenericId *pCVar6;
  void *pvVar7;
  QArrayData *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  int *local_58;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  uVar4 = FUN_1001d50a0();
  cVar1 = FUN_1001d5140(uVar4,0);
  if (cVar1 != '\0') {
    return;
  }
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) {
    return;
  }
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  FUN_10015aab0(&local_50,lVar5);
  FUN_1001e3540(local_48,&local_50);
  cVar1 = CTaskManager::isTaskRunning(pCVar6);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001d966f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001d966f:
  if (cVar1 != '\0') {
    return;
  }
  iVar2 = FUN_10015d3a0(lVar5);
  uVar4 = FUN_100794960();
  iVar3 = FUN_100796670(uVar4,lVar5);
  if ((iVar3 + iVar2 != 0) || (cVar1 = FUN_1001776f0(lVar5), cVar1 != '\0')) {
    FUN_1001d9980(*(undefined8 *)(param_1 + 0x10),0);
    return;
  }
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_58);
  iVar2 = local_58[3];
  iVar3 = local_58[2];
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_29 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001d96ff;
    }
    FUN_100034010(&local_58,local_58);
  }
LAB_1001d96ff:
  if (iVar2 != iVar3) {
    return;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[AppController]","prl_client_app",3,"VM list is empty. Open New VM assistant");
  }
  pvVar7 = operator_new(0x100);
  local_d0 = (QArrayData *)PTR_shared_null_1021e1288;
  local_c8 = 0;
  local_c0 = 0xff;
  local_bc = 0;
  local_b8 = 0;
  local_b0._8_4_ = (int)PTR_shared_null_1021e1288;
  local_b0._0_8_ = PTR_shared_null_1021e1288;
  local_b0._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_a0._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_a0._0_8_ = PTR_shared_null_1021e15e8;
  local_a0._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_90 = 0;
  local_88 = PTR_shared_null_1021e1288;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_10025b010(pvVar7,lVar5,0,&local_d0);
  FUN_10005e410(&local_c0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001d9822;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1001d9822:
  CAbstractTask::execute();
  return;
}

