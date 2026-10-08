
undefined8 *
FUN_100301270(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,char param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_54 [4];
  QArrayData *local_50;
  long local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48 = *param_3;
  if (local_48 != 0) {
    _PrlHandle_AddRef();
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("Details",7);
  SdkUtils::getParamStringValue(&local_40,&local_48,&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003012fc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003012fc:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if ((*(int *)(local_40 + 4) == 0) && (param_5 == '\0')) {
    *param_1 = puVar1;
  }
  else {
    QString::append(&local_38);
    iVar2 = _PrlEvent_GetErrCode(*param_3,local_54);
    if (iVar2 < 0) {
      FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,
                    "(!)Error: can\'t get error code from event handle. RC: [%.8X]",iVar2);
    }
    *param_1 = local_38.field0_0x0;
    if (1 < *(int *)local_38.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003013a6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003013a6:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

