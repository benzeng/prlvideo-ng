
undefined8 FUN_100175d50(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar3 = local_40 + *(long *)(local_40 + 0x10);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  uVar2 = _PrlSrv_StoreValueByKey(lVar1,pQVar3,local_48 + *(long *)(local_48 + 0x10),param_4);
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar2 = FUN_10015c580(param_1,uVar2,0x852,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100175e52;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100175e52:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100175e82;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100175e82:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100175eb2;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100175eb2:
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  return uVar2;
}

