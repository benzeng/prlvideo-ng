
undefined8 FUN_100176140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  QString::toUtf8();
  uVar2 = _PrlSrv_SendClientStatistics(lVar1,local_30 + *(long *)(local_30 + 0x10),0);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar2 = FUN_10015c580(param_1,uVar2,0x854,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001761d7;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001761d7:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100176207;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100176207:
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  return uVar2;
}

