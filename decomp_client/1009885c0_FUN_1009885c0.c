
void FUN_1009885c0(long param_1)

{
  undefined1 local_48 [8];
  undefined **local_40;
  undefined **local_38;
  Data *local_30;
  undefined1 local_19;
  
  FUN_10098a500(local_48);
  FUN_100988b80(param_1 + 8,local_48);
  local_40 = &PTR_FUN_10227dad8;
  local_38 = &PTR_FUN_10227db30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

