
undefined8 FUN_1007c6ef0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  uVar1 = FUN_10018c280(*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_100319bf0(uVar1);
  local_20 = (QArrayData *)QString::fromAscii_helper("parallels.VmExec.guest.cross",0x1c);
  uVar1 = FUN_10032d8b0(uVar1,&local_20);
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

