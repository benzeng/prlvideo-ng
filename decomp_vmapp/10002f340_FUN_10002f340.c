
uint FUN_10002f340(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar1 = 0;
  if (((param_1 != 0) &&
      (plVar2 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                        0xfffffffffffffffe), uVar1 = 0, plVar2 != (long *)0x0)) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2), plVar2 != (long *)0x0)) {
    *param_2 = plVar2;
    local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
    uVar1 = (**(code **)(*plVar2 + 0x140))(plVar2,&DAT_1011b6230,&local_28);
    uVar1 = uVar1 >> 0x1f ^ 1;
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
  }
  return uVar1;
}

