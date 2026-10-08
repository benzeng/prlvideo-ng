
undefined8 * FUN_100a08c00(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined4 local_24;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  *param_3 = 1;
  local_20 = (QArrayData *)*param_2;
  if ((local_20 == (QArrayData *)PTR_shared_null_1021e1288) && (*(int *)(local_20 + 4) == 0)) {
    *(undefined4 *)(param_1 + 1) = 0x80000000;
    *param_1 = 0;
  }
  else {
    if (1 < *(int *)local_20 + 1U) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
    }
    local_24 = 0;
    FUN_100a08ce0(param_1,&local_20,&local_24,param_3);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return param_1;
        }
        local_13 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return param_1;
}

