
undefined4 FUN_1005802c0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  QCryptographicHash::hash(&local_20,param_2,1);
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1,local_20 + *(long *)(local_20 + 0x10));
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
    QArrayData::deallocate(local_20,1,8);
  }
  return uVar1;
}

