
void FUN_100162a50(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  long local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  local_48 = *param_2;
  if (local_48 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getResultHandle(&local_40,&local_48);
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (local_40 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: result handle is invalid.");
  }
  else {
    local_58 = local_40;
    _PrlHandle_AddRef();
    SdkUtils::getParamXML(&local_50,&local_58,0);
    if (local_58 != 0) {
      _PrlHandle_Free();
    }
    FUN_100800d10(param_1,param_3,&local_50,param_5,param_4,param_6);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100162b33;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100162b33:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return;
}

