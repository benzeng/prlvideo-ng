
void FUN_10069a0f0(long param_1)

{
  char cVar1;
  long lVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_100188480(&local_28,*(undefined8 *)(param_1 + 0x28));
  lVar2 = FUN_1000a9690(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10069a149;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10069a149:
  if ((lVar2 == 0) || (cVar1 = FUN_1000b7ac0(lVar2), cVar1 == '\0')) {
    FUN_10076b780(*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

