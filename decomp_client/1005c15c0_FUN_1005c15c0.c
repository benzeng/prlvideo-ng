
int FUN_1005c15c0(long param_1)

{
  int iVar1;
  int iVar2;
  int *local_20;
  undefined1 local_11;
  
  FUN_1005bbe80(&local_20,*(undefined8 *)(param_1 + 0x20));
  iVar1 = local_20[3];
  iVar2 = local_20[2];
  if (*local_20 != -1) {
    if (*local_20 != 0) {
      LOCK();
      *local_20 = *local_20 + -1;
      UNLOCK();
      if (*local_20 != 0) {
        return iVar1 - iVar2;
      }
      local_11 = 0;
    }
    FUN_1005bfdc0(&local_20,local_20);
  }
  return iVar1 - iVar2;
}

