
undefined8 FUN_1002d19c0(undefined8 param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  FUN_100df99c0("","prl_client_app",0,"Resend account confirmation.");
  uVar1 = FUN_1002c6aa0(param_1);
  local_20 = (QArrayData *)QString::fromAscii_helper("{E66F9D78-AD7E-4912-AFD1-17BC8391082B}",0x26);
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_100175d50(uVar1,&local_20,&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002d1a5a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1002d1a5a:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

