
undefined8 FUN_100d970c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  uVar1 = FUN_100daf0b0(uVar1,param_1,param_2,&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d97145;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d97145:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar1;
}

