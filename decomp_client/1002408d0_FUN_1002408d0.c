
long FUN_1002408d0(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  CTaskGenericId *pCVar6;
  long *plVar7;
  void *pvVar8;
  char *pcVar9;
  _func_void_Node_ptr *p_Var10;
  _func_void_Node_ptr *local_88;
  QArrayData *local_80;
  CTaskGenericId local_78 [24];
  QArrayData *local_60;
  _func_void_Node_ptr *local_58;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  *param_2 = 0;
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001547d0(uVar3,param_3);
  if (lVar4 == 0) {
    pcVar9 = "Failed to unregister an invalid VM: cannot get server instance.";
LAB_100240bdb:
    FUN_100df99c0("","prl_client_app",0,pcVar9);
    return 0;
  }
  uVar3 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar3,param_3);
  if (lVar5 == 0) {
    pcVar9 = "Failed to unregister an invalid VM: cannot get vm instance.";
    goto LAB_100240bdb;
  }
  iVar2 = FUN_10018bce0(lVar5);
  if (iVar2 == 2) {
    pCVar6 = (CTaskGenericId *)CTaskManager::instance();
    FUN_100188480(&local_50,lVar5);
    FUN_100200da0(local_48,&local_50);
    plVar7 = (long *)CTaskManager::getTaskById(pCVar6);
    CTaskGenericId::~CTaskGenericId(local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10024099d;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10024099d:
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x78))(plVar7,0x80000275);
    }
    local_58 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    FUN_1002ad220(lVar5,&local_58);
    CAbstractTask::execute();
    if (*(int *)(local_58 + 0x10) == -1) goto LAB_100240b8c;
    p_Var10 = local_58;
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100240b8c;
      local_29 = 0;
    }
  }
  else {
    iVar2 = FUN_10018bce0(lVar5);
    if (iVar2 != 3) {
      lVar4 = FUN_10015eed0(lVar4,lVar5);
      if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x10), lVar5 != 0)) {
        _PrlHandle_AddRef(lVar5);
        _PrlHandle_Free(lVar5);
        *param_2 = 1;
        return lVar4;
      }
      pcVar9 = "Failed to unregister an invalid VM: cannot send request to server.";
      goto LAB_100240bdb;
    }
    if (DAT_1023109b0 == (void *)0x0) {
      pvVar8 = operator_new(0x20);
      FUN_100751470(pvVar8);
      DAT_102271388 = 1;
      DAT_1023109b0 = pvVar8;
    }
    pvVar8 = DAT_1023109b0;
    FUN_10018d830(&local_60,lVar5);
    FUN_100754330(pvVar8,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100240ac0;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100240ac0:
    pCVar6 = (CTaskGenericId *)CTaskManager::instance();
    FUN_100188480(&local_80,lVar5);
    FUN_100203000(local_78,&local_80);
    plVar7 = (long *)CTaskManager::getTaskById(pCVar6);
    CTaskGenericId::~CTaskGenericId(local_78);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100240b2b;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100240b2b:
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x78))(plVar7,0x80000275);
    }
    local_88 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    FUN_1002ad220(lVar5,&local_88);
    CAbstractTask::execute();
    if (*(int *)(local_88 + 0x10) == -1) goto LAB_100240b8c;
    p_Var10 = local_88;
    if (*(int *)(local_88 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_88 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100240b8c;
      local_29 = 0;
    }
  }
  QHashData::free_helper(p_Var10);
LAB_100240b8c:
  *param_2 = 1;
  return 0;
}

