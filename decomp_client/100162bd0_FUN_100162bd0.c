
void FUN_100162bd0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long local_40;
  QArrayData *local_38;
  long local_30;
  long local_28;
  undefined1 local_19;
  
  local_30 = *param_2;
  if (local_30 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getResultHandle(&local_28,&local_30);
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  if (local_28 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: result handle is invalid.");
  }
  else {
    local_40 = local_28;
    _PrlHandle_AddRef();
    SdkUtils::getParamXML(&local_38,&local_40,0);
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
    FUN_100800d90(param_1,param_3);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100162c97;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100162c97:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}

