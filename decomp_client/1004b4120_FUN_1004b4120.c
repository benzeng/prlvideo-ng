
long * FUN_1004b4120(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_28;
  Data *local_20;
  undefined1 local_11;
  
  local_20 = (Data *)PTR_shared_null_1021e15e8;
  local_28 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x38);
  FUN_100359270(&local_20,&local_28);
  *param_1 = (long)local_20;
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 == 0) {
      QListData::detach((int)param_1);
      lVar1 = *param_1;
      lVar2 = (long)*(int *)(lVar1 + 8);
      if ((local_20 + (long)*(int *)(local_20 + 8) * 8 != (Data *)(lVar1 + lVar2 * 8)) &&
         (lVar3 = *(int *)(lVar1 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(lVar1 + 0xc))) {
        _memcpy((void *)(lVar1 + 0x10 + lVar2 * 8),
                local_20 + (long)*(int *)(local_20 + 8) * 8 + 0x10,lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QListData::dispose(local_20);
  }
  return param_1;
}

