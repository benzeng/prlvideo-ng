
void FUN_10031ae90(long param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_48;
  Data *local_40;
  int local_34;
  Data *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return;
  }
  iVar1 = FUN_10018bce0();
  if (iVar1 != 2) {
    return;
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  local_34 = (param_2 & 0xff) * 2;
  FUN_100129840(&local_30,&local_34);
  pvVar2 = operator_new(0xb0);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  local_40 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_40);
      lVar3 = (long)*(int *)(local_40 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_40 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar3 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar4 * 8);
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
  FUN_1001fc020(pvVar2,uVar5,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10031aff4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10031aff4:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10031b01a;
    }
    QListData::dispose(local_40);
  }
LAB_10031b01a:
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

