
void FUN_1007d99c0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long local_60;
  long local_58;
  undefined4 local_50;
  undefined4 local_4c;
  Data *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_10015a330();
  bVar2 = (bool)CDispCommonPreferences::getWorkspacePreferences();
  CDispWorkspacePreferences::setEnableSendStatisticReport(bVar2);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10015aa80(&local_30,uVar5);
  lVar1 = local_30;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  bVar2 = (bool)FUN_10015a330(uVar5);
  CBaseNode::toString(SUB81(&local_40,0),bVar2);
  QString::toUtf8();
  iVar3 = _PrlDispCfg_FromString(lVar1,local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007d9aae;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1007d9aae:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007d9ade;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007d9ade:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if (iVar3 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to update the server preferences object with new data");
  }
  else {
    local_48 = (Data *)PTR_shared_null_1021e15e8;
    local_4c = 1;
    FUN_100129840(&local_48,&local_4c);
    local_50 = 3;
    FUN_100129840(&local_48,&local_50);
    pvVar4 = operator_new(0x50);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_10015aa50(&local_58,uVar5);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_10015aa80(&local_60,uVar5);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1001f41a0(pvVar4,&local_58,&local_60,&local_48,uVar5,0);
    if (local_60 != 0) {
      _PrlHandle_Free();
    }
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
    CAbstractTask::execute();
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_21 = 0;
      }
      QListData::dispose(local_48);
    }
  }
  return;
}

