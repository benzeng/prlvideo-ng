
undefined1 FUN_10076dab0(undefined8 param_1)

{
  undefined1 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("acronis.online.store",0x14);
  uVar1 = FUN_10076d5e0(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

