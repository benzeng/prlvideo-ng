
void FUN_1001c5a20(long param_1)

{
  char cVar1;
  char cVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_100188480(&local_28);
  FUN_1000ab900(param_1 + 0x10,&local_28);
  cVar1 = FUN_1001c5c70();
  if (cVar1 != '\0') {
    cVar1 = FUN_1001c4dd0(param_1);
    cVar2 = FUN_1001c5c80();
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        FUN_1001c6400();
      }
    }
    else if (cVar2 == '\0') {
      FUN_1001c6010(1);
    }
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

