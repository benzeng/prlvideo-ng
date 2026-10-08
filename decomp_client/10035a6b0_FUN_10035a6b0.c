
void FUN_10035a6b0(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_28,uVar2);
  lVar1 = FUN_1000a9690(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10035a71c;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10035a71c:
  if (lVar1 != 0) {
    FUN_1000b7ae0(lVar1,param_2);
  }
  return;
}

