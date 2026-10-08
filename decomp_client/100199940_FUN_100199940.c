
undefined8 FUN_100199940(undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  bVar3 = param_3 == '\0';
  if (bVar3) {
    FUN_10018c250(&local_50,param_1);
    lVar1 = local_50;
    QString::toUtf8();
    uVar2 = _PrlVm_RemoveProtection(lVar1,local_58 + *(long *)(local_58 + 0x10),0);
  }
  else {
    FUN_10018c250(&local_40,param_1);
    lVar1 = local_40;
    QString::toUtf8();
    uVar2 = _PrlVm_SetProtection(lVar1,local_48 + *(long *)(local_48 + 0x10),0);
  }
  local_60 = 0x80000000;
  local_68.field7 = 0;
  uVar2 = FUN_100191960(param_1,uVar2,param_3 == '\0' | 0x880,&local_68);
  QVariant::~QVariant((QVariant *)&local_68);
  if (bVar3) {
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100199a44;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100199a44:
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
  }
  if (bVar3) {
    return uVar2;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100199a87;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100199a87:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar2;
}

