
void FUN_1005a5aa0(long param_1,int param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  Data *local_30;
  undefined1 local_21;
  
  lVar1 = QObject::sender();
  iVar4 = (int)param_1;
  if ((lVar1 != 0) &&
     (lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,&PTR_vtable_1022000f0,0), lVar1 != 0)) {
    *(bool *)(param_1 + 0x48) = 1 < *(uint *)(lVar1 + 0x48);
    if (-1 < param_2) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x40);
      }
      FUN_1001605d0(uVar3);
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x40);
      }
      FUN_100160690(uVar3);
      CMappingModel::endSubmit(iVar4);
      return;
    }
    CMappingModel::endSubmit(iVar4);
    local_30 = (Data *)PTR_shared_null_1021e15e8;
    local_34 = 8;
    FUN_100129840(&local_30,&local_34);
    local_38 = 9;
    FUN_100129840(&local_30,&local_38);
    pvVar2 = operator_new(0x50);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
    }
    FUN_10015aa50(&local_40,uVar3);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
    }
    FUN_10015aa80(&local_48,uVar3);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
    }
    FUN_1001f41a0(pvVar2,&local_40,&local_48,&local_30,uVar3,1);
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
    QObject::connect(&local_50,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                     "1onCommitTaskFinished(PRL_RESULT)",0);
    if (local_50 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
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
  CMappingModel::endSubmit(iVar4);
  FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get commit task");
  return;
}

