
long * FUN_1002c2480(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Data *local_20;
  undefined1 local_11;
  
  local_20 = (Data *)PTR_shared_null_1021e15e8;
  local_24 = 2;
  FUN_100129840(&local_20,&local_24);
  local_28 = 3;
  FUN_100129840(&local_20,&local_28);
  local_2c = 4;
  FUN_100129840(&local_20,&local_2c);
  local_30 = 5;
  FUN_100129840(&local_20,&local_30);
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

