
undefined8 * FUN_1002e56c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  if (DAT_101116b58 == 2) {
    puVar1 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      local_30 = (QArrayData *)*param_1;
      if (1 < *(int *)local_30 + 1U) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + 1;
        local_23 = *(int *)local_30 != 0;
        UNLOCK();
      }
      FUN_100256950(puVar1,&local_30);
      puVar2 = puVar1;
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return puVar1;
          }
          local_22 = 0;
        }
        QArrayData::deallocate(local_30,2,8);
      }
    }
  }
  else if (DAT_101116b58 == 1) {
    puVar1 = operator_new(0x30,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1003df800(puVar1,param_1);
      puVar2 = puVar1;
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
    if (DAT_101116b58 == 0) {
      puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      puVar2 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_100bb4978;
        puVar1[2] = 0;
        puVar1[1] = 0;
        puVar2 = puVar1;
      }
    }
  }
  return puVar2;
}

