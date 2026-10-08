
void FUN_1005de9d0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  QString QVar5;
  void *pvVar6;
  undefined8 uVar7;
  long local_80;
  long local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar4 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
  if (lVar4 == 0) {
    return;
  }
  FUN_10015a320(lVar4);
  QVar5.field0_0x0 = (QTypedArrayData<unsigned_short> *)CDispUser::getUserWorkspace();
  FUN_1005de7d0(&local_38,param_1);
  CDispUserWorkspace::setDefaultVmFolder(QVar5);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005dea58;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005dea58:
  FUN_10015aa50(&local_40,lVar4);
  if (local_40 == 0) {
    return;
  }
  FUN_10015aa50(&local_48,lVar4);
  lVar1 = local_48;
  bVar2 = (bool)FUN_10015a320(lVar4);
  CBaseNode::toString(SUB81(&local_58,0),bVar2);
  QString::toUtf8();
  iVar3 = _PrlUsrCfg_FromString(lVar1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005deae7;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1005deae7:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005deb17;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005deb17:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (-1 < iVar3) {
    local_60 = (Data *)PTR_shared_null_1021e15e8;
    local_64 = 0;
    FUN_100129840(&local_60,&local_64);
    local_68 = 2;
    FUN_100129840(&local_60,&local_68);
    local_6c = 8;
    FUN_100129840(&local_60,&local_6c);
    pvVar6 = operator_new(0x50);
    FUN_10015aa50(&local_78,lVar4);
    FUN_10015aa80(&local_80,lVar4);
    uVar7 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
    FUN_1001f41a0(pvVar6,&local_78,&local_80,&local_60,uVar7,1);
    if (local_80 != 0) {
      _PrlHandle_Free();
    }
    if (local_78 != 0) {
      _PrlHandle_Free();
    }
    CAbstractTask::execute();
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005dec12;
      }
      QListData::dispose(local_60);
    }
  }
LAB_1005dec12:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return;
}

