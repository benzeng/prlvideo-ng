
int FUN_100154d50(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *local_40;
  long *local_38;
  long *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  FUN_100062ec0(&local_40,param_1 + 0x10);
  local_38 = (long *)(local_40 + (long)local_40[2] * 2 + 4);
  local_30 = (long *)(local_40 + (long)local_40[3] * 2 + 4);
  iVar3 = 0;
  if (local_40[2] != local_40[3]) {
    iVar3 = 0;
    do {
      local_28 = 1;
      lVar1 = *(long *)*local_38;
      lVar4 = 0;
      if ((lVar1 != 0) && (lVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
        lVar4 = ((long *)*local_38)[1];
      }
      iVar2 = FUN_10015a6e0(lVar4);
      iVar3 = iVar3 + (uint)(iVar2 == 0);
      local_38 = local_38 + 1;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) goto LAB_100154e0d;
      local_19 = 0;
    }
    FUN_100063050(&local_40,local_40);
  }
LAB_100154e0d:
  *(int *)(param_1 + 0x28) = iVar3;
  return iVar3;
}

