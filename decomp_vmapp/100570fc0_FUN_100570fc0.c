
undefined4 FUN_100570fc0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_1[0x225] == param_1[0x226]) {
    FUN_1008e3970("","vdisk",0,"Disk was not opened correctly!");
    uVar1 = 0x80019016;
  }
  else {
    local_20 = (QArrayData *)PTR_shared_null_100ba20d0;
    uVar1 = (**(code **)(*param_1 + 0x2e8))(param_1,param_2,&local_20,param_3,param_4);
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
  }
  return uVar1;
}

