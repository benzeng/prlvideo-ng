
void FUN_100a28400(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,uint param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_e8 [8];
  void *local_e0;
  void *local_d8;
  string local_c0 [40];
  undefined1 local_98 [8];
  void *local_90;
  void *local_88;
  string local_70 [44];
  undefined4 local_44;
  undefined1 local_40 [8];
  long *local_38;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_3);
  if (lVar4 != 0) {
    plVar5 = operator_new(0x18);
    lVar1 = *param_2;
    if (lVar1 == 0) {
      *plVar5 = (long)&PTR_FUN_102280e68;
      plVar5[1] = 0;
    }
    else {
      _PrlHandle_AddRef(lVar1);
      *plVar5 = (long)&PTR_FUN_102280e68;
      plVar5[1] = lVar1;
      _PrlHandle_AddRef(lVar1);
    }
    *(int *)(plVar5 + 2) = param_5;
    *(uint *)((long)plVar5 + 0x14) = param_6;
    plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      plVar6[2] = (long)plVar5;
      *plVar6 = (long)&PTR_FUN_10226ca80;
    }
    if (lVar1 != 0) {
      _PrlHandle_Free(lVar1);
    }
    uVar3 = FUN_10018c280(lVar4);
    uVar3 = FUN_100319c30(uVar3);
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = plVar6;
    FUN_100a23d60(local_40,param_4);
    iVar2 = FUN_10032fa90(uVar3,&local_38,local_40);
    FUN_100039a80(local_40);
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (iVar2 == 0) {
      return;
    }
  }
  if (param_5 == 6) {
    local_44 = 1;
    lVar4 = *param_2;
    FUN_100a332c0(local_98,6,param_6 & 0xffffffdf,1,&local_44,4);
    FUN_100a239c0(lVar4,local_98);
    std::string::~string(local_70);
    if (local_90 == (void *)0x0) {
      return;
    }
    if (local_88 != local_90) {
      local_88 = local_90;
    }
  }
  else {
    lVar4 = *param_2;
    FUN_100a332c0(local_e8,param_5,param_6,0,0,0);
    FUN_100a239c0(lVar4,local_e8);
    std::string::~string(local_c0);
    if (local_e0 == (void *)0x0) {
      return;
    }
    local_90 = local_e0;
    if (local_d8 != local_e0) {
      local_d8 = local_e0;
    }
  }
  operator_delete(local_90);
  return;
}

