
undefined8
FUN_10015fe60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined4 param_6)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
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
  pQVar2 = *(QArrayData **)(param_3 + 0x38);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  uVar3 = _PrlSrv_RemoveVmBackup
                    (lVar1,pQVar4,pQVar5,local_50 + *(long *)(local_50 + 0x10),0,"",param_6,0,1);
  uVar3 = FUN_10015c580(param_1,uVar3,0x848,param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015ffd2;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10015ffd2:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100160002;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100160002:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100160032;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100160032:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100160062;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100160062:
  if (lVar1 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

