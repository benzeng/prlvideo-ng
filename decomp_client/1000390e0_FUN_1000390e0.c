
void FUN_1000390e0(long param_1,undefined8 param_2)

{
  long lVar1;
  int *local_28;
  long local_20;
  undefined1 local_11;
  
  FUN_1000393a0(&local_28,param_1 + 0x18,param_2);
  if (local_28 != (int *)0x0) {
    lVar1 = 0;
    if (local_28[1] != 0) {
      lVar1 = local_20;
    }
    LOCK();
    *local_28 = *local_28 + -1;
    local_11 = *local_28 != 0;
    UNLOCK();
    if (!(bool)local_11) {
      operator_delete(local_28);
    }
    if (lVar1 != 0) {
      QObject::deleteLater();
    }
  }
  return;
}

