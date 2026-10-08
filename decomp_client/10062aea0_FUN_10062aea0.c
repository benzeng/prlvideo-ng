
undefined8 FUN_10062aea0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_100df99c0("","prl_client_app",0,"Get AppStore Receipt status");
  uVar1 = FUN_1002c6aa0(param_1);
  local_28 = (QArrayData *)QString::fromAscii_helper("{B34520D7-AD7B-478E-A928-FEB5DF052DE2}",0x26);
  uVar1 = FUN_100175d50(uVar1,&local_28,param_1 + 0x48,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}

