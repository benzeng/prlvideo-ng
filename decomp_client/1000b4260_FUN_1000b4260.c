
void FUN_1000b4260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  QArrayData *local_40;
  undefined4 local_34;
  QArrayData *local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  undefined1 local_11;
  
  local_20 = param_2;
  lVar1 = FUN_1000a9690(param_3);
  if (lVar1 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to get client for vmUuid=\"%s\"",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 == -1) {
      return;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_11 = 0;
    }
  }
  else {
    local_34 = 0x7e;
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1000b7b70(lVar1,&local_20,&local_34,&local_40,local_24);
    if (*(int *)local_40 == -1) {
      return;
    }
    local_30 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_11 = 0;
    }
  }
  QArrayData::deallocate(local_30,1,8);
  return;
}

