
void FUN_10022e010(long param_1)

{
  char cVar1;
  bool bVar2;
  QString local_30;
  undefined1 local_22;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  FUN_100188480(&local_30);
  cVar1 = operator==(&local_30,(QString *)(param_1 + 0x18));
  bVar2 = true;
  if (cVar1 != '\0') {
    bVar2 = *(int *)(param_1 + 0x40) != 0;
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10022e083;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10022e083:
  if (!bVar2) {
    FUN_10022d730(param_1);
  }
  return;
}

