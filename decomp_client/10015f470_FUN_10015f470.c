
undefined8
FUN_10015f470(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  FUN_10018c250(&local_40);
  lVar2 = local_40;
  lVar1 = *(long *)(param_3 + 0x80);
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  uVar3 = _PrlVm_Migrate(lVar2,lVar1,local_48 + *(long *)(local_48 + 0x10),param_5,0,1);
  FUN_100188480(&local_50,param_2);
  uVar3 = FUN_10015c580(param_1,uVar3,0x7ec,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015f564;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10015f564:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015f598;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10015f598:
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

