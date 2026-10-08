
void FUN_10031b320(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_48;
  Data *local_40;
  undefined4 local_34;
  Data *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return;
  }
  uVar2 = FUN_10018c2b0();
  cVar1 = FUN_100112cc0(uVar2);
  if (cVar1 == '\0') {
    return;
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  local_34 = 0;
  FUN_100129840(&local_30,&local_34);
  pvVar3 = operator_new(0x90);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  local_40 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_40);
      lVar4 = (long)*(int *)(local_40 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_40 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_40 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar4 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100203950(pvVar3,uVar2,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10031b486;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10031b486:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10031b4ac;
    }
    QListData::dispose(local_40);
  }
LAB_10031b4ac:
  CAbstractTask::execute();
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

