
void FUN_100ac3550(long param_1,undefined8 param_2)

{
  char cVar1;
  Data *local_28;
  undefined8 local_20;
  undefined1 local_11;
  
  local_20 = param_2;
  cVar1 = FUN_100ad5ab0();
  if (cVar1 == '\0') {
    FUN_100adbfc0(&local_28,param_1 + 0x100,&local_20);
    if (((*(int *)(param_1 + 0xb24) == local_20._4_4_) &&
        (*(int *)(local_28 + 0xc) != *(int *)(local_28 + 8))) &&
       (*(int *)(param_1 + 0xb20) == (int)local_20)) {
      FUN_100ad5cf0(param_1);
    }
    *(undefined8 *)(param_1 + 0xb20) = local_20;
    FUN_100ad5c80(param_1);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_11 = 0;
      }
      QListData::dispose(local_28);
    }
  }
  return;
}

