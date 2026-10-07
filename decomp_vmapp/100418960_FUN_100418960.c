
undefined8 FUN_100418960(long param_1)

{
  void *pvVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pvVar1 = *(void **)(param_1 + 0x640);
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (*(int *)((long)pvVar1 + 0x24) != 0) {
    QByteArray::resize((int)&local_28);
    if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f)
      ;
    }
    FUN_10041fb90((long)pvVar1 + 0xa0,local_28 + *(long *)(local_28 + 0x10),
                  *(undefined4 *)((long)pvVar1 + 0x24));
    pvVar1 = *(void **)(param_1 + 0x640);
  }
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  FUN_100419170(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return 1;
}

