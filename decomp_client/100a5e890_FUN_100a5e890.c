
void FUN_100a5e890(long param_1)

{
  char cVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  cVar1 = FUN_100a62fa0();
  if (cVar1 != '\0') {
    FUN_100a5e640(param_1,"macln:none");
    return;
  }
  FUN_100a5f0c0(&local_28,*(undefined8 *)(param_1 + 0x40));
  FUN_100a5e700(param_1,&local_28);
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
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

