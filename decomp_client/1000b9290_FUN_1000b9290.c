
undefined1 FUN_1000b9290(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  uVar2 = (**(code **)(*param_1 + 0x68))();
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_1000e91d0(uVar2,&local_20,param_2);
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
    QArrayData::deallocate(local_20,4,8);
  }
  return uVar1;
}

