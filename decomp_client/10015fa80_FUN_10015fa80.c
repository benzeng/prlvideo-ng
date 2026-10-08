
undefined8
FUN_10015fa80(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_4 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar4 = local_40 + *(long *)(local_40 + 0x10);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  pQVar5 = local_48 + *(long *)(local_48 + 0x10);
  local_58 = *(QArrayData **)(param_3 + 0x38);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  pQVar3 = local_50 + *(long *)(local_50 + 0x10);
  QString::toUtf8();
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  uVar2 = _PrlSrv_RestoreVmBackup
                    (lVar1,pQVar4,pQVar5,pQVar3,0,"",0,local_60 + *(long *)(local_60 + 0x10),param_7
                     ,0,1);
  uVar2 = FUN_10015c580(param_1,uVar2,0x847,param_2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015fc43;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10015fc43:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015fc73;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10015fc73:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015fca3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10015fca3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015fcd3;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10015fcd3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015fd07;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10015fd07:
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  return uVar2;
}

