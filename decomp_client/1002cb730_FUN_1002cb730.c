
undefined8 FUN_1002cb730(undefined8 param_1)

{
  undefined8 uVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100df99c0("","prl_client_app",0,"Sign out");
  uVar1 = FUN_1002c6aa0(param_1);
  local_28 = (QArrayData *)QString::fromAscii_helper("{2AADB32F-332D-4B40-BE2E-0F69C55AE311}",0x26);
  local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  uVar1 = FUN_100175d50(uVar1,&local_28,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002cb7d2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002cb7d2:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}

