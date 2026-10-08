
undefined1 FUN_100d79570(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("CFBundleHelpBookName",0x14);
  uVar1 = FUN_100d79240(param_1,&local_28,param_2);
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

