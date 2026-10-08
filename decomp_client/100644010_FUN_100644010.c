
void FUN_100644010(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_10061e0f0(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),1);
  uVar1 = FUN_10063f730(param_1);
  FUN_10061e1a0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88));
  FUN_10067e360(uVar1,&local_28);
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

