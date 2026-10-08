
undefined8 FUN_1002f2450(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QString local_20;
  int local_18;
  undefined1 local_12;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = MacUtils::requestAuthorization
                    ((AuthorizationOpaqueRef **)(param_1 + 0x20),true,&local_20,&local_18);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_12 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_1002f24ac;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_1002f24ac:
  uVar2 = 0;
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to request authorization, %d",local_18);
    uVar2 = 0x80000009;
  }
  return uVar2;
}

